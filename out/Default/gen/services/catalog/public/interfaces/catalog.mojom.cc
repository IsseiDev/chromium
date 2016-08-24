// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/catalog/public/interfaces/catalog.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace catalog {
namespace mojom {

namespace {

class Catalog_GetEntries_ParamsDataView {
 public:
  Catalog_GetEntries_ParamsDataView() {}

  Catalog_GetEntries_ParamsDataView(
      internal::Catalog_GetEntries_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadNames(UserType* output) {
    auto pointer = data_->names.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntries_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntries_ParamsDataView::GetNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}

class Catalog_GetEntries_ResponseParamsDataView {
 public:
  Catalog_GetEntries_ResponseParamsDataView() {}

  Catalog_GetEntries_ResponseParamsDataView(
      internal::Catalog_GetEntries_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  bool ReadEntries(UserType* output) {
    auto pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::Array<::catalog::mojom::EntryPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntries_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntries_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}


class Catalog_GetEntriesProvidingClass_ParamsDataView {
 public:
  Catalog_GetEntriesProvidingClass_ParamsDataView() {}

  Catalog_GetEntriesProvidingClass_ParamsDataView(
      internal::Catalog_GetEntriesProvidingClass_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClazzDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadClazz(UserType* output) {
    auto pointer = data_->clazz.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesProvidingClass_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesProvidingClass_ParamsDataView::GetClazzDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->clazz.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Catalog_GetEntriesProvidingClass_ResponseParamsDataView {
 public:
  Catalog_GetEntriesProvidingClass_ResponseParamsDataView() {}

  Catalog_GetEntriesProvidingClass_ResponseParamsDataView(
      internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  bool ReadEntries(UserType* output) {
    auto pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::Array<::catalog::mojom::EntryPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesProvidingClass_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}


class Catalog_GetEntriesConsumingMIMEType_ParamsDataView {
 public:
  Catalog_GetEntriesConsumingMIMEType_ParamsDataView() {}

  Catalog_GetEntriesConsumingMIMEType_ParamsDataView(
      internal::Catalog_GetEntriesConsumingMIMEType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMimeType(UserType* output) {
    auto pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesConsumingMIMEType_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesConsumingMIMEType_ParamsDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Catalog_GetEntriesConsumingMIMEType_ResponseParamsDataView {
 public:
  Catalog_GetEntriesConsumingMIMEType_ResponseParamsDataView() {}

  Catalog_GetEntriesConsumingMIMEType_ResponseParamsDataView(
      internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  bool ReadEntries(UserType* output) {
    auto pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::Array<::catalog::mojom::EntryPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesConsumingMIMEType_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}


class Catalog_GetEntriesSupportingScheme_ParamsDataView {
 public:
  Catalog_GetEntriesSupportingScheme_ParamsDataView() {}

  Catalog_GetEntriesSupportingScheme_ParamsDataView(
      internal::Catalog_GetEntriesSupportingScheme_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProtocolSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadProtocolScheme(UserType* output) {
    auto pointer = data_->protocol_scheme.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesSupportingScheme_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesSupportingScheme_ParamsDataView::GetProtocolSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->protocol_scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Catalog_GetEntriesSupportingScheme_ResponseParamsDataView {
 public:
  Catalog_GetEntriesSupportingScheme_ResponseParamsDataView() {}

  Catalog_GetEntriesSupportingScheme_ResponseParamsDataView(
      internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<EntryDataView>* output);

  template <typename UserType>
  bool ReadEntries(UserType* output) {
    auto pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::Array<::catalog::mojom::EntryPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Catalog_GetEntriesSupportingScheme_ResponseParamsDataView::GetEntriesDataView(
    mojo::ArrayDataView<EntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<EntryDataView>(pointer, context_);
}


}  // namespace// static
EntryPtr Entry::New() {
  EntryPtr rv;
  mojo::internal::StructHelper<Entry>::Initialize(&rv);
  return rv;
}

Entry::Entry()
    : name(),
      display_name() {
}

Entry::~Entry() {
}
const char Catalog::Name_[] = "catalog::mojom::Catalog";
const uint32_t Catalog::Version_;
bool Catalog::GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* entries) {
  NOTREACHED();
  return false;
}
class Catalog_GetEntries_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntries_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, std::vector<EntryPtr>* out_entries)
      : serialization_context_(std::move(group_controller)), result_(result), out_entries_(out_entries) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  std::vector<EntryPtr>* out_entries_;DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_HandleSyncResponse);
};
bool Catalog_GetEntries_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::Catalog_GetEntries_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntries_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntries_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntries response deserializer");
    return false;
  }
  *out_entries_ = std::move(p_entries);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class Catalog_GetEntries_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntries_ForwardToCallback(
      const Catalog::GetEntriesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_ForwardToCallback);
};
bool Catalog_GetEntries_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Catalog_GetEntries_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntries_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntries_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntries response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_entries));
  }
  return true;
}

class Catalog_GetEntriesProvidingClass_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntriesProvidingClass_ForwardToCallback(
      const Catalog::GetEntriesProvidingClassCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesProvidingClassCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesProvidingClass_ForwardToCallback);
};
bool Catalog_GetEntriesProvidingClass_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntriesProvidingClass_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntriesProvidingClass response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_entries));
  }
  return true;
}

class Catalog_GetEntriesConsumingMIMEType_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntriesConsumingMIMEType_ForwardToCallback(
      const Catalog::GetEntriesConsumingMIMETypeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesConsumingMIMETypeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesConsumingMIMEType_ForwardToCallback);
};
bool Catalog_GetEntriesConsumingMIMEType_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntriesConsumingMIMEType_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntriesConsumingMIMEType response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_entries));
  }
  return true;
}

class Catalog_GetEntriesSupportingScheme_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntriesSupportingScheme_ForwardToCallback(
      const Catalog::GetEntriesSupportingSchemeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesSupportingSchemeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesSupportingScheme_ForwardToCallback);
};
bool Catalog_GetEntriesSupportingScheme_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntriesSupportingScheme_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntriesSupportingScheme response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_entries));
  }
  return true;
}

CatalogProxy::CatalogProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool CatalogProxy::GetEntries(
    const base::Optional<std::vector<std::string>>& param_names, std::vector<EntryPtr>* param_entries) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntries_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
      param_names, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kCatalog_GetEntries_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::catalog::mojom::internal::Catalog_GetEntries_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->names)::BaseType* names_ptr;
  const mojo::internal::ContainerValidateParams names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::Array<mojo::String>>(
      param_names, builder.buffer(), &names_ptr, &names_validate_params,
      &serialization_context_);
  params->names.Set(names_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new Catalog_GetEntries_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_entries);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void CatalogProxy::GetEntries(
    const base::Optional<std::vector<std::string>>& in_names, const GetEntriesCallback& callback) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntries_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
      in_names, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCatalog_GetEntries_Name, size);

  auto params =
      ::catalog::mojom::internal::Catalog_GetEntries_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->names)::BaseType* names_ptr;
  const mojo::internal::ContainerValidateParams names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::Array<mojo::String>>(
      in_names, builder.buffer(), &names_ptr, &names_validate_params,
      &serialization_context_);
  params->names.Set(names_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Catalog_GetEntries_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void CatalogProxy::GetEntriesProvidingClass(
    const std::string& in_clazz, const GetEntriesProvidingClassCallback& callback) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesProvidingClass_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_clazz, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCatalog_GetEntriesProvidingClass_Name, size);

  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesProvidingClass_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->clazz)::BaseType* clazz_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_clazz, builder.buffer(), &clazz_ptr, &serialization_context_);
  params->clazz.Set(clazz_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clazz.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clazz in Catalog.GetEntriesProvidingClass request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Catalog_GetEntriesProvidingClass_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void CatalogProxy::GetEntriesConsumingMIMEType(
    const std::string& in_mime_type, const GetEntriesConsumingMIMETypeCallback& callback) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesConsumingMIMEType_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_mime_type, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCatalog_GetEntriesConsumingMIMEType_Name, size);

  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesConsumingMIMEType_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->mime_type)::BaseType* mime_type_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_mime_type, builder.buffer(), &mime_type_ptr, &serialization_context_);
  params->mime_type.Set(mime_type_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in Catalog.GetEntriesConsumingMIMEType request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Catalog_GetEntriesConsumingMIMEType_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void CatalogProxy::GetEntriesSupportingScheme(
    const std::string& in_protocol_scheme, const GetEntriesSupportingSchemeCallback& callback) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesSupportingScheme_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_protocol_scheme, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCatalog_GetEntriesSupportingScheme_Name, size);

  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesSupportingScheme_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->protocol_scheme)::BaseType* protocol_scheme_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_protocol_scheme, builder.buffer(), &protocol_scheme_ptr, &serialization_context_);
  params->protocol_scheme.Set(protocol_scheme_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->protocol_scheme.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null protocol_scheme in Catalog.GetEntriesSupportingScheme request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Catalog_GetEntriesSupportingScheme_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Catalog_GetEntries_ProxyToResponder {
 public:
  static Catalog::GetEntriesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Catalog_GetEntries_ProxyToResponder> proxy(
        new Catalog_GetEntries_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Catalog_GetEntries_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Catalog_GetEntries_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Catalog::GetEntries() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Catalog_GetEntries_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_ProxyToResponder);
};

void Catalog_GetEntries_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntries_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCatalog_GetEntries_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::catalog::mojom::internal::Catalog_GetEntries_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->entries)::BaseType* entries_ptr;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, builder.buffer(), &entries_ptr, &entries_validate_params,
      &serialization_context_);
  params->entries.Set(entries_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in Catalog.GetEntries response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Catalog_GetEntriesProvidingClass_ProxyToResponder {
 public:
  static Catalog::GetEntriesProvidingClassCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Catalog_GetEntriesProvidingClass_ProxyToResponder> proxy(
        new Catalog_GetEntriesProvidingClass_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Catalog_GetEntriesProvidingClass_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Catalog_GetEntriesProvidingClass_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Catalog::GetEntriesProvidingClass() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Catalog_GetEntriesProvidingClass_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesProvidingClass_ProxyToResponder);
};

void Catalog_GetEntriesProvidingClass_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCatalog_GetEntriesProvidingClass_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->entries)::BaseType* entries_ptr;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, builder.buffer(), &entries_ptr, &entries_validate_params,
      &serialization_context_);
  params->entries.Set(entries_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in Catalog.GetEntriesProvidingClass response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Catalog_GetEntriesConsumingMIMEType_ProxyToResponder {
 public:
  static Catalog::GetEntriesConsumingMIMETypeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Catalog_GetEntriesConsumingMIMEType_ProxyToResponder> proxy(
        new Catalog_GetEntriesConsumingMIMEType_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Catalog_GetEntriesConsumingMIMEType_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Catalog_GetEntriesConsumingMIMEType_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Catalog::GetEntriesConsumingMIMEType() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Catalog_GetEntriesConsumingMIMEType_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesConsumingMIMEType_ProxyToResponder);
};

void Catalog_GetEntriesConsumingMIMEType_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCatalog_GetEntriesConsumingMIMEType_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->entries)::BaseType* entries_ptr;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, builder.buffer(), &entries_ptr, &entries_validate_params,
      &serialization_context_);
  params->entries.Set(entries_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in Catalog.GetEntriesConsumingMIMEType response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Catalog_GetEntriesSupportingScheme_ProxyToResponder {
 public:
  static Catalog::GetEntriesSupportingSchemeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Catalog_GetEntriesSupportingScheme_ProxyToResponder> proxy(
        new Catalog_GetEntriesSupportingScheme_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Catalog_GetEntriesSupportingScheme_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Catalog_GetEntriesSupportingScheme_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Catalog::GetEntriesSupportingScheme() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Catalog_GetEntriesSupportingScheme_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesSupportingScheme_ProxyToResponder);
};

void Catalog_GetEntriesSupportingScheme_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  size_t size = sizeof(::catalog::mojom::internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCatalog_GetEntriesSupportingScheme_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::catalog::mojom::internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->entries)::BaseType* entries_ptr;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::catalog::mojom::EntryPtr>>(
      in_entries, builder.buffer(), &entries_ptr, &entries_validate_params,
      &serialization_context_);
  params->entries.Set(entries_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in Catalog.GetEntriesSupportingScheme response");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

CatalogStub::CatalogStub()
    : sink_(nullptr),
      control_message_handler_(Catalog::Version_) {
}

CatalogStub::~CatalogStub() {}

bool CatalogStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      break;
    }
    case internal::kCatalog_GetEntriesProvidingClass_Name: {
      break;
    }
    case internal::kCatalog_GetEntriesConsumingMIMEType_Name: {
      break;
    }
    case internal::kCatalog_GetEntriesSupportingScheme_Name: {
      break;
    }
  }
  return false;
}

bool CatalogStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      internal::Catalog_GetEntries_Params_Data* params =
          reinterpret_cast<internal::Catalog_GetEntries_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      base::Optional<std::vector<std::string>> p_names{};
      Catalog_GetEntries_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadNames(&p_names))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntries deserializer");
        return false;
      }
      Catalog::GetEntriesCallback callback =
          Catalog_GetEntries_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Catalog::GetEntries");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetEntries(
std::move(p_names), callback);
      return true;
    }
    case internal::kCatalog_GetEntriesProvidingClass_Name: {
      internal::Catalog_GetEntriesProvidingClass_Params_Data* params =
          reinterpret_cast<internal::Catalog_GetEntriesProvidingClass_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_clazz{};
      Catalog_GetEntriesProvidingClass_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadClazz(&p_clazz))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntriesProvidingClass deserializer");
        return false;
      }
      Catalog::GetEntriesProvidingClassCallback callback =
          Catalog_GetEntriesProvidingClass_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Catalog::GetEntriesProvidingClass");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetEntriesProvidingClass(
std::move(p_clazz), callback);
      return true;
    }
    case internal::kCatalog_GetEntriesConsumingMIMEType_Name: {
      internal::Catalog_GetEntriesConsumingMIMEType_Params_Data* params =
          reinterpret_cast<internal::Catalog_GetEntriesConsumingMIMEType_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_mime_type{};
      Catalog_GetEntriesConsumingMIMEType_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMimeType(&p_mime_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntriesConsumingMIMEType deserializer");
        return false;
      }
      Catalog::GetEntriesConsumingMIMETypeCallback callback =
          Catalog_GetEntriesConsumingMIMEType_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Catalog::GetEntriesConsumingMIMEType");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetEntriesConsumingMIMEType(
std::move(p_mime_type), callback);
      return true;
    }
    case internal::kCatalog_GetEntriesSupportingScheme_Name: {
      internal::Catalog_GetEntriesSupportingScheme_Params_Data* params =
          reinterpret_cast<internal::Catalog_GetEntriesSupportingScheme_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_protocol_scheme{};
      Catalog_GetEntriesSupportingScheme_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadProtocolScheme(&p_protocol_scheme))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntriesSupportingScheme deserializer");
        return false;
      }
      Catalog::GetEntriesSupportingSchemeCallback callback =
          Catalog_GetEntriesSupportingScheme_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Catalog::GetEntriesSupportingScheme");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetEntriesSupportingScheme(
std::move(p_protocol_scheme), callback);
      return true;
    }
  }
  return false;
}

CatalogRequestValidator::CatalogRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CatalogRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Catalog RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntries_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesProvidingClass_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesProvidingClass_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesConsumingMIMEType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesConsumingMIMEType_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesSupportingScheme_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesSupportingScheme_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

CatalogResponseValidator::CatalogResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CatalogResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Catalog ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntries_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesProvidingClass_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesProvidingClass_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesConsumingMIMEType_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesConsumingMIMEType_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCatalog_GetEntriesSupportingScheme_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesSupportingScheme_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace catalog

namespace mojo {


// static
bool StructTraits<::catalog::mojom::Entry, ::catalog::mojom::EntryPtr>::Read(
    ::catalog::mojom::EntryDataView input,
    ::catalog::mojom::EntryPtr* output) {
  bool success = true;
  ::catalog::mojom::EntryPtr result(::catalog::mojom::Entry::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif