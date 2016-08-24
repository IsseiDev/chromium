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

#include "device/usb/public/interfaces/device_manager.mojom.h"

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
namespace device {
namespace usb {

namespace {

class DeviceManager_GetDevices_ParamsDataView {
 public:
  DeviceManager_GetDevices_ParamsDataView() {}

  DeviceManager_GetDevices_ParamsDataView(
      internal::DeviceManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      EnumerationOptionsDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::usb::EnumerationOptionsPtr>(
        pointer, output, context_);
  }
 private:
  internal::DeviceManager_GetDevices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DeviceManager_GetDevices_ParamsDataView::GetOptionsDataView(
    EnumerationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = EnumerationOptionsDataView(pointer, context_);
}

class DeviceManager_GetDevices_ResponseParamsDataView {
 public:
  DeviceManager_GetDevices_ResponseParamsDataView() {}

  DeviceManager_GetDevices_ResponseParamsDataView(
      internal::DeviceManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::device::usb::DeviceInfoDataView>* output);

  template <typename UserType>
  bool ReadResults(UserType* output) {
    auto pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::DeviceInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::DeviceManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DeviceManager_GetDevices_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::usb::DeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::usb::DeviceInfoDataView>(pointer, context_);
}


class DeviceManager_GetDevice_ParamsDataView {
 public:
  DeviceManager_GetDevice_ParamsDataView() {}

  DeviceManager_GetDevice_ParamsDataView(
      internal::DeviceManager_GetDevice_Params_Data* data,
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
  ::device::usb::DeviceRequest TakeDeviceRequest() {
    ::device::usb::DeviceRequest result;
    bool ret =
        mojo::internal::Deserialize<::device::usb::DeviceRequest>(
            &data_->device_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DeviceManager_GetDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DeviceManager_GetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class DeviceManager_SetClient_ParamsDataView {
 public:
  DeviceManager_SetClient_ParamsDataView() {}

  DeviceManager_SetClient_ParamsDataView(
      internal::DeviceManager_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  DeviceManagerClientPtr TakeClient() {
    DeviceManagerClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::device::usb::DeviceManagerClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DeviceManager_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class DeviceManagerClient_OnDeviceAdded_ParamsDataView {
 public:
  DeviceManagerClient_OnDeviceAdded_ParamsDataView() {}

  DeviceManagerClient_OnDeviceAdded_ParamsDataView(
      internal::DeviceManagerClient_OnDeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      ::device::usb::DeviceInfoDataView* output);

  template <typename UserType>
  bool ReadDeviceInfo(UserType* output) {
    auto pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::usb::DeviceInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::DeviceManagerClient_OnDeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DeviceManagerClient_OnDeviceAdded_ParamsDataView::GetDeviceInfoDataView(
    ::device::usb::DeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = ::device::usb::DeviceInfoDataView(pointer, context_);
}


class DeviceManagerClient_OnDeviceRemoved_ParamsDataView {
 public:
  DeviceManagerClient_OnDeviceRemoved_ParamsDataView() {}

  DeviceManagerClient_OnDeviceRemoved_ParamsDataView(
      internal::DeviceManagerClient_OnDeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      ::device::usb::DeviceInfoDataView* output);

  template <typename UserType>
  bool ReadDeviceInfo(UserType* output) {
    auto pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::usb::DeviceInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::DeviceManagerClient_OnDeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DeviceManagerClient_OnDeviceRemoved_ParamsDataView::GetDeviceInfoDataView(
    ::device::usb::DeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = ::device::usb::DeviceInfoDataView(pointer, context_);
}


}  // namespace// static
DeviceFilterPtr DeviceFilter::New() {
  DeviceFilterPtr rv;
  mojo::internal::StructHelper<DeviceFilter>::Initialize(&rv);
  return rv;
}

DeviceFilter::DeviceFilter()
    : has_vendor_id(),
      vendor_id(),
      has_product_id(),
      product_id(),
      has_class_code(),
      class_code(),
      has_subclass_code(),
      subclass_code(),
      has_protocol_code(),
      protocol_code() {
}

DeviceFilter::~DeviceFilter() {
}// static
EnumerationOptionsPtr EnumerationOptions::New() {
  EnumerationOptionsPtr rv;
  mojo::internal::StructHelper<EnumerationOptions>::Initialize(&rv);
  return rv;
}

EnumerationOptions::EnumerationOptions()
    : filters() {
}

EnumerationOptions::~EnumerationOptions() {
}
const char DeviceManager::Name_[] = "device::usb::DeviceManager";
const uint32_t DeviceManager::Version_;

class DeviceManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DeviceManager_GetDevices_ForwardToCallback(
      const DeviceManager::GetDevicesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DeviceManager::GetDevicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDevices_ForwardToCallback);
};
bool DeviceManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DeviceManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<internal::DeviceManager_GetDevices_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::vector<::device::usb::DeviceInfoPtr> p_results{};
  DeviceManager_GetDevices_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DeviceManager::GetDevices response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_results));
  }
  return true;
}

DeviceManagerProxy::DeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DeviceManagerProxy::GetDevices(
    EnumerationOptionsPtr in_options, const GetDevicesCallback& callback) {
  size_t size = sizeof(::device::usb::internal::DeviceManager_GetDevices_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::usb::EnumerationOptionsPtr>(
      in_options, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDeviceManager_GetDevices_Name, size);

  auto params =
      ::device::usb::internal::DeviceManager_GetDevices_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::device::usb::EnumerationOptionsPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DeviceManager_GetDevices_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DeviceManagerProxy::GetDevice(
    const std::string& in_guid, ::device::usb::DeviceRequest in_device_request) {
  size_t size = sizeof(::device::usb::internal::DeviceManager_GetDevice_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_guid, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDeviceManager_GetDevice_Name, size);

  auto params =
      ::device::usb::internal::DeviceManager_GetDevice_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->guid)::BaseType* guid_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_guid, builder.buffer(), &guid_ptr, &serialization_context_);
  params->guid.Set(guid_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null guid in DeviceManager.GetDevice request");
  mojo::internal::Serialize<::device::usb::DeviceRequest>(
      in_device_request, &params->device_request, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->device_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid device_request in DeviceManager.GetDevice request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DeviceManagerProxy::SetClient(
    DeviceManagerClientPtr in_client) {
  size_t size = sizeof(::device::usb::internal::DeviceManager_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDeviceManager_SetClient_Name, size);

  auto params =
      ::device::usb::internal::DeviceManager_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::device::usb::DeviceManagerClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in DeviceManager.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class DeviceManager_GetDevices_ProxyToResponder {
 public:
  static DeviceManager::GetDevicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<DeviceManager_GetDevices_ProxyToResponder> proxy(
        new DeviceManager_GetDevices_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&DeviceManager_GetDevices_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~DeviceManager_GetDevices_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "DeviceManager::GetDevices() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  DeviceManager_GetDevices_ProxyToResponder(
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
      std::vector<::device::usb::DeviceInfoPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDevices_ProxyToResponder);
};

void DeviceManager_GetDevices_ProxyToResponder::Run(
    std::vector<::device::usb::DeviceInfoPtr> in_results) {
  size_t size = sizeof(::device::usb::internal::DeviceManager_GetDevices_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::DeviceInfoPtr>>(
      in_results, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDeviceManager_GetDevices_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::usb::internal::DeviceManager_GetDevices_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->results)::BaseType* results_ptr;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::device::usb::DeviceInfoPtr>>(
      in_results, builder.buffer(), &results_ptr, &results_validate_params,
      &serialization_context_);
  params->results.Set(results_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in DeviceManager.GetDevices response");
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

DeviceManagerStub::DeviceManagerStub()
    : sink_(nullptr),
      control_message_handler_(DeviceManager::Version_) {
}

DeviceManagerStub::~DeviceManagerStub() {}

bool DeviceManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      break;
    }
    case internal::kDeviceManager_GetDevice_Name: {
      internal::DeviceManager_GetDevice_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_GetDevice_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_guid{};
      ::device::usb::DeviceRequest p_device_request{};
      DeviceManager_GetDevice_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadGuid(&p_guid))
        success = false;
      p_device_request = input_data_view.TakeDeviceRequest();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceManager::GetDevice deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::GetDevice");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetDevice(
std::move(p_guid), 
std::move(p_device_request));
      return true;
    }
    case internal::kDeviceManager_SetClient_Name: {
      internal::DeviceManager_SetClient_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DeviceManagerClientPtr p_client{};
      DeviceManager_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceManager::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
  }
  return false;
}

bool DeviceManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      internal::DeviceManager_GetDevices_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_GetDevices_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      EnumerationOptionsPtr p_options{};
      DeviceManager_GetDevices_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceManager::GetDevices deserializer");
        return false;
      }
      DeviceManager::GetDevicesCallback callback =
          DeviceManager_GetDevices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::GetDevices");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetDevices(
std::move(p_options), callback);
      return true;
    }
    case internal::kDeviceManager_GetDevice_Name: {
      break;
    }
    case internal::kDeviceManager_SetClient_Name: {
      break;
    }
  }
  return false;
}

DeviceManagerRequestValidator::DeviceManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DeviceManager RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManager_GetDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManager_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_SetClient_Params_Data>(
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

DeviceManagerResponseValidator::DeviceManagerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceManagerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DeviceManager ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevices_ResponseParams_Data>(
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
const char DeviceManagerClient::Name_[] = "device::usb::DeviceManagerClient";
const uint32_t DeviceManagerClient::Version_;

DeviceManagerClientProxy::DeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DeviceManagerClientProxy::OnDeviceAdded(
    ::device::usb::DeviceInfoPtr in_device_info) {
  size_t size = sizeof(::device::usb::internal::DeviceManagerClient_OnDeviceAdded_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::usb::DeviceInfoPtr>(
      in_device_info, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDeviceManagerClient_OnDeviceAdded_Name, size);

  auto params =
      ::device::usb::internal::DeviceManagerClient_OnDeviceAdded_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_info)::BaseType* device_info_ptr;
  mojo::internal::Serialize<::device::usb::DeviceInfoPtr>(
      in_device_info, builder.buffer(), &device_info_ptr, &serialization_context_);
  params->device_info.Set(device_info_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in DeviceManagerClient.OnDeviceAdded request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DeviceManagerClientProxy::OnDeviceRemoved(
    ::device::usb::DeviceInfoPtr in_device_info) {
  size_t size = sizeof(::device::usb::internal::DeviceManagerClient_OnDeviceRemoved_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::usb::DeviceInfoPtr>(
      in_device_info, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kDeviceManagerClient_OnDeviceRemoved_Name, size);

  auto params =
      ::device::usb::internal::DeviceManagerClient_OnDeviceRemoved_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_info)::BaseType* device_info_ptr;
  mojo::internal::Serialize<::device::usb::DeviceInfoPtr>(
      in_device_info, builder.buffer(), &device_info_ptr, &serialization_context_);
  params->device_info.Set(device_info_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_info in DeviceManagerClient.OnDeviceRemoved request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

DeviceManagerClientStub::DeviceManagerClientStub()
    : sink_(nullptr),
      control_message_handler_(DeviceManagerClient::Version_) {
}

DeviceManagerClientStub::~DeviceManagerClientStub() {}

bool DeviceManagerClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDeviceManagerClient_OnDeviceAdded_Name: {
      internal::DeviceManagerClient_OnDeviceAdded_Params_Data* params =
          reinterpret_cast<internal::DeviceManagerClient_OnDeviceAdded_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::device::usb::DeviceInfoPtr p_device_info{};
      DeviceManagerClient_OnDeviceAdded_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceManagerClient::OnDeviceAdded deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManagerClient::OnDeviceAdded");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDeviceAdded(
std::move(p_device_info));
      return true;
    }
    case internal::kDeviceManagerClient_OnDeviceRemoved_Name: {
      internal::DeviceManagerClient_OnDeviceRemoved_Params_Data* params =
          reinterpret_cast<internal::DeviceManagerClient_OnDeviceRemoved_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::device::usb::DeviceInfoPtr p_device_info{};
      DeviceManagerClient_OnDeviceRemoved_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceInfo(&p_device_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DeviceManagerClient::OnDeviceRemoved deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManagerClient::OnDeviceRemoved");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnDeviceRemoved(
std::move(p_device_info));
      return true;
    }
  }
  return false;
}

bool DeviceManagerClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDeviceManagerClient_OnDeviceAdded_Name: {
      break;
    }
    case internal::kDeviceManagerClient_OnDeviceRemoved_Name: {
      break;
    }
  }
  return false;
}

DeviceManagerClientRequestValidator::DeviceManagerClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceManagerClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DeviceManagerClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDeviceManagerClient_OnDeviceAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManagerClient_OnDeviceAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManagerClient_OnDeviceRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManagerClient_OnDeviceRemoved_Params_Data>(
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

}  // namespace usb
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::usb::DeviceFilter, ::device::usb::DeviceFilterPtr>::Read(
    ::device::usb::DeviceFilterDataView input,
    ::device::usb::DeviceFilterPtr* output) {
  bool success = true;
  ::device::usb::DeviceFilterPtr result(::device::usb::DeviceFilter::New());
  
      result->has_vendor_id = input.has_vendor_id();
      result->vendor_id = input.vendor_id();
      result->has_product_id = input.has_product_id();
      result->product_id = input.product_id();
      result->has_class_code = input.has_class_code();
      result->class_code = input.class_code();
      result->has_subclass_code = input.has_subclass_code();
      result->subclass_code = input.subclass_code();
      result->has_protocol_code = input.has_protocol_code();
      result->protocol_code = input.protocol_code();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::usb::EnumerationOptions, ::device::usb::EnumerationOptionsPtr>::Read(
    ::device::usb::EnumerationOptionsDataView input,
    ::device::usb::EnumerationOptionsPtr* output) {
  bool success = true;
  ::device::usb::EnumerationOptionsPtr result(::device::usb::EnumerationOptions::New());
  
      if (!input.ReadFilters(&result->filters))
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