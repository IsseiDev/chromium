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

#include "third_party/WebKit/public/platform/modules/permissions/permission.mojom-blink.h"

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
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/WebKit/Source/platform/mojo/KURLStructTraits.h"
#include "third_party/WebKit/Source/platform/mojo/SecurityOriginStructTraits.h"
namespace blink {
namespace mojom {
namespace blink {

namespace {

class PermissionService_HasPermission_ParamsDataView {
 public:
  PermissionService_HasPermission_ParamsDataView() {}

  PermissionService_HasPermission_ParamsDataView(
      internal::PermissionService_HasPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadPermission(UserType* output) const {
    auto data_value = data_->permission;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionName>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionName permission() const {
    return static_cast<::blink::mojom::blink::PermissionName>(data_->permission);
  }
  inline void GetOriginDataView(
      ::url::mojom::blink::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::blink::OriginPtr>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_HasPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_HasPermission_ParamsDataView::GetOriginDataView(
    ::url::mojom::blink::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::blink::OriginDataView(pointer, context_);
}

class PermissionService_HasPermission_ResponseParamsDataView {
 public:
  PermissionService_HasPermission_ResponseParamsDataView() {}

  PermissionService_HasPermission_ResponseParamsDataView(
      internal::PermissionService_HasPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionStatus status() const {
    return static_cast<::blink::mojom::blink::PermissionStatus>(data_->status);
  }
 private:
  internal::PermissionService_HasPermission_ResponseParams_Data* data_ = nullptr;
};




class PermissionService_RequestPermission_ParamsDataView {
 public:
  PermissionService_RequestPermission_ParamsDataView() {}

  PermissionService_RequestPermission_ParamsDataView(
      internal::PermissionService_RequestPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadPermission(UserType* output) const {
    auto data_value = data_->permission;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionName>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionName permission() const {
    return static_cast<::blink::mojom::blink::PermissionName>(data_->permission);
  }
  inline void GetOriginDataView(
      ::url::mojom::blink::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::blink::OriginPtr>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PermissionService_RequestPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_RequestPermission_ParamsDataView::GetOriginDataView(
    ::url::mojom::blink::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::blink::OriginDataView(pointer, context_);
}

class PermissionService_RequestPermission_ResponseParamsDataView {
 public:
  PermissionService_RequestPermission_ResponseParamsDataView() {}

  PermissionService_RequestPermission_ResponseParamsDataView(
      internal::PermissionService_RequestPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionStatus status() const {
    return static_cast<::blink::mojom::blink::PermissionStatus>(data_->status);
  }
 private:
  internal::PermissionService_RequestPermission_ResponseParams_Data* data_ = nullptr;
};




class PermissionService_RequestPermissions_ParamsDataView {
 public:
  PermissionService_RequestPermissions_ParamsDataView() {}

  PermissionService_RequestPermissions_ParamsDataView(
      internal::PermissionService_RequestPermissions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      mojo::ArrayDataView<PermissionName>* output);

  template <typename UserType>
  bool ReadPermission(UserType* output) {
    auto pointer = data_->permission.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PermissionName>>(
        pointer, output, context_);
  }
  inline void GetOriginDataView(
      ::url::mojom::blink::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::blink::OriginPtr>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PermissionService_RequestPermissions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_RequestPermissions_ParamsDataView::GetPermissionDataView(
    mojo::ArrayDataView<PermissionName>* output) {
  auto pointer = data_->permission.Get();
  *output = mojo::ArrayDataView<PermissionName>(pointer, context_);
}
inline void PermissionService_RequestPermissions_ParamsDataView::GetOriginDataView(
    ::url::mojom::blink::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::blink::OriginDataView(pointer, context_);
}

class PermissionService_RequestPermissions_ResponseParamsDataView {
 public:
  PermissionService_RequestPermissions_ResponseParamsDataView() {}

  PermissionService_RequestPermissions_ResponseParamsDataView(
      internal::PermissionService_RequestPermissions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusesDataView(
      mojo::ArrayDataView<::blink::mojom::blink::PermissionStatus>* output);

  template <typename UserType>
  bool ReadStatuses(UserType* output) {
    auto pointer = data_->statuses.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PermissionStatus>>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_RequestPermissions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_RequestPermissions_ResponseParamsDataView::GetStatusesDataView(
    mojo::ArrayDataView<::blink::mojom::blink::PermissionStatus>* output) {
  auto pointer = data_->statuses.Get();
  *output = mojo::ArrayDataView<::blink::mojom::blink::PermissionStatus>(pointer, context_);
}


class PermissionService_RevokePermission_ParamsDataView {
 public:
  PermissionService_RevokePermission_ParamsDataView() {}

  PermissionService_RevokePermission_ParamsDataView(
      internal::PermissionService_RevokePermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadPermission(UserType* output) const {
    auto data_value = data_->permission;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionName>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionName permission() const {
    return static_cast<::blink::mojom::blink::PermissionName>(data_->permission);
  }
  inline void GetOriginDataView(
      ::url::mojom::blink::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::blink::OriginPtr>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_RevokePermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_RevokePermission_ParamsDataView::GetOriginDataView(
    ::url::mojom::blink::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::blink::OriginDataView(pointer, context_);
}

class PermissionService_RevokePermission_ResponseParamsDataView {
 public:
  PermissionService_RevokePermission_ResponseParamsDataView() {}

  PermissionService_RevokePermission_ResponseParamsDataView(
      internal::PermissionService_RevokePermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionStatus status() const {
    return static_cast<::blink::mojom::blink::PermissionStatus>(data_->status);
  }
 private:
  internal::PermissionService_RevokePermission_ResponseParams_Data* data_ = nullptr;
};




class PermissionService_GetNextPermissionChange_ParamsDataView {
 public:
  PermissionService_GetNextPermissionChange_ParamsDataView() {}

  PermissionService_GetNextPermissionChange_ParamsDataView(
      internal::PermissionService_GetNextPermissionChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadPermission(UserType* output) const {
    auto data_value = data_->permission;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionName>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionName permission() const {
    return static_cast<::blink::mojom::blink::PermissionName>(data_->permission);
  }
  inline void GetOriginDataView(
      ::url::mojom::blink::OriginDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::blink::OriginPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadLastKnownStatus(UserType* output) const {
    auto data_value = data_->last_known_status;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionStatus last_known_status() const {
    return static_cast<::blink::mojom::blink::PermissionStatus>(data_->last_known_status);
  }
 private:
  internal::PermissionService_GetNextPermissionChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PermissionService_GetNextPermissionChange_ParamsDataView::GetOriginDataView(
    ::url::mojom::blink::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::blink::OriginDataView(pointer, context_);
}

class PermissionService_GetNextPermissionChange_ResponseParamsDataView {
 public:
  PermissionService_GetNextPermissionChange_ResponseParamsDataView() {}

  PermissionService_GetNextPermissionChange_ResponseParamsDataView(
      internal::PermissionService_GetNextPermissionChange_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::blink::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::blink::PermissionStatus status() const {
    return static_cast<::blink::mojom::blink::PermissionStatus>(data_->status);
  }
 private:
  internal::PermissionService_GetNextPermissionChange_ResponseParams_Data* data_ = nullptr;
};




}  // namespace
const char PermissionService::Name_[] = "blink::mojom::PermissionService";
const uint32_t PermissionService::Version_;

class PermissionService_HasPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_HasPermission_ForwardToCallback(
      const PermissionService::HasPermissionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::HasPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ForwardToCallback);
};
bool PermissionService_HasPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_HasPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_HasPermission_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_HasPermission_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PermissionService::HasPermission response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

class PermissionService_RequestPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermission_ForwardToCallback(
      const PermissionService::RequestPermissionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ForwardToCallback);
};
bool PermissionService_RequestPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RequestPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RequestPermission_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_RequestPermission_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PermissionService::RequestPermission response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

class PermissionService_RequestPermissions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermissions_ForwardToCallback(
      const PermissionService::RequestPermissionsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ForwardToCallback);
};
bool PermissionService_RequestPermissions_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RequestPermissions_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RequestPermissions_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WTF::Vector<::blink::mojom::blink::PermissionStatus> p_statuses{};
  PermissionService_RequestPermissions_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatuses(&p_statuses))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PermissionService::RequestPermissions response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_statuses));
  }
  return true;
}

class PermissionService_RevokePermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RevokePermission_ForwardToCallback(
      const PermissionService::RevokePermissionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RevokePermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ForwardToCallback);
};
bool PermissionService_RevokePermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RevokePermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RevokePermission_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_RevokePermission_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PermissionService::RevokePermission response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

class PermissionService_GetNextPermissionChange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_GetNextPermissionChange_ForwardToCallback(
      const PermissionService::GetNextPermissionChangeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::GetNextPermissionChangeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(PermissionService_GetNextPermissionChange_ForwardToCallback);
};
bool PermissionService_GetNextPermissionChange_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_GetNextPermissionChange_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_GetNextPermissionChange_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::blink::mojom::blink::PermissionStatus p_status{};
  PermissionService_GetNextPermissionChange_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PermissionService::GetNextPermissionChange response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

PermissionServiceProxy::PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PermissionServiceProxy::HasPermission(
    PermissionName in_permission, const RefPtr<::blink::SecurityOrigin>& in_origin, const HasPermissionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_HasPermission_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::blink::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_HasPermission_Name, size);

  auto params =
      ::blink::mojom::internal::PermissionService_HasPermission_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionName>(
      in_permission, &params->permission);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::blink::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.HasPermission request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_HasPermission_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PermissionServiceProxy::RequestPermission(
    PermissionName in_permission, const RefPtr<::blink::SecurityOrigin>& in_origin, bool in_user_gesture, const RequestPermissionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RequestPermission_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::blink::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RequestPermission_Name, size);

  auto params =
      ::blink::mojom::internal::PermissionService_RequestPermission_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionName>(
      in_permission, &params->permission);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::blink::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RequestPermission request");
  params->user_gesture = in_user_gesture;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RequestPermission_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PermissionServiceProxy::RequestPermissions(
    const WTF::Vector<PermissionName>& in_permission, const RefPtr<::blink::SecurityOrigin>& in_origin, bool in_user_gesture, const RequestPermissionsCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RequestPermissions_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PermissionName>>(
      in_permission, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::blink::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RequestPermissions_Name, size);

  auto params =
      ::blink::mojom::internal::PermissionService_RequestPermissions_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->permission)::BaseType* permission_ptr;
  const mojo::internal::ContainerValidateParams permission_validate_params(
      0, ::blink::mojom::internal::PermissionName_Data::Validate);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PermissionName>>(
      in_permission, builder.buffer(), &permission_ptr, &permission_validate_params,
      &serialization_context_);
  params->permission.Set(permission_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->permission.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.RequestPermissions request");
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::blink::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RequestPermissions request");
  params->user_gesture = in_user_gesture;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RequestPermissions_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PermissionServiceProxy::RevokePermission(
    PermissionName in_permission, const RefPtr<::blink::SecurityOrigin>& in_origin, const RevokePermissionCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RevokePermission_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::blink::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RevokePermission_Name, size);

  auto params =
      ::blink::mojom::internal::PermissionService_RevokePermission_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionName>(
      in_permission, &params->permission);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::blink::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RevokePermission request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RevokePermission_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void PermissionServiceProxy::GetNextPermissionChange(
    PermissionName in_permission, const RefPtr<::blink::SecurityOrigin>& in_origin, ::blink::mojom::blink::PermissionStatus in_last_known_status, const GetNextPermissionChangeCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_GetNextPermissionChange_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::blink::OriginPtr>(
      in_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_GetNextPermissionChange_Name, size);

  auto params =
      ::blink::mojom::internal::PermissionService_GetNextPermissionChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionName>(
      in_permission, &params->permission);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::blink::OriginPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.GetNextPermissionChange request");
  mojo::internal::Serialize<::blink::mojom::blink::PermissionStatus>(
      in_last_known_status, &params->last_known_status);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_GetNextPermissionChange_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class PermissionService_HasPermission_ProxyToResponder {
 public:
  static PermissionService::HasPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PermissionService_HasPermission_ProxyToResponder> proxy(
        new PermissionService_HasPermission_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PermissionService_HasPermission_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PermissionService_HasPermission_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PermissionService::HasPermission() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PermissionService_HasPermission_ProxyToResponder(
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
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ProxyToResponder);
};

void PermissionService_HasPermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_HasPermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_HasPermission_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PermissionService_HasPermission_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionStatus>(
      in_status, &params->status);
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
class PermissionService_RequestPermission_ProxyToResponder {
 public:
  static PermissionService::RequestPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PermissionService_RequestPermission_ProxyToResponder> proxy(
        new PermissionService_RequestPermission_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PermissionService_RequestPermission_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PermissionService_RequestPermission_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PermissionService::RequestPermission() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PermissionService_RequestPermission_ProxyToResponder(
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
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ProxyToResponder);
};

void PermissionService_RequestPermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RequestPermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RequestPermission_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PermissionService_RequestPermission_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionStatus>(
      in_status, &params->status);
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
class PermissionService_RequestPermissions_ProxyToResponder {
 public:
  static PermissionService::RequestPermissionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PermissionService_RequestPermissions_ProxyToResponder> proxy(
        new PermissionService_RequestPermissions_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PermissionService_RequestPermissions_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PermissionService_RequestPermissions_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PermissionService::RequestPermissions() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PermissionService_RequestPermissions_ProxyToResponder(
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
      const WTF::Vector<::blink::mojom::blink::PermissionStatus>& in_statuses);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ProxyToResponder);
};

void PermissionService_RequestPermissions_ProxyToResponder::Run(
    const WTF::Vector<::blink::mojom::blink::PermissionStatus>& in_statuses) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RequestPermissions_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PermissionStatus>>(
      in_statuses, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RequestPermissions_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PermissionService_RequestPermissions_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->statuses)::BaseType* statuses_ptr;
  const mojo::internal::ContainerValidateParams statuses_validate_params(
      0, ::blink::mojom::internal::PermissionStatus_Data::Validate);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PermissionStatus>>(
      in_statuses, builder.buffer(), &statuses_ptr, &statuses_validate_params,
      &serialization_context_);
  params->statuses.Set(statuses_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->statuses.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null statuses in PermissionService.RequestPermissions response");
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
class PermissionService_RevokePermission_ProxyToResponder {
 public:
  static PermissionService::RevokePermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PermissionService_RevokePermission_ProxyToResponder> proxy(
        new PermissionService_RevokePermission_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PermissionService_RevokePermission_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PermissionService_RevokePermission_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PermissionService::RevokePermission() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PermissionService_RevokePermission_ProxyToResponder(
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
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ProxyToResponder);
};

void PermissionService_RevokePermission_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_RevokePermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RevokePermission_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PermissionService_RevokePermission_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionStatus>(
      in_status, &params->status);
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
class PermissionService_GetNextPermissionChange_ProxyToResponder {
 public:
  static PermissionService::GetNextPermissionChangeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<PermissionService_GetNextPermissionChange_ProxyToResponder> proxy(
        new PermissionService_GetNextPermissionChange_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&PermissionService_GetNextPermissionChange_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~PermissionService_GetNextPermissionChange_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "PermissionService::GetNextPermissionChange() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  PermissionService_GetNextPermissionChange_ProxyToResponder(
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
      ::blink::mojom::blink::PermissionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(PermissionService_GetNextPermissionChange_ProxyToResponder);
};

void PermissionService_GetNextPermissionChange_ProxyToResponder::Run(
    ::blink::mojom::blink::PermissionStatus in_status) {
  size_t size = sizeof(::blink::mojom::internal::PermissionService_GetNextPermissionChange_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_GetNextPermissionChange_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::PermissionService_GetNextPermissionChange_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PermissionStatus>(
      in_status, &params->status);
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

PermissionServiceStub::PermissionServiceStub()
    : sink_(nullptr),
      control_message_handler_(PermissionService::Version_) {
}

PermissionServiceStub::~PermissionServiceStub() {}

bool PermissionServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      break;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      break;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      break;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      break;
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      break;
    }
  }
  return false;
}

bool PermissionServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      internal::PermissionService_HasPermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_HasPermission_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PermissionName p_permission{};
      RefPtr<::blink::SecurityOrigin> p_origin{};
      PermissionService_HasPermission_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PermissionService::HasPermission deserializer");
        return false;
      }
      PermissionService::HasPermissionCallback callback =
          PermissionService_HasPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::HasPermission");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HasPermission(
std::move(p_permission), 
std::move(p_origin), callback);
      return true;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      internal::PermissionService_RequestPermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RequestPermission_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PermissionName p_permission{};
      RefPtr<::blink::SecurityOrigin> p_origin{};
      bool p_user_gesture{};
      PermissionService_RequestPermission_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PermissionService::RequestPermission deserializer");
        return false;
      }
      PermissionService::RequestPermissionCallback callback =
          PermissionService_RequestPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RequestPermission");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequestPermission(
std::move(p_permission), 
std::move(p_origin), 
std::move(p_user_gesture), callback);
      return true;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      internal::PermissionService_RequestPermissions_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RequestPermissions_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::Vector<PermissionName> p_permission{};
      RefPtr<::blink::SecurityOrigin> p_origin{};
      bool p_user_gesture{};
      PermissionService_RequestPermissions_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_user_gesture = input_data_view.user_gesture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PermissionService::RequestPermissions deserializer");
        return false;
      }
      PermissionService::RequestPermissionsCallback callback =
          PermissionService_RequestPermissions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RequestPermissions");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequestPermissions(
std::move(p_permission), 
std::move(p_origin), 
std::move(p_user_gesture), callback);
      return true;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      internal::PermissionService_RevokePermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RevokePermission_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PermissionName p_permission{};
      RefPtr<::blink::SecurityOrigin> p_origin{};
      PermissionService_RevokePermission_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PermissionService::RevokePermission deserializer");
        return false;
      }
      PermissionService::RevokePermissionCallback callback =
          PermissionService_RevokePermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RevokePermission");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RevokePermission(
std::move(p_permission), 
std::move(p_origin), callback);
      return true;
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      internal::PermissionService_GetNextPermissionChange_Params_Data* params =
          reinterpret_cast<internal::PermissionService_GetNextPermissionChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PermissionName p_permission{};
      RefPtr<::blink::SecurityOrigin> p_origin{};
      ::blink::mojom::blink::PermissionStatus p_last_known_status{};
      PermissionService_GetNextPermissionChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPermission(&p_permission))
        success = false;
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadLastKnownStatus(&p_last_known_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PermissionService::GetNextPermissionChange deserializer");
        return false;
      }
      PermissionService::GetNextPermissionChangeCallback callback =
          PermissionService_GetNextPermissionChange_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::GetNextPermissionChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetNextPermissionChange(
std::move(p_permission), 
std::move(p_origin), 
std::move(p_last_known_status), callback);
      return true;
    }
  }
  return false;
}

PermissionServiceRequestValidator::PermissionServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PermissionService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_GetNextPermissionChange_Params_Data>(
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

PermissionServiceResponseValidator::PermissionServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PermissionService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_GetNextPermissionChange_ResponseParams_Data>(
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
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif