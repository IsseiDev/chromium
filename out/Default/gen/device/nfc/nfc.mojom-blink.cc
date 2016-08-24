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

#include "device/nfc/nfc.mojom-blink.h"

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
namespace device {
namespace nfc {
namespace blink {

namespace {

class NFC_SetClient_ParamsDataView {
 public:
  NFC_SetClient_ParamsDataView() {}

  NFC_SetClient_ParamsDataView(
      internal::NFC_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  NFCClientPtr TakeClient() {
    NFCClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::device::nfc::blink::NFCClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NFC_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class NFC_Push_ParamsDataView {
 public:
  NFC_Push_ParamsDataView() {}

  NFC_Push_ParamsDataView(
      internal::NFC_Push_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      NFCMessageDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCMessagePtr>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      NFCPushOptionsDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCPushOptionsPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Push_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_Push_ParamsDataView::GetMessageDataView(
    NFCMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = NFCMessageDataView(pointer, context_);
}
inline void NFC_Push_ParamsDataView::GetOptionsDataView(
    NFCPushOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = NFCPushOptionsDataView(pointer, context_);
}

class NFC_Push_ResponseParamsDataView {
 public:
  NFC_Push_ResponseParamsDataView() {}

  NFC_Push_ResponseParamsDataView(
      internal::NFC_Push_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Push_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_Push_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


class NFC_CancelPush_ParamsDataView {
 public:
  NFC_CancelPush_ParamsDataView() {}

  NFC_CancelPush_ParamsDataView(
      internal::NFC_CancelPush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadTarget(UserType* output) const {
    auto data_value = data_->target;
    return mojo::internal::Deserialize<::device::nfc::blink::NFCPushTarget>(
        data_value, output);
  }

  ::device::nfc::blink::NFCPushTarget target() const {
    return static_cast<::device::nfc::blink::NFCPushTarget>(data_->target);
  }
 private:
  internal::NFC_CancelPush_Params_Data* data_ = nullptr;
};



class NFC_CancelPush_ResponseParamsDataView {
 public:
  NFC_CancelPush_ResponseParamsDataView() {}

  NFC_CancelPush_ResponseParamsDataView(
      internal::NFC_CancelPush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelPush_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_CancelPush_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


class NFC_Watch_ParamsDataView {
 public:
  NFC_Watch_ParamsDataView() {}

  NFC_Watch_ParamsDataView(
      internal::NFC_Watch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      NFCWatchOptionsDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCWatchOptionsPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Watch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_Watch_ParamsDataView::GetOptionsDataView(
    NFCWatchOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = NFCWatchOptionsDataView(pointer, context_);
}

class NFC_Watch_ResponseParamsDataView {
 public:
  NFC_Watch_ResponseParamsDataView() {}

  NFC_Watch_ResponseParamsDataView(
      internal::NFC_Watch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Watch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_Watch_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


class NFC_CancelWatch_ParamsDataView {
 public:
  NFC_CancelWatch_ParamsDataView() {}

  NFC_CancelWatch_ParamsDataView(
      internal::NFC_CancelWatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::NFC_CancelWatch_Params_Data* data_ = nullptr;
};



class NFC_CancelWatch_ResponseParamsDataView {
 public:
  NFC_CancelWatch_ResponseParamsDataView() {}

  NFC_CancelWatch_ResponseParamsDataView(
      internal::NFC_CancelWatch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelWatch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_CancelWatch_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


class NFC_CancelAllWatches_ParamsDataView {
 public:
  NFC_CancelAllWatches_ParamsDataView() {}

  NFC_CancelAllWatches_ParamsDataView(
      internal::NFC_CancelAllWatches_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_CancelAllWatches_Params_Data* data_ = nullptr;
};



class NFC_CancelAllWatches_ResponseParamsDataView {
 public:
  NFC_CancelAllWatches_ResponseParamsDataView() {}

  NFC_CancelAllWatches_ResponseParamsDataView(
      internal::NFC_CancelAllWatches_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  bool ReadError(UserType* output) {
    auto pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCErrorPtr>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelAllWatches_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFC_CancelAllWatches_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


class NFC_SuspendNFCOperations_ParamsDataView {
 public:
  NFC_SuspendNFCOperations_ParamsDataView() {}

  NFC_SuspendNFCOperations_ParamsDataView(
      internal::NFC_SuspendNFCOperations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_SuspendNFCOperations_Params_Data* data_ = nullptr;
};




class NFC_ResumeNFCOperations_ParamsDataView {
 public:
  NFC_ResumeNFCOperations_ParamsDataView() {}

  NFC_ResumeNFCOperations_ParamsDataView(
      internal::NFC_ResumeNFCOperations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_ResumeNFCOperations_Params_Data* data_ = nullptr;
};




class NFCClient_OnWatch_ParamsDataView {
 public:
  NFCClient_OnWatch_ParamsDataView() {}

  NFCClient_OnWatch_ParamsDataView(
      internal::NFCClient_OnWatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWatchIdsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  bool ReadWatchIds(UserType* output) {
    auto pointer = data_->watch_ids.Get();
    return mojo::internal::Deserialize<mojo::Array<uint32_t>>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      NFCMessageDataView* output);

  template <typename UserType>
  bool ReadMessage(UserType* output) {
    auto pointer = data_->message.Get();
    return mojo::internal::Deserialize<::device::nfc::blink::NFCMessagePtr>(
        pointer, output, context_);
  }
 private:
  internal::NFCClient_OnWatch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void NFCClient_OnWatch_ParamsDataView::GetWatchIdsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->watch_ids.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}
inline void NFCClient_OnWatch_ParamsDataView::GetMessageDataView(
    NFCMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = NFCMessageDataView(pointer, context_);
}


}  // namespace// static
NFCErrorPtr NFCError::New() {
  NFCErrorPtr rv;
  mojo::internal::StructHelper<NFCError>::Initialize(&rv);
  return rv;
}

NFCError::NFCError()
    : error_type() {
}

NFCError::~NFCError() {
}// static
NFCRecordPtr NFCRecord::New() {
  NFCRecordPtr rv;
  mojo::internal::StructHelper<NFCRecord>::Initialize(&rv);
  return rv;
}

NFCRecord::NFCRecord()
    : record_type(),
      media_type(),
      data(nullptr) {
}

NFCRecord::~NFCRecord() {
}// static
NFCMessagePtr NFCMessage::New() {
  NFCMessagePtr rv;
  mojo::internal::StructHelper<NFCMessage>::Initialize(&rv);
  return rv;
}

NFCMessage::NFCMessage()
    : data(nullptr),
      url() {
}

NFCMessage::~NFCMessage() {
}// static
NFCPushOptionsPtr NFCPushOptions::New() {
  NFCPushOptionsPtr rv;
  mojo::internal::StructHelper<NFCPushOptions>::Initialize(&rv);
  return rv;
}

NFCPushOptions::NFCPushOptions()
    : target(),
      timeout(),
      ignore_read() {
}

NFCPushOptions::~NFCPushOptions() {
}// static
NFCRecordTypeFilterPtr NFCRecordTypeFilter::New() {
  NFCRecordTypeFilterPtr rv;
  mojo::internal::StructHelper<NFCRecordTypeFilter>::Initialize(&rv);
  return rv;
}

NFCRecordTypeFilter::NFCRecordTypeFilter()
    : record_type() {
}

NFCRecordTypeFilter::~NFCRecordTypeFilter() {
}// static
NFCWatchOptionsPtr NFCWatchOptions::New() {
  NFCWatchOptionsPtr rv;
  mojo::internal::StructHelper<NFCWatchOptions>::Initialize(&rv);
  return rv;
}

NFCWatchOptions::NFCWatchOptions()
    : url(),
      record_filter(),
      media_type(),
      mode() {
}

NFCWatchOptions::~NFCWatchOptions() {
}
const char NFC::Name_[] = "device::nfc::NFC";
const uint32_t NFC::Version_;

class NFC_Push_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_Push_ForwardToCallback(
      const NFC::PushCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::PushCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(NFC_Push_ForwardToCallback);
};
bool NFC_Push_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NFC_Push_ResponseParams_Data* params =
      reinterpret_cast<internal::NFC_Push_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_Push_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NFC::Push response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class NFC_CancelPush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelPush_ForwardToCallback(
      const NFC::CancelPushCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelPushCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelPush_ForwardToCallback);
};
bool NFC_CancelPush_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NFC_CancelPush_ResponseParams_Data* params =
      reinterpret_cast<internal::NFC_CancelPush_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelPush_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NFC::CancelPush response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class NFC_Watch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_Watch_ForwardToCallback(
      const NFC::WatchCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::WatchCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(NFC_Watch_ForwardToCallback);
};
bool NFC_Watch_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NFC_Watch_ResponseParams_Data* params =
      reinterpret_cast<internal::NFC_Watch_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  uint32_t p_id{};
  NFCErrorPtr p_error{};
  NFC_Watch_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_id = input_data_view.id();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NFC::Watch response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_id), 
std::move(p_error));
  }
  return true;
}

class NFC_CancelWatch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelWatch_ForwardToCallback(
      const NFC::CancelWatchCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelWatchCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelWatch_ForwardToCallback);
};
bool NFC_CancelWatch_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NFC_CancelWatch_ResponseParams_Data* params =
      reinterpret_cast<internal::NFC_CancelWatch_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelWatch_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NFC::CancelWatch response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class NFC_CancelAllWatches_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelAllWatches_ForwardToCallback(
      const NFC::CancelAllWatchesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelAllWatchesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelAllWatches_ForwardToCallback);
};
bool NFC_CancelAllWatches_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NFC_CancelAllWatches_ResponseParams_Data* params =
      reinterpret_cast<internal::NFC_CancelAllWatches_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelAllWatches_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "NFC::CancelAllWatches response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

NFCProxy::NFCProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void NFCProxy::SetClient(
    NFCClientPtr in_client) {
  size_t size = sizeof(::device::nfc::internal::NFC_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kNFC_SetClient_Name, size);

  auto params =
      ::device::nfc::internal::NFC_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::device::nfc::blink::NFCClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NFC.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void NFCProxy::Push(
    NFCMessagePtr in_message, NFCPushOptionsPtr in_options, const PushCallback& callback) {
  size_t size = sizeof(::device::nfc::internal::NFC_Push_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCMessagePtr>(
      in_message, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCPushOptionsPtr>(
      in_options, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kNFC_Push_Name, size);

  auto params =
      ::device::nfc::internal::NFC_Push_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCMessagePtr>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in NFC.Push request");
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCPushOptionsPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NFC_Push_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void NFCProxy::CancelPush(
    NFCPushTarget in_target, const CancelPushCallback& callback) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelPush_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kNFC_CancelPush_Name, size);

  auto params =
      ::device::nfc::internal::NFC_CancelPush_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::device::nfc::blink::NFCPushTarget>(
      in_target, &params->target);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NFC_CancelPush_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void NFCProxy::Watch(
    NFCWatchOptionsPtr in_options, const WatchCallback& callback) {
  size_t size = sizeof(::device::nfc::internal::NFC_Watch_Params_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCWatchOptionsPtr>(
      in_options, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kNFC_Watch_Name, size);

  auto params =
      ::device::nfc::internal::NFC_Watch_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCWatchOptionsPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in NFC.Watch request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NFC_Watch_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void NFCProxy::CancelWatch(
    uint32_t in_id, const CancelWatchCallback& callback) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelWatch_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kNFC_CancelWatch_Name, size);

  auto params =
      ::device::nfc::internal::NFC_CancelWatch_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NFC_CancelWatch_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void NFCProxy::CancelAllWatches(
    const CancelAllWatchesCallback& callback) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelAllWatches_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kNFC_CancelAllWatches_Name, size);

  auto params =
      ::device::nfc::internal::NFC_CancelAllWatches_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NFC_CancelAllWatches_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void NFCProxy::SuspendNFCOperations(
    ) {
  size_t size = sizeof(::device::nfc::internal::NFC_SuspendNFCOperations_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kNFC_SuspendNFCOperations_Name, size);

  auto params =
      ::device::nfc::internal::NFC_SuspendNFCOperations_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void NFCProxy::ResumeNFCOperations(
    ) {
  size_t size = sizeof(::device::nfc::internal::NFC_ResumeNFCOperations_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kNFC_ResumeNFCOperations_Name, size);

  auto params =
      ::device::nfc::internal::NFC_ResumeNFCOperations_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class NFC_Push_ProxyToResponder {
 public:
  static NFC::PushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<NFC_Push_ProxyToResponder> proxy(
        new NFC_Push_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&NFC_Push_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NFC_Push_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "NFC::Push() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  NFC_Push_ProxyToResponder(
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
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(NFC_Push_ProxyToResponder);
};

void NFC_Push_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  size_t size = sizeof(::device::nfc::internal::NFC_Push_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNFC_Push_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::nfc::internal::NFC_Push_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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
class NFC_CancelPush_ProxyToResponder {
 public:
  static NFC::CancelPushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<NFC_CancelPush_ProxyToResponder> proxy(
        new NFC_CancelPush_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&NFC_CancelPush_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NFC_CancelPush_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "NFC::CancelPush() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  NFC_CancelPush_ProxyToResponder(
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
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelPush_ProxyToResponder);
};

void NFC_CancelPush_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelPush_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNFC_CancelPush_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::nfc::internal::NFC_CancelPush_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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
class NFC_Watch_ProxyToResponder {
 public:
  static NFC::WatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<NFC_Watch_ProxyToResponder> proxy(
        new NFC_Watch_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&NFC_Watch_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NFC_Watch_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "NFC::Watch() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  NFC_Watch_ProxyToResponder(
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
      uint32_t in_id, NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(NFC_Watch_ProxyToResponder);
};

void NFC_Watch_ProxyToResponder::Run(
    uint32_t in_id, NFCErrorPtr in_error) {
  size_t size = sizeof(::device::nfc::internal::NFC_Watch_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNFC_Watch_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::nfc::internal::NFC_Watch_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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
class NFC_CancelWatch_ProxyToResponder {
 public:
  static NFC::CancelWatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<NFC_CancelWatch_ProxyToResponder> proxy(
        new NFC_CancelWatch_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&NFC_CancelWatch_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NFC_CancelWatch_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "NFC::CancelWatch() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  NFC_CancelWatch_ProxyToResponder(
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
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelWatch_ProxyToResponder);
};

void NFC_CancelWatch_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelWatch_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNFC_CancelWatch_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::nfc::internal::NFC_CancelWatch_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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
class NFC_CancelAllWatches_ProxyToResponder {
 public:
  static NFC::CancelAllWatchesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<NFC_CancelAllWatches_ProxyToResponder> proxy(
        new NFC_CancelAllWatches_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&NFC_CancelAllWatches_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~NFC_CancelAllWatches_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "NFC::CancelAllWatches() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  NFC_CancelAllWatches_ProxyToResponder(
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
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelAllWatches_ProxyToResponder);
};

void NFC_CancelAllWatches_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  size_t size = sizeof(::device::nfc::internal::NFC_CancelAllWatches_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNFC_CancelAllWatches_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::nfc::internal::NFC_CancelAllWatches_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->error)::BaseType* error_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCErrorPtr>(
      in_error, builder.buffer(), &error_ptr, &serialization_context_);
  params->error.Set(error_ptr);
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

NFCStub::NFCStub()
    : sink_(nullptr),
      control_message_handler_(NFC::Version_) {
}

NFCStub::~NFCStub() {}

bool NFCStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
      internal::NFC_SetClient_Params_Data* params =
          reinterpret_cast<internal::NFC_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFCClientPtr p_client{};
      NFC_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kNFC_Push_Name: {
      break;
    }
    case internal::kNFC_CancelPush_Name: {
      break;
    }
    case internal::kNFC_Watch_Name: {
      break;
    }
    case internal::kNFC_CancelWatch_Name: {
      break;
    }
    case internal::kNFC_CancelAllWatches_Name: {
      break;
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
      internal::NFC_SuspendNFCOperations_Params_Data* params =
          reinterpret_cast<internal::NFC_SuspendNFCOperations_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFC_SuspendNFCOperations_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::SuspendNFCOperations deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::SuspendNFCOperations");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SuspendNFCOperations();
      return true;
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
      internal::NFC_ResumeNFCOperations_Params_Data* params =
          reinterpret_cast<internal::NFC_ResumeNFCOperations_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFC_ResumeNFCOperations_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::ResumeNFCOperations deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::ResumeNFCOperations");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ResumeNFCOperations();
      return true;
    }
  }
  return false;
}

bool NFCStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
      break;
    }
    case internal::kNFC_Push_Name: {
      internal::NFC_Push_Params_Data* params =
          reinterpret_cast<internal::NFC_Push_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFCMessagePtr p_message{};
      NFCPushOptionsPtr p_options{};
      NFC_Push_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::Push deserializer");
        return false;
      }
      NFC::PushCallback callback =
          NFC_Push_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::Push");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Push(
std::move(p_message), 
std::move(p_options), callback);
      return true;
    }
    case internal::kNFC_CancelPush_Name: {
      internal::NFC_CancelPush_Params_Data* params =
          reinterpret_cast<internal::NFC_CancelPush_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFCPushTarget p_target{};
      NFC_CancelPush_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::CancelPush deserializer");
        return false;
      }
      NFC::CancelPushCallback callback =
          NFC_CancelPush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::CancelPush");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelPush(
std::move(p_target), callback);
      return true;
    }
    case internal::kNFC_Watch_Name: {
      internal::NFC_Watch_Params_Data* params =
          reinterpret_cast<internal::NFC_Watch_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFCWatchOptionsPtr p_options{};
      NFC_Watch_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::Watch deserializer");
        return false;
      }
      NFC::WatchCallback callback =
          NFC_Watch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::Watch");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Watch(
std::move(p_options), callback);
      return true;
    }
    case internal::kNFC_CancelWatch_Name: {
      internal::NFC_CancelWatch_Params_Data* params =
          reinterpret_cast<internal::NFC_CancelWatch_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_id{};
      NFC_CancelWatch_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::CancelWatch deserializer");
        return false;
      }
      NFC::CancelWatchCallback callback =
          NFC_CancelWatch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::CancelWatch");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelWatch(
std::move(p_id), callback);
      return true;
    }
    case internal::kNFC_CancelAllWatches_Name: {
      internal::NFC_CancelAllWatches_Params_Data* params =
          reinterpret_cast<internal::NFC_CancelAllWatches_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      NFC_CancelAllWatches_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFC::CancelAllWatches deserializer");
        return false;
      }
      NFC::CancelAllWatchesCallback callback =
          NFC_CancelAllWatches_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFC::CancelAllWatches");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelAllWatches(callback);
      return true;
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
      break;
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
      break;
    }
  }
  return false;
}

NFCRequestValidator::NFCRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool NFCRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "NFC RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_Push_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Push_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelPush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelPush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_Watch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Watch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelWatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelWatch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelAllWatches_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelAllWatches_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_SuspendNFCOperations_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_ResumeNFCOperations_Params_Data>(
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

NFCResponseValidator::NFCResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool NFCResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "NFC ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNFC_Push_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Push_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelPush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelPush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_Watch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Watch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelWatch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelWatch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNFC_CancelAllWatches_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelAllWatches_ResponseParams_Data>(
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
const char NFCClient::Name_[] = "device::nfc::NFCClient";
const uint32_t NFCClient::Version_;

NFCClientProxy::NFCClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void NFCClientProxy::OnWatch(
    mojo::WTFArray<uint32_t> in_watch_ids, NFCMessagePtr in_message) {
  size_t size = sizeof(::device::nfc::internal::NFCClient_OnWatch_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint32_t>>(
      in_watch_ids, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::device::nfc::blink::NFCMessagePtr>(
      in_message, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kNFCClient_OnWatch_Name, size);

  auto params =
      ::device::nfc::internal::NFCClient_OnWatch_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->watch_ids)::BaseType* watch_ids_ptr;
  const mojo::internal::ContainerValidateParams watch_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint32_t>>(
      in_watch_ids, builder.buffer(), &watch_ids_ptr, &watch_ids_validate_params,
      &serialization_context_);
  params->watch_ids.Set(watch_ids_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_ids in NFCClient.OnWatch request");
  typename decltype(params->message)::BaseType* message_ptr;
  mojo::internal::Serialize<::device::nfc::blink::NFCMessagePtr>(
      in_message, builder.buffer(), &message_ptr, &serialization_context_);
  params->message.Set(message_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in NFCClient.OnWatch request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

NFCClientStub::NFCClientStub()
    : sink_(nullptr),
      control_message_handler_(NFCClient::Version_) {
}

NFCClientStub::~NFCClientStub() {}

bool NFCClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
      internal::NFCClient_OnWatch_Params_Data* params =
          reinterpret_cast<internal::NFCClient_OnWatch_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::WTFArray<uint32_t> p_watch_ids{};
      NFCMessagePtr p_message{};
      NFCClient_OnWatch_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadWatchIds(&p_watch_ids))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFCClient::OnWatch deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NFCClient::OnWatch");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnWatch(
std::move(p_watch_ids), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

bool NFCClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
      break;
    }
  }
  return false;
}

NFCClientRequestValidator::NFCClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool NFCClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "NFCClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFCClient_OnWatch_Params_Data>(
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
}  // namespace nfc
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::nfc::blink::NFCError, ::device::nfc::blink::NFCErrorPtr>::Read(
    ::device::nfc::blink::NFCErrorDataView input,
    ::device::nfc::blink::NFCErrorPtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCErrorPtr result(::device::nfc::blink::NFCError::New());
  
      if (!input.ReadErrorType(&result->error_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::nfc::blink::NFCRecord, ::device::nfc::blink::NFCRecordPtr>::Read(
    ::device::nfc::blink::NFCRecordDataView input,
    ::device::nfc::blink::NFCRecordPtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCRecordPtr result(::device::nfc::blink::NFCRecord::New());
  
      if (!input.ReadRecordType(&result->record_type))
        success = false;
      if (!input.ReadMediaType(&result->media_type))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::nfc::blink::NFCMessage, ::device::nfc::blink::NFCMessagePtr>::Read(
    ::device::nfc::blink::NFCMessageDataView input,
    ::device::nfc::blink::NFCMessagePtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCMessagePtr result(::device::nfc::blink::NFCMessage::New());
  
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::nfc::blink::NFCPushOptions, ::device::nfc::blink::NFCPushOptionsPtr>::Read(
    ::device::nfc::blink::NFCPushOptionsDataView input,
    ::device::nfc::blink::NFCPushOptionsPtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCPushOptionsPtr result(::device::nfc::blink::NFCPushOptions::New());
  
      if (!input.ReadTarget(&result->target))
        success = false;
      result->timeout = input.timeout();
      result->ignore_read = input.ignore_read();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::nfc::blink::NFCRecordTypeFilter, ::device::nfc::blink::NFCRecordTypeFilterPtr>::Read(
    ::device::nfc::blink::NFCRecordTypeFilterDataView input,
    ::device::nfc::blink::NFCRecordTypeFilterPtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCRecordTypeFilterPtr result(::device::nfc::blink::NFCRecordTypeFilter::New());
  
      if (!input.ReadRecordType(&result->record_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::nfc::blink::NFCWatchOptions, ::device::nfc::blink::NFCWatchOptionsPtr>::Read(
    ::device::nfc::blink::NFCWatchOptionsDataView input,
    ::device::nfc::blink::NFCWatchOptionsPtr* output) {
  bool success = true;
  ::device::nfc::blink::NFCWatchOptionsPtr result(::device::nfc::blink::NFCWatchOptions::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadRecordFilter(&result->record_filter))
        success = false;
      if (!input.ReadMediaType(&result->media_type))
        success = false;
      if (!input.ReadMode(&result->mode))
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