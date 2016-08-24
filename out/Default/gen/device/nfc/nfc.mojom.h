// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_NFC_NFC_MOJOM_H_
#define DEVICE_NFC_NFC_MOJOM_H_

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
#include "device/nfc/nfc.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
namespace nfc {
class NFC;
using NFCPtr = mojo::InterfacePtr<NFC>;
using NFCPtrInfo = mojo::InterfacePtrInfo<NFC>;
using NFCRequest = mojo::InterfaceRequest<NFC>;
using NFCAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFC>;
using NFCAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFC>;
using NFCAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFC>;

class NFCClient;
using NFCClientPtr = mojo::InterfacePtr<NFCClient>;
using NFCClientPtrInfo = mojo::InterfacePtrInfo<NFCClient>;
using NFCClientRequest = mojo::InterfaceRequest<NFCClient>;
using NFCClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NFCClient>;
using NFCClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NFCClient>;
using NFCClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NFCClient>;

class NFCError;
class NFCErrorDataView;
using NFCErrorPtr = mojo::InlinedStructPtr<NFCError>;

class NFCRecord;
class NFCRecordDataView;
using NFCRecordPtr = mojo::StructPtr<NFCRecord>;

class NFCMessage;
class NFCMessageDataView;
using NFCMessagePtr = mojo::StructPtr<NFCMessage>;

class NFCPushOptions;
class NFCPushOptionsDataView;
using NFCPushOptionsPtr = mojo::InlinedStructPtr<NFCPushOptions>;

class NFCRecordTypeFilter;
class NFCRecordTypeFilterDataView;
using NFCRecordTypeFilterPtr = mojo::InlinedStructPtr<NFCRecordTypeFilter>;

class NFCWatchOptions;
class NFCWatchOptionsDataView;
using NFCWatchOptionsPtr = mojo::StructPtr<NFCWatchOptions>;


class NFCProxy;
class NFCStub;

class NFCRequestValidator;
class NFCResponseValidator;

class  NFC {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = NFCProxy;
  using Stub_ = NFCStub;

  using RequestValidator_ = NFCRequestValidator;
  using ResponseValidator_ = NFCResponseValidator;
  virtual ~NFC() {}

  virtual void SetClient(NFCClientPtr client) = 0;


  using PushCallback = base::Callback<void(NFCErrorPtr)>;
  virtual void Push(NFCMessagePtr message, NFCPushOptionsPtr options, const PushCallback& callback) = 0;


  using CancelPushCallback = base::Callback<void(NFCErrorPtr)>;
  virtual void CancelPush(NFCPushTarget target, const CancelPushCallback& callback) = 0;


  using WatchCallback = base::Callback<void(uint32_t, NFCErrorPtr)>;
  virtual void Watch(NFCWatchOptionsPtr options, const WatchCallback& callback) = 0;


  using CancelWatchCallback = base::Callback<void(NFCErrorPtr)>;
  virtual void CancelWatch(uint32_t id, const CancelWatchCallback& callback) = 0;


  using CancelAllWatchesCallback = base::Callback<void(NFCErrorPtr)>;
  virtual void CancelAllWatches(const CancelAllWatchesCallback& callback) = 0;

  virtual void SuspendNFCOperations() = 0;

  virtual void ResumeNFCOperations() = 0;
};

class NFCClientProxy;
class NFCClientStub;

class NFCClientRequestValidator;

class  NFCClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = NFCClientProxy;
  using Stub_ = NFCClientStub;

  using RequestValidator_ = NFCClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~NFCClient() {}

  virtual void OnWatch(mojo::Array<uint32_t> watch_ids, NFCMessagePtr message) = 0;
};

class  NFCProxy
    : public NFC,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit NFCProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NFCClientPtr client) override;
  void Push(NFCMessagePtr message, NFCPushOptionsPtr options, const PushCallback& callback) override;
  void CancelPush(NFCPushTarget target, const CancelPushCallback& callback) override;
  void Watch(NFCWatchOptionsPtr options, const WatchCallback& callback) override;
  void CancelWatch(uint32_t id, const CancelWatchCallback& callback) override;
  void CancelAllWatches(const CancelAllWatchesCallback& callback) override;
  void SuspendNFCOperations() override;
  void ResumeNFCOperations() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  NFCClientProxy
    : public NFCClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit NFCClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnWatch(mojo::Array<uint32_t> watch_ids, NFCMessagePtr message) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  NFCStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  NFCStub();
  ~NFCStub() override;
  void set_sink(NFC* sink) { sink_ = sink; }
  NFC* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NFC* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  NFCClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  NFCClientStub();
  ~NFCClientStub() override;
  void set_sink(NFCClient* sink) { sink_ = sink; }
  NFCClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NFCClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  NFCRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit NFCRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  NFCClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit NFCClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  NFCResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit NFCResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  NFCError {
 public:
  using DataView = NFCErrorDataView;
  using Data_ = internal::NFCError_Data;

  static NFCErrorPtr New();

  template <typename U>
  static NFCErrorPtr From(const U& u) {
    return mojo::TypeConverter<NFCErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCError>::Convert(*this);
  }

  NFCError();
  ~NFCError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCErrorPtr>
  NFCErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCError>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCErrorPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCErrorPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  NFCErrorType error_type;
};

class NFCErrorDataView {
 public:
  NFCErrorDataView() {}

  NFCErrorDataView(
      internal::NFCError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::device::nfc::NFCErrorType>(
        data_value, output);
  }

  ::device::nfc::NFCErrorType error_type() const {
    return static_cast<::device::nfc::NFCErrorType>(data_->error_type);
  }
 private:
  internal::NFCError_Data* data_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCErrorDataView> {
  using MojomType = ::device::nfc::NFCErrorPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {





class  NFCPushOptions {
 public:
  using DataView = NFCPushOptionsDataView;
  using Data_ = internal::NFCPushOptions_Data;

  static NFCPushOptionsPtr New();

  template <typename U>
  static NFCPushOptionsPtr From(const U& u) {
    return mojo::TypeConverter<NFCPushOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCPushOptions>::Convert(*this);
  }

  NFCPushOptions();
  ~NFCPushOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCPushOptionsPtr>
  NFCPushOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCPushOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCPushOptionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCPushOptionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  NFCPushTarget target;
  double timeout;
  bool ignore_read;
};

class NFCPushOptionsDataView {
 public:
  NFCPushOptionsDataView() {}

  NFCPushOptionsDataView(
      internal::NFCPushOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadTarget(UserType* output) const {
    auto data_value = data_->target;
    return mojo::internal::Deserialize<::device::nfc::NFCPushTarget>(
        data_value, output);
  }

  ::device::nfc::NFCPushTarget target() const {
    return static_cast<::device::nfc::NFCPushTarget>(data_->target);
  }
  double timeout() const {
    return data_->timeout;
  }
  bool ignore_read() const {
    return data_->ignore_read;
  }
 private:
  internal::NFCPushOptions_Data* data_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCPushOptionsDataView> {
  using MojomType = ::device::nfc::NFCPushOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {



class  NFCRecordTypeFilter {
 public:
  using DataView = NFCRecordTypeFilterDataView;
  using Data_ = internal::NFCRecordTypeFilter_Data;

  static NFCRecordTypeFilterPtr New();

  template <typename U>
  static NFCRecordTypeFilterPtr From(const U& u) {
    return mojo::TypeConverter<NFCRecordTypeFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCRecordTypeFilter>::Convert(*this);
  }

  NFCRecordTypeFilter();
  ~NFCRecordTypeFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCRecordTypeFilterPtr>
  NFCRecordTypeFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCRecordTypeFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCRecordTypeFilterPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCRecordTypeFilterPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  NFCRecordType record_type;
};

class NFCRecordTypeFilterDataView {
 public:
  NFCRecordTypeFilterDataView() {}

  NFCRecordTypeFilterDataView(
      internal::NFCRecordTypeFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadRecordType(UserType* output) const {
    auto data_value = data_->record_type;
    return mojo::internal::Deserialize<::device::nfc::NFCRecordType>(
        data_value, output);
  }

  ::device::nfc::NFCRecordType record_type() const {
    return static_cast<::device::nfc::NFCRecordType>(data_->record_type);
  }
 private:
  internal::NFCRecordTypeFilter_Data* data_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCRecordTypeFilterDataView> {
  using MojomType = ::device::nfc::NFCRecordTypeFilterPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {







class  NFCRecord {
 public:
  using DataView = NFCRecordDataView;
  using Data_ = internal::NFCRecord_Data;

  static NFCRecordPtr New();

  template <typename U>
  static NFCRecordPtr From(const U& u) {
    return mojo::TypeConverter<NFCRecordPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCRecord>::Convert(*this);
  }

  NFCRecord();
  ~NFCRecord();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCRecordPtr>
  NFCRecordPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCRecord>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCRecordPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCRecordPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  NFCRecordType record_type;
  mojo::String media_type;
  mojo::Array<uint8_t> data;
 private:
  DISALLOW_COPY_AND_ASSIGN(NFCRecord);
};

class NFCRecordDataView {
 public:
  NFCRecordDataView() {}

  NFCRecordDataView(
      internal::NFCRecord_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadRecordType(UserType* output) const {
    auto data_value = data_->record_type;
    return mojo::internal::Deserialize<::device::nfc::NFCRecordType>(
        data_value, output);
  }

  ::device::nfc::NFCRecordType record_type() const {
    return static_cast<::device::nfc::NFCRecordType>(data_->record_type);
  }
  inline void GetMediaTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMediaType(UserType* output) {
    auto pointer = data_->media_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::NFCRecord_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCRecordDataView> {
  using MojomType = ::device::nfc::NFCRecordPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {



class  NFCMessage {
 public:
  using DataView = NFCMessageDataView;
  using Data_ = internal::NFCMessage_Data;

  static NFCMessagePtr New();

  template <typename U>
  static NFCMessagePtr From(const U& u) {
    return mojo::TypeConverter<NFCMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCMessage>::Convert(*this);
  }

  NFCMessage();
  ~NFCMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCMessagePtr>
  NFCMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCMessagePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCMessagePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<NFCRecordPtr> data;
  mojo::String url;
 private:
  DISALLOW_COPY_AND_ASSIGN(NFCMessage);
};

class NFCMessageDataView {
 public:
  NFCMessageDataView() {}

  NFCMessageDataView(
      internal::NFCMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<NFCRecordDataView>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::nfc::NFCRecordPtr>>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::NFCMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCMessageDataView> {
  using MojomType = ::device::nfc::NFCMessagePtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {





class  NFCWatchOptions {
 public:
  using DataView = NFCWatchOptionsDataView;
  using Data_ = internal::NFCWatchOptions_Data;

  static NFCWatchOptionsPtr New();

  template <typename U>
  static NFCWatchOptionsPtr From(const U& u) {
    return mojo::TypeConverter<NFCWatchOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NFCWatchOptions>::Convert(*this);
  }

  NFCWatchOptions();
  ~NFCWatchOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NFCWatchOptionsPtr>
  NFCWatchOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NFCWatchOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NFCWatchOptionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NFCWatchOptionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String url;
  NFCRecordTypeFilterPtr record_filter;
  mojo::String media_type;
  NFCWatchMode mode;
 private:
  DISALLOW_COPY_AND_ASSIGN(NFCWatchOptions);
};

class NFCWatchOptionsDataView {
 public:
  NFCWatchOptionsDataView() {}

  NFCWatchOptionsDataView(
      internal::NFCWatchOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetRecordFilterDataView(
      NFCRecordTypeFilterDataView* output);

  template <typename UserType>
  bool ReadRecordFilter(UserType* output) {
    auto pointer = data_->record_filter.Get();
    return mojo::internal::Deserialize<::device::nfc::NFCRecordTypeFilterPtr>(
        pointer, output, context_);
  }
  inline void GetMediaTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMediaType(UserType* output) {
    auto pointer = data_->media_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::device::nfc::NFCWatchMode>(
        data_value, output);
  }

  ::device::nfc::NFCWatchMode mode() const {
    return static_cast<::device::nfc::NFCWatchMode>(data_->mode);
  }
 private:
  internal::NFCWatchOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace nfc
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::nfc::NFCWatchOptionsDataView> {
  using MojomType = ::device::nfc::NFCWatchOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace nfc {


template <typename StructPtrType>
NFCErrorPtr NFCError::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->error_type = mojo::internal::Clone(error_type);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCError>::value>::type*>
bool NFCError::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->error_type, other.error_type))
    return false;
  return true;
}


template <typename StructPtrType>
NFCRecordPtr NFCRecord::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->record_type = mojo::internal::Clone(record_type);
  rv->media_type = mojo::internal::Clone(media_type);
  rv->data = mojo::internal::Clone(data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCRecord>::value>::type*>
bool NFCRecord::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->record_type, other.record_type))
    return false;
  if (!mojo::internal::Equals(this->media_type, other.media_type))
    return false;
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  return true;
}

inline void NFCRecordDataView::GetMediaTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NFCRecordDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

template <typename StructPtrType>
NFCMessagePtr NFCMessage::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->data = mojo::internal::Clone(data);
  rv->url = mojo::internal::Clone(url);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCMessage>::value>::type*>
bool NFCMessage::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  return true;
}

inline void NFCMessageDataView::GetDataDataView(
    mojo::ArrayDataView<NFCRecordDataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<NFCRecordDataView>(pointer, context_);
}
inline void NFCMessageDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
NFCPushOptionsPtr NFCPushOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->target = mojo::internal::Clone(target);
  rv->timeout = mojo::internal::Clone(timeout);
  rv->ignore_read = mojo::internal::Clone(ignore_read);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCPushOptions>::value>::type*>
bool NFCPushOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->target, other.target))
    return false;
  if (!mojo::internal::Equals(this->timeout, other.timeout))
    return false;
  if (!mojo::internal::Equals(this->ignore_read, other.ignore_read))
    return false;
  return true;
}


template <typename StructPtrType>
NFCRecordTypeFilterPtr NFCRecordTypeFilter::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->record_type = mojo::internal::Clone(record_type);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCRecordTypeFilter>::value>::type*>
bool NFCRecordTypeFilter::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->record_type, other.record_type))
    return false;
  return true;
}


template <typename StructPtrType>
NFCWatchOptionsPtr NFCWatchOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->url = mojo::internal::Clone(url);
  rv->record_filter = mojo::internal::Clone(record_filter);
  rv->media_type = mojo::internal::Clone(media_type);
  rv->mode = mojo::internal::Clone(mode);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NFCWatchOptions>::value>::type*>
bool NFCWatchOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::Equals(this->record_filter, other.record_filter))
    return false;
  if (!mojo::internal::Equals(this->media_type, other.media_type))
    return false;
  if (!mojo::internal::Equals(this->mode, other.mode))
    return false;
  return true;
}

inline void NFCWatchOptionsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NFCWatchOptionsDataView::GetRecordFilterDataView(
    NFCRecordTypeFilterDataView* output) {
  auto pointer = data_->record_filter.Get();
  *output = NFCRecordTypeFilterDataView(pointer, context_);
}
inline void NFCWatchOptionsDataView::GetMediaTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace nfc
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::nfc::NFCError, ::device::nfc::NFCErrorPtr> {
  static bool IsNull(const ::device::nfc::NFCErrorPtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCErrorPtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCError::error_type) error_type(
      const ::device::nfc::NFCErrorPtr& input) {
    return input->error_type;
  }

  static bool Read(::device::nfc::NFCErrorDataView input, ::device::nfc::NFCErrorPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCErrorPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCError, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCError_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCError_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCError_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::device::nfc::NFCErrorType>(
          CallWithContext(Traits::error_type, input, custom_context), &result->error_type);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::nfc::NFCRecord, ::device::nfc::NFCRecordPtr> {
  static bool IsNull(const ::device::nfc::NFCRecordPtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCRecordPtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCRecord::record_type) record_type(
      const ::device::nfc::NFCRecordPtr& input) {
    return input->record_type;
  }
  static decltype(::device::nfc::NFCRecord::media_type)& media_type(
      ::device::nfc::NFCRecordPtr& input) {
    return input->media_type;
  }
  static decltype(::device::nfc::NFCRecord::data)& data(
      ::device::nfc::NFCRecordPtr& input) {
    return input->data;
  }

  static bool Read(::device::nfc::NFCRecordDataView input, ::device::nfc::NFCRecordPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCRecordPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCRecord, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCRecord_Data);
    decltype(CallWithContext(Traits::media_type, input, custom_context)) in_media_type = CallWithContext(Traits::media_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_media_type, context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCRecord_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCRecord_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::device::nfc::NFCRecordType>(
          CallWithContext(Traits::record_type, input, custom_context), &result->record_type);
      decltype(CallWithContext(Traits::media_type, input, custom_context)) in_media_type = CallWithContext(Traits::media_type, input, custom_context);
      typename decltype(result->media_type)::BaseType* media_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_media_type, buffer, &media_type_ptr, context);
      result->media_type.Set(media_type_ptr);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null data in NFCRecord struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCRecord_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCRecordDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::nfc::NFCMessage, ::device::nfc::NFCMessagePtr> {
  static bool IsNull(const ::device::nfc::NFCMessagePtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCMessagePtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCMessage::data)& data(
      ::device::nfc::NFCMessagePtr& input) {
    return input->data;
  }
  static decltype(::device::nfc::NFCMessage::url)& url(
      ::device::nfc::NFCMessagePtr& input) {
    return input->url;
  }

  static bool Read(::device::nfc::NFCMessageDataView input, ::device::nfc::NFCMessagePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCMessagePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCMessage, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCMessage_Data);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::nfc::NFCRecordPtr>>(
        in_data, context);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_url, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCMessage_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCMessage_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::nfc::NFCRecordPtr>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null data in NFCMessage struct");
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::nfc::NFCPushOptions, ::device::nfc::NFCPushOptionsPtr> {
  static bool IsNull(const ::device::nfc::NFCPushOptionsPtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCPushOptionsPtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCPushOptions::target) target(
      const ::device::nfc::NFCPushOptionsPtr& input) {
    return input->target;
  }
  static decltype(::device::nfc::NFCPushOptions::timeout) timeout(
      const ::device::nfc::NFCPushOptionsPtr& input) {
    return input->timeout;
  }
  static decltype(::device::nfc::NFCPushOptions::ignore_read) ignore_read(
      const ::device::nfc::NFCPushOptionsPtr& input) {
    return input->ignore_read;
  }

  static bool Read(::device::nfc::NFCPushOptionsDataView input, ::device::nfc::NFCPushOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCPushOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCPushOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCPushOptions_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCPushOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCPushOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::device::nfc::NFCPushTarget>(
          CallWithContext(Traits::target, input, custom_context), &result->target);
      result->timeout = CallWithContext(Traits::timeout, input, custom_context);
      result->ignore_read = CallWithContext(Traits::ignore_read, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCPushOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCPushOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::nfc::NFCRecordTypeFilter, ::device::nfc::NFCRecordTypeFilterPtr> {
  static bool IsNull(const ::device::nfc::NFCRecordTypeFilterPtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCRecordTypeFilterPtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCRecordTypeFilter::record_type) record_type(
      const ::device::nfc::NFCRecordTypeFilterPtr& input) {
    return input->record_type;
  }

  static bool Read(::device::nfc::NFCRecordTypeFilterDataView input, ::device::nfc::NFCRecordTypeFilterPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCRecordTypeFilterPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCRecordTypeFilter, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCRecordTypeFilter_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCRecordTypeFilter_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCRecordTypeFilter_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::device::nfc::NFCRecordType>(
          CallWithContext(Traits::record_type, input, custom_context), &result->record_type);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCRecordTypeFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCRecordTypeFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::nfc::NFCWatchOptions, ::device::nfc::NFCWatchOptionsPtr> {
  static bool IsNull(const ::device::nfc::NFCWatchOptionsPtr& input) { return !input; }
  static void SetToNull(::device::nfc::NFCWatchOptionsPtr* output) { output->reset(); }
  static decltype(::device::nfc::NFCWatchOptions::url)& url(
      ::device::nfc::NFCWatchOptionsPtr& input) {
    return input->url;
  }
  static decltype(::device::nfc::NFCWatchOptions::record_filter)& record_filter(
      ::device::nfc::NFCWatchOptionsPtr& input) {
    return input->record_filter;
  }
  static decltype(::device::nfc::NFCWatchOptions::media_type)& media_type(
      ::device::nfc::NFCWatchOptionsPtr& input) {
    return input->media_type;
  }
  static decltype(::device::nfc::NFCWatchOptions::mode) mode(
      const ::device::nfc::NFCWatchOptionsPtr& input) {
    return input->mode;
  }

  static bool Read(::device::nfc::NFCWatchOptionsDataView input, ::device::nfc::NFCWatchOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCWatchOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::nfc::NFCWatchOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::nfc::internal::NFCWatchOptions_Data);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_url, context);
    decltype(CallWithContext(Traits::record_filter, input, custom_context)) in_record_filter = CallWithContext(Traits::record_filter, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::device::nfc::NFCRecordTypeFilterPtr>(
        in_record_filter, context);
    decltype(CallWithContext(Traits::media_type, input, custom_context)) in_media_type = CallWithContext(Traits::media_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_media_type, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::nfc::internal::NFCWatchOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::nfc::internal::NFCWatchOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      decltype(CallWithContext(Traits::record_filter, input, custom_context)) in_record_filter = CallWithContext(Traits::record_filter, input, custom_context);
      typename decltype(result->record_filter)::BaseType* record_filter_ptr;
      mojo::internal::Serialize<::device::nfc::NFCRecordTypeFilterPtr>(
          in_record_filter, buffer, &record_filter_ptr, context);
      result->record_filter.Set(record_filter_ptr);
      decltype(CallWithContext(Traits::media_type, input, custom_context)) in_media_type = CallWithContext(Traits::media_type, input, custom_context);
      typename decltype(result->media_type)::BaseType* media_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_media_type, buffer, &media_type_ptr, context);
      result->media_type.Set(media_type_ptr);
      mojo::internal::Serialize<::device::nfc::NFCWatchMode>(
          CallWithContext(Traits::mode, input, custom_context), &result->mode);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::nfc::internal::NFCWatchOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::nfc::NFCWatchOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_NFC_NFC_MOJOM_H_