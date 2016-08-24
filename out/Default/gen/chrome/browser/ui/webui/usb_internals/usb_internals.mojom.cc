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

#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom.h"

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
#include "url/mojo/url_gurl_struct_traits.h"
namespace mojom {

namespace {

class UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView() {}

  UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView(
      internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* data,
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
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSerialNumber(UserType* output) {
    auto pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetLandingPageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLandingPage(UserType* output) {
    auto pointer = data_->landing_page.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAllowedOriginDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAllowedOrigin(UserType* output) {
    auto pointer = data_->allowed_origin.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetLandingPageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->landing_page.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView::GetAllowedOriginDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->allowed_origin.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView() {}

  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView() {}

  UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView(
      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGuid(UserType* output) {
    auto pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView() {}

  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* data_ = nullptr;
};




class UsbInternalsPageHandler_GetTestDevices_ParamsDataView {
 public:
  UsbInternalsPageHandler_GetTestDevices_ParamsDataView() {}

  UsbInternalsPageHandler_GetTestDevices_ParamsDataView(
      internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* data_ = nullptr;
};



class UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView {
 public:
  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView() {}

  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView(
      internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<TestDeviceInfoDataView>* output);

  template <typename UserType>
  bool ReadDevices(UserType* output) {
    auto pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::TestDeviceInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<TestDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<TestDeviceInfoDataView>(pointer, context_);
}


}  // namespace// static
TestDeviceInfoPtr TestDeviceInfo::New() {
  TestDeviceInfoPtr rv;
  mojo::internal::StructHelper<TestDeviceInfo>::Initialize(&rv);
  return rv;
}

TestDeviceInfo::TestDeviceInfo()
    : guid(),
      name(),
      serial_number(),
      landing_page(),
      allowed_origin() {
}

TestDeviceInfo::~TestDeviceInfo() {
}
const char UsbInternalsPageHandler::Name_[] = "mojom::UsbInternalsPageHandler";
const uint32_t UsbInternalsPageHandler::Version_;

class UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback(
      const UsbInternalsPageHandler::AddDeviceForTestingCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::AddDeviceForTestingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback);
};
bool UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  std::string p_message{};
  UsbInternalsPageHandler_AddDeviceForTesting_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadMessage(&p_message))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::AddDeviceForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success), 
std::move(p_message));
  }
  return true;
}

class UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback(
      const UsbInternalsPageHandler::RemoveDeviceForTestingCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::RemoveDeviceForTestingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback);
};
bool UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::RemoveDeviceForTesting response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

class UsbInternalsPageHandler_GetTestDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UsbInternalsPageHandler_GetTestDevices_ForwardToCallback(
      const UsbInternalsPageHandler::GetTestDevicesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UsbInternalsPageHandler::GetTestDevicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_GetTestDevices_ForwardToCallback);
};
bool UsbInternalsPageHandler_GetTestDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data* params =
      reinterpret_cast<internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<TestDeviceInfoPtr> p_devices{};
  UsbInternalsPageHandler_GetTestDevices_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadDevices(&p_devices))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "UsbInternalsPageHandler::GetTestDevices response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_devices));
  }
  return true;
}

UsbInternalsPageHandlerProxy::UsbInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void UsbInternalsPageHandlerProxy::AddDeviceForTesting(
    const std::string& in_name, const std::string& in_serial_number, const std::string& in_landing_page, const std::string& in_allowed_origin, const AddDeviceForTestingCallback& callback) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_name, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_serial_number, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_landing_page, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_allowed_origin, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name, size);

  auto params =
      ::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->name)::BaseType* name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_name, builder.buffer(), &name_ptr, &serialization_context_);
  params->name.Set(name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in UsbInternalsPageHandler.AddDeviceForTesting request");
  typename decltype(params->serial_number)::BaseType* serial_number_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_serial_number, builder.buffer(), &serial_number_ptr, &serialization_context_);
  params->serial_number.Set(serial_number_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->serial_number.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null serial_number in UsbInternalsPageHandler.AddDeviceForTesting request");
  typename decltype(params->landing_page)::BaseType* landing_page_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_landing_page, builder.buffer(), &landing_page_ptr, &serialization_context_);
  params->landing_page.Set(landing_page_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->landing_page.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null landing_page in UsbInternalsPageHandler.AddDeviceForTesting request");
  typename decltype(params->allowed_origin)::BaseType* allowed_origin_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_allowed_origin, builder.buffer(), &allowed_origin_ptr, &serialization_context_);
  params->allowed_origin.Set(allowed_origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allowed_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allowed_origin in UsbInternalsPageHandler.AddDeviceForTesting request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UsbInternalsPageHandler_AddDeviceForTesting_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void UsbInternalsPageHandlerProxy::RemoveDeviceForTesting(
    const std::string& in_guid, const RemoveDeviceForTestingCallback& callback) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_guid, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name, size);

  auto params =
      ::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->guid)::BaseType* guid_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_guid, builder.buffer(), &guid_ptr, &serialization_context_);
  params->guid.Set(guid_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null guid in UsbInternalsPageHandler.RemoveDeviceForTesting request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UsbInternalsPageHandler_RemoveDeviceForTesting_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void UsbInternalsPageHandlerProxy::GetTestDevices(
    const GetTestDevicesCallback& callback) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_GetTestDevices_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kUsbInternalsPageHandler_GetTestDevices_Name, size);

  auto params =
      ::mojom::internal::UsbInternalsPageHandler_GetTestDevices_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UsbInternalsPageHandler_GetTestDevices_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::AddDeviceForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "UsbInternalsPageHandler::AddDeviceForTesting() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder(
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
      bool in_success, const std::string& in_message);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder);
};

void UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::Run(
    bool in_success, const std::string& in_message) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_message, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in UsbInternalsPageHandler.AddDeviceForTesting response");
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
class UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::RemoveDeviceForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "UsbInternalsPageHandler::RemoveDeviceForTesting() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder);
};

void UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data::New(builder.buffer());
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
class UsbInternalsPageHandler_GetTestDevices_ProxyToResponder {
 public:
  static UsbInternalsPageHandler::GetTestDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<UsbInternalsPageHandler_GetTestDevices_ProxyToResponder> proxy(
        new UsbInternalsPageHandler_GetTestDevices_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~UsbInternalsPageHandler_GetTestDevices_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "UsbInternalsPageHandler::GetTestDevices() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  UsbInternalsPageHandler_GetTestDevices_ProxyToResponder(
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
      std::vector<TestDeviceInfoPtr> in_devices);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(UsbInternalsPageHandler_GetTestDevices_ProxyToResponder);
};

void UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::Run(
    std::vector<TestDeviceInfoPtr> in_devices) {
  size_t size = sizeof(::mojom::internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::TestDeviceInfoPtr>>(
      in_devices, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUsbInternalsPageHandler_GetTestDevices_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->devices)::BaseType* devices_ptr;
  const mojo::internal::ContainerValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojom::TestDeviceInfoPtr>>(
      in_devices, builder.buffer(), &devices_ptr, &devices_validate_params,
      &serialization_context_);
  params->devices.Set(devices_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devices.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in UsbInternalsPageHandler.GetTestDevices response");
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

UsbInternalsPageHandlerStub::UsbInternalsPageHandlerStub()
    : sink_(nullptr),
      control_message_handler_(UsbInternalsPageHandler::Version_) {
}

UsbInternalsPageHandlerStub::~UsbInternalsPageHandlerStub() {}

bool UsbInternalsPageHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      break;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      break;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      break;
    }
  }
  return false;
}

bool UsbInternalsPageHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data* params =
          reinterpret_cast<internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_name{};
      std::string p_serial_number{};
      std::string p_landing_page{};
      std::string p_allowed_origin{};
      UsbInternalsPageHandler_AddDeviceForTesting_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadSerialNumber(&p_serial_number))
        success = false;
      if (!input_data_view.ReadLandingPage(&p_landing_page))
        success = false;
      if (!input_data_view.ReadAllowedOrigin(&p_allowed_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::AddDeviceForTesting deserializer");
        return false;
      }
      UsbInternalsPageHandler::AddDeviceForTestingCallback callback =
          UsbInternalsPageHandler_AddDeviceForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UsbInternalsPageHandler::AddDeviceForTesting");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddDeviceForTesting(
std::move(p_name), 
std::move(p_serial_number), 
std::move(p_landing_page), 
std::move(p_allowed_origin), callback);
      return true;
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data* params =
          reinterpret_cast<internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_guid{};
      UsbInternalsPageHandler_RemoveDeviceForTesting_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadGuid(&p_guid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::RemoveDeviceForTesting deserializer");
        return false;
      }
      UsbInternalsPageHandler::RemoveDeviceForTestingCallback callback =
          UsbInternalsPageHandler_RemoveDeviceForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UsbInternalsPageHandler::RemoveDeviceForTesting");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoveDeviceForTesting(
std::move(p_guid), callback);
      return true;
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      internal::UsbInternalsPageHandler_GetTestDevices_Params_Data* params =
          reinterpret_cast<internal::UsbInternalsPageHandler_GetTestDevices_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      UsbInternalsPageHandler_GetTestDevices_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "UsbInternalsPageHandler::GetTestDevices deserializer");
        return false;
      }
      UsbInternalsPageHandler::GetTestDevicesCallback callback =
          UsbInternalsPageHandler_GetTestDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UsbInternalsPageHandler::GetTestDevices");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetTestDevices(callback);
      return true;
    }
  }
  return false;
}

UsbInternalsPageHandlerRequestValidator::UsbInternalsPageHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UsbInternalsPageHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "UsbInternalsPageHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_AddDeviceForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_RemoveDeviceForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_GetTestDevices_Params_Data>(
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

UsbInternalsPageHandlerResponseValidator::UsbInternalsPageHandlerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UsbInternalsPageHandlerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "UsbInternalsPageHandler ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUsbInternalsPageHandler_AddDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUsbInternalsPageHandler_RemoveDeviceForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUsbInternalsPageHandler_GetTestDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UsbInternalsPageHandler_GetTestDevices_ResponseParams_Data>(
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

namespace mojo {


// static
bool StructTraits<::mojom::TestDeviceInfo, ::mojom::TestDeviceInfoPtr>::Read(
    ::mojom::TestDeviceInfoDataView input,
    ::mojom::TestDeviceInfoPtr* output) {
  bool success = true;
  ::mojom::TestDeviceInfoPtr result(::mojom::TestDeviceInfo::New());
  
      if (!input.ReadGuid(&result->guid))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
      if (!input.ReadLandingPage(&result->landing_page))
        success = false;
      if (!input.ReadAllowedOrigin(&result->allowed_origin))
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