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

#include "components/password_manager/content/public/interfaces/credential_manager.mojom.h"

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
#include "url/mojo/origin_struct_traits.h"
#include "components/password_manager/content/public/cpp/credential_manager_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
namespace password_manager {
namespace mojom {

namespace {

class CredentialManager_Store_ParamsDataView {
 public:
  CredentialManager_Store_ParamsDataView() {}

  CredentialManager_Store_ParamsDataView(
      internal::CredentialManager_Store_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  bool ReadCredential(UserType* output) {
    auto pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Store_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CredentialManager_Store_ParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}

class CredentialManager_Store_ResponseParamsDataView {
 public:
  CredentialManager_Store_ResponseParamsDataView() {}

  CredentialManager_Store_ResponseParamsDataView(
      internal::CredentialManager_Store_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_Store_ResponseParams_Data* data_ = nullptr;
};




class CredentialManager_RequireUserMediation_ParamsDataView {
 public:
  CredentialManager_RequireUserMediation_ParamsDataView() {}

  CredentialManager_RequireUserMediation_ParamsDataView(
      internal::CredentialManager_RequireUserMediation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_RequireUserMediation_Params_Data* data_ = nullptr;
};



class CredentialManager_RequireUserMediation_ResponseParamsDataView {
 public:
  CredentialManager_RequireUserMediation_ResponseParamsDataView() {}

  CredentialManager_RequireUserMediation_ResponseParamsDataView(
      internal::CredentialManager_RequireUserMediation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_RequireUserMediation_ResponseParams_Data* data_ = nullptr;
};




class CredentialManager_Get_ParamsDataView {
 public:
  CredentialManager_Get_ParamsDataView() {}

  CredentialManager_Get_ParamsDataView(
      internal::CredentialManager_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool zero_click_only() const {
    return data_->zero_click_only;
  }
  bool include_passwords() const {
    return data_->include_passwords;
  }
  inline void GetFederationsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  bool ReadFederations(UserType* output) {
    auto pointer = data_->federations.Get();
    return mojo::internal::Deserialize<mojo::Array<::url::mojom::UrlPtr>>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CredentialManager_Get_ParamsDataView::GetFederationsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->federations.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}

class CredentialManager_Get_ResponseParamsDataView {
 public:
  CredentialManager_Get_ResponseParamsDataView() {}

  CredentialManager_Get_ResponseParamsDataView(
      internal::CredentialManager_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialManagerError>(
        data_value, output);
  }

  ::password_manager::mojom::CredentialManagerError error() const {
    return static_cast<::password_manager::mojom::CredentialManagerError>(data_->error);
  }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  bool ReadCredential(UserType* output) {
    auto pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::password_manager::mojom::CredentialInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CredentialManager_Get_ResponseParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}


}  // namespace// static
CredentialInfoPtr CredentialInfo::New() {
  CredentialInfoPtr rv;
  mojo::internal::StructHelper<CredentialInfo>::Initialize(&rv);
  return rv;
}

CredentialInfo::CredentialInfo()
    : type(),
      id(),
      name(),
      icon(),
      password(),
      federation() {
}

CredentialInfo::~CredentialInfo() {
}
const char CredentialManager::Name_[] = "password_manager::mojom::CredentialManager";
const uint32_t CredentialManager::Version_;

class CredentialManager_Store_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Store_ForwardToCallback(
      const CredentialManager::StoreCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::StoreCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Store_ForwardToCallback);
};
bool CredentialManager_Store_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::CredentialManager_Store_ResponseParams_Data* params =
      reinterpret_cast<internal::CredentialManager_Store_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CredentialManager_Store_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::Store response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

class CredentialManager_RequireUserMediation_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_RequireUserMediation_ForwardToCallback(
      const CredentialManager::RequireUserMediationCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::RequireUserMediationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_RequireUserMediation_ForwardToCallback);
};
bool CredentialManager_RequireUserMediation_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::CredentialManager_RequireUserMediation_ResponseParams_Data* params =
      reinterpret_cast<internal::CredentialManager_RequireUserMediation_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CredentialManager_RequireUserMediation_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::RequireUserMediation response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

class CredentialManager_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CredentialManager_Get_ForwardToCallback(
      const CredentialManager::GetCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CredentialManager::GetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Get_ForwardToCallback);
};
bool CredentialManager_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::CredentialManager_Get_ResponseParams_Data* params =
      reinterpret_cast<internal::CredentialManager_Get_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  CredentialManagerError p_error{};
  base::Optional<password_manager::CredentialInfo> p_credential{};
  CredentialManager_Get_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadCredential(&p_credential))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "CredentialManager::Get response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_credential));
  }
  return true;
}

CredentialManagerProxy::CredentialManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void CredentialManagerProxy::Store(
    const password_manager::CredentialInfo& in_credential, const StoreCallback& callback) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_Store_Params_Data);
  size += mojo::internal::PrepareToSerialize<::password_manager::mojom::CredentialInfoPtr>(
      in_credential, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCredentialManager_Store_Name, size);

  auto params =
      ::password_manager::mojom::internal::CredentialManager_Store_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->credential)::BaseType* credential_ptr;
  mojo::internal::Serialize<::password_manager::mojom::CredentialInfoPtr>(
      in_credential, builder.buffer(), &credential_ptr, &serialization_context_);
  params->credential.Set(credential_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->credential.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null credential in CredentialManager.Store request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new CredentialManager_Store_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void CredentialManagerProxy::RequireUserMediation(
    const RequireUserMediationCallback& callback) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_RequireUserMediation_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kCredentialManager_RequireUserMediation_Name, size);

  auto params =
      ::password_manager::mojom::internal::CredentialManager_RequireUserMediation_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new CredentialManager_RequireUserMediation_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void CredentialManagerProxy::Get(
    bool in_zero_click_only, bool in_include_passwords, const std::vector<GURL>& in_federations, const GetCallback& callback) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_Get_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::url::mojom::UrlPtr>>(
      in_federations, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kCredentialManager_Get_Name, size);

  auto params =
      ::password_manager::mojom::internal::CredentialManager_Get_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->zero_click_only = in_zero_click_only;
  params->include_passwords = in_include_passwords;
  typename decltype(params->federations)::BaseType* federations_ptr;
  const mojo::internal::ContainerValidateParams federations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::url::mojom::UrlPtr>>(
      in_federations, builder.buffer(), &federations_ptr, &federations_validate_params,
      &serialization_context_);
  params->federations.Set(federations_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->federations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null federations in CredentialManager.Get request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new CredentialManager_Get_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class CredentialManager_Store_ProxyToResponder {
 public:
  static CredentialManager::StoreCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<CredentialManager_Store_ProxyToResponder> proxy(
        new CredentialManager_Store_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&CredentialManager_Store_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~CredentialManager_Store_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "CredentialManager::Store() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  CredentialManager_Store_ProxyToResponder(
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
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Store_ProxyToResponder);
};

void CredentialManager_Store_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_Store_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCredentialManager_Store_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::password_manager::mojom::internal::CredentialManager_Store_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
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
class CredentialManager_RequireUserMediation_ProxyToResponder {
 public:
  static CredentialManager::RequireUserMediationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<CredentialManager_RequireUserMediation_ProxyToResponder> proxy(
        new CredentialManager_RequireUserMediation_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&CredentialManager_RequireUserMediation_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~CredentialManager_RequireUserMediation_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "CredentialManager::RequireUserMediation() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  CredentialManager_RequireUserMediation_ProxyToResponder(
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
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_RequireUserMediation_ProxyToResponder);
};

void CredentialManager_RequireUserMediation_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_RequireUserMediation_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCredentialManager_RequireUserMediation_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::password_manager::mojom::internal::CredentialManager_RequireUserMediation_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
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
class CredentialManager_Get_ProxyToResponder {
 public:
  static CredentialManager::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<CredentialManager_Get_ProxyToResponder> proxy(
        new CredentialManager_Get_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&CredentialManager_Get_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~CredentialManager_Get_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "CredentialManager::Get() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  CredentialManager_Get_ProxyToResponder(
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
      CredentialManagerError in_error, const base::Optional<password_manager::CredentialInfo>& in_credential);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(CredentialManager_Get_ProxyToResponder);
};

void CredentialManager_Get_ProxyToResponder::Run(
    CredentialManagerError in_error, const base::Optional<password_manager::CredentialInfo>& in_credential) {
  size_t size = sizeof(::password_manager::mojom::internal::CredentialManager_Get_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::password_manager::mojom::CredentialInfoPtr>(
      in_credential, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCredentialManager_Get_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::password_manager::mojom::internal::CredentialManager_Get_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::password_manager::mojom::CredentialManagerError>(
      in_error, &params->error);
  typename decltype(params->credential)::BaseType* credential_ptr;
  mojo::internal::Serialize<::password_manager::mojom::CredentialInfoPtr>(
      in_credential, builder.buffer(), &credential_ptr, &serialization_context_);
  params->credential.Set(credential_ptr);
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

CredentialManagerStub::CredentialManagerStub()
    : sink_(nullptr),
      control_message_handler_(CredentialManager::Version_) {
}

CredentialManagerStub::~CredentialManagerStub() {}

bool CredentialManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      break;
    }
    case internal::kCredentialManager_RequireUserMediation_Name: {
      break;
    }
    case internal::kCredentialManager_Get_Name: {
      break;
    }
  }
  return false;
}

bool CredentialManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      internal::CredentialManager_Store_Params_Data* params =
          reinterpret_cast<internal::CredentialManager_Store_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      password_manager::CredentialInfo p_credential{};
      CredentialManager_Store_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCredential(&p_credential))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::Store deserializer");
        return false;
      }
      CredentialManager::StoreCallback callback =
          CredentialManager_Store_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "CredentialManager::Store");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Store(
std::move(p_credential), callback);
      return true;
    }
    case internal::kCredentialManager_RequireUserMediation_Name: {
      internal::CredentialManager_RequireUserMediation_Params_Data* params =
          reinterpret_cast<internal::CredentialManager_RequireUserMediation_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      CredentialManager_RequireUserMediation_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::RequireUserMediation deserializer");
        return false;
      }
      CredentialManager::RequireUserMediationCallback callback =
          CredentialManager_RequireUserMediation_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "CredentialManager::RequireUserMediation");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequireUserMediation(callback);
      return true;
    }
    case internal::kCredentialManager_Get_Name: {
      internal::CredentialManager_Get_Params_Data* params =
          reinterpret_cast<internal::CredentialManager_Get_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_zero_click_only{};
      bool p_include_passwords{};
      std::vector<GURL> p_federations{};
      CredentialManager_Get_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_zero_click_only = input_data_view.zero_click_only();
      p_include_passwords = input_data_view.include_passwords();
      if (!input_data_view.ReadFederations(&p_federations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CredentialManager::Get deserializer");
        return false;
      }
      CredentialManager::GetCallback callback =
          CredentialManager_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "CredentialManager::Get");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Get(
std::move(p_zero_click_only), 
std::move(p_include_passwords), 
std::move(p_federations), callback);
      return true;
    }
  }
  return false;
}

CredentialManagerRequestValidator::CredentialManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CredentialManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "CredentialManager RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Store_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCredentialManager_RequireUserMediation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_RequireUserMediation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCredentialManager_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Get_Params_Data>(
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

CredentialManagerResponseValidator::CredentialManagerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CredentialManagerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "CredentialManager ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCredentialManager_Store_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Store_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCredentialManager_RequireUserMediation_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_RequireUserMediation_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCredentialManager_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CredentialManager_Get_ResponseParams_Data>(
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
}  // namespace password_manager

namespace mojo {


// static
bool StructTraits<::password_manager::mojom::CredentialInfo, ::password_manager::mojom::CredentialInfoPtr>::Read(
    ::password_manager::mojom::CredentialInfoDataView input,
    ::password_manager::mojom::CredentialInfoPtr* output) {
  bool success = true;
  ::password_manager::mojom::CredentialInfoPtr result(::password_manager::mojom::CredentialInfo::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadPassword(&result->password))
        success = false;
      if (!input.ReadFederation(&result->federation))
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