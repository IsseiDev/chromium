// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_

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
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "media/mojo/interfaces/decryptor.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "url/gurl.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "media/base/pipeline_status.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "media/base/audio_parameters.h"
#include "services/shell/public/cpp/capabilities.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "services/shell/public/cpp/identity.h"
#include "ui/gfx/geometry/rect_f.h"


namespace media {
namespace mojom {
class ContentDecryptionModule;
using ContentDecryptionModulePtr = mojo::InterfacePtr<ContentDecryptionModule>;
using ContentDecryptionModulePtrInfo = mojo::InterfacePtrInfo<ContentDecryptionModule>;
using ContentDecryptionModuleRequest = mojo::InterfaceRequest<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentDecryptionModule>;
using ContentDecryptionModuleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentDecryptionModule>;

class ContentDecryptionModuleClient;
using ContentDecryptionModuleClientPtr = mojo::InterfacePtr<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientPtrInfo = mojo::InterfacePtrInfo<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientRequest = mojo::InterfaceRequest<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentDecryptionModuleClient>;
using ContentDecryptionModuleClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentDecryptionModuleClient>;

class CdmConfig;
class CdmConfigDataView;
using CdmConfigPtr = mojo::InlinedStructPtr<CdmConfig>;

class CdmPromiseResult;
class CdmPromiseResultDataView;
using CdmPromiseResultPtr = mojo::InlinedStructPtr<CdmPromiseResult>;

class CdmKeyInformation;
class CdmKeyInformationDataView;
using CdmKeyInformationPtr = mojo::StructPtr<CdmKeyInformation>;


class ContentDecryptionModuleProxy;
class ContentDecryptionModuleStub;

class ContentDecryptionModuleRequestValidator;
class ContentDecryptionModuleResponseValidator;

class  ContentDecryptionModule {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ContentDecryptionModuleProxy;
  using Stub_ = ContentDecryptionModuleStub;

  using RequestValidator_ = ContentDecryptionModuleRequestValidator;
  using ResponseValidator_ = ContentDecryptionModuleResponseValidator;
  using SessionType = ContentDecryptionModule_SessionType;
  using InitDataType = ContentDecryptionModule_InitDataType;
  virtual ~ContentDecryptionModule() {}

  virtual void SetClient(ContentDecryptionModuleClientPtr client) = 0;


  using InitializeCallback = base::Callback<void(CdmPromiseResultPtr, int32_t, ::media::mojom::DecryptorPtr)>;
  virtual void Initialize(const mojo::String& key_system, const mojo::String& security_origin, CdmConfigPtr cdm_config, const InitializeCallback& callback) = 0;


  using SetServerCertificateCallback = base::Callback<void(CdmPromiseResultPtr)>;
  virtual void SetServerCertificate(mojo::Array<uint8_t> certificate_data, const SetServerCertificateCallback& callback) = 0;


  using CreateSessionAndGenerateRequestCallback = base::Callback<void(CdmPromiseResultPtr, mojo::String)>;
  virtual void CreateSessionAndGenerateRequest(ContentDecryptionModule::SessionType session_type, ContentDecryptionModule::InitDataType init_data_type, mojo::Array<uint8_t> init_data, const CreateSessionAndGenerateRequestCallback& callback) = 0;


  using LoadSessionCallback = base::Callback<void(CdmPromiseResultPtr, mojo::String)>;
  virtual void LoadSession(ContentDecryptionModule::SessionType session_type, const mojo::String& session_id, const LoadSessionCallback& callback) = 0;


  using UpdateSessionCallback = base::Callback<void(CdmPromiseResultPtr)>;
  virtual void UpdateSession(const mojo::String& session_id, mojo::Array<uint8_t> response, const UpdateSessionCallback& callback) = 0;


  using CloseSessionCallback = base::Callback<void(CdmPromiseResultPtr)>;
  virtual void CloseSession(const mojo::String& session_id, const CloseSessionCallback& callback) = 0;


  using RemoveSessionCallback = base::Callback<void(CdmPromiseResultPtr)>;
  virtual void RemoveSession(const mojo::String& session_id, const RemoveSessionCallback& callback) = 0;
};

class ContentDecryptionModuleClientProxy;
class ContentDecryptionModuleClientStub;

class ContentDecryptionModuleClientRequestValidator;

class  ContentDecryptionModuleClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ContentDecryptionModuleClientProxy;
  using Stub_ = ContentDecryptionModuleClientStub;

  using RequestValidator_ = ContentDecryptionModuleClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ContentDecryptionModuleClient() {}

  virtual void OnSessionMessage(const mojo::String& session_id, CdmMessageType message_type, mojo::Array<uint8_t> message, const GURL& legacy_destination_url) = 0;

  virtual void OnSessionClosed(const mojo::String& session_id) = 0;

  virtual void OnLegacySessionError(const mojo::String& session_id, CdmException exception, uint32_t system_code, const mojo::String& error_message) = 0;

  virtual void OnSessionKeysChange(const mojo::String& session_id, bool has_additional_usable_key, mojo::Array<CdmKeyInformationPtr> key_information) = 0;

  virtual void OnSessionExpirationUpdate(const mojo::String& session_id, double new_expiry_time_sec) = 0;
};

class  ContentDecryptionModuleProxy
    : public ContentDecryptionModule,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ContentDecryptionModuleProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(ContentDecryptionModuleClientPtr client) override;
  void Initialize(const mojo::String& key_system, const mojo::String& security_origin, CdmConfigPtr cdm_config, const InitializeCallback& callback) override;
  void SetServerCertificate(mojo::Array<uint8_t> certificate_data, const SetServerCertificateCallback& callback) override;
  void CreateSessionAndGenerateRequest(ContentDecryptionModule::SessionType session_type, ContentDecryptionModule::InitDataType init_data_type, mojo::Array<uint8_t> init_data, const CreateSessionAndGenerateRequestCallback& callback) override;
  void LoadSession(ContentDecryptionModule::SessionType session_type, const mojo::String& session_id, const LoadSessionCallback& callback) override;
  void UpdateSession(const mojo::String& session_id, mojo::Array<uint8_t> response, const UpdateSessionCallback& callback) override;
  void CloseSession(const mojo::String& session_id, const CloseSessionCallback& callback) override;
  void RemoveSession(const mojo::String& session_id, const RemoveSessionCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ContentDecryptionModuleClientProxy
    : public ContentDecryptionModuleClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ContentDecryptionModuleClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSessionMessage(const mojo::String& session_id, CdmMessageType message_type, mojo::Array<uint8_t> message, const GURL& legacy_destination_url) override;
  void OnSessionClosed(const mojo::String& session_id) override;
  void OnLegacySessionError(const mojo::String& session_id, CdmException exception, uint32_t system_code, const mojo::String& error_message) override;
  void OnSessionKeysChange(const mojo::String& session_id, bool has_additional_usable_key, mojo::Array<CdmKeyInformationPtr> key_information) override;
  void OnSessionExpirationUpdate(const mojo::String& session_id, double new_expiry_time_sec) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ContentDecryptionModuleStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ContentDecryptionModuleStub();
  ~ContentDecryptionModuleStub() override;
  void set_sink(ContentDecryptionModule* sink) { sink_ = sink; }
  ContentDecryptionModule* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContentDecryptionModule* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ContentDecryptionModuleClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ContentDecryptionModuleClientStub();
  ~ContentDecryptionModuleClientStub() override;
  void set_sink(ContentDecryptionModuleClient* sink) { sink_ = sink; }
  ContentDecryptionModuleClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContentDecryptionModuleClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ContentDecryptionModuleRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ContentDecryptionModuleRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ContentDecryptionModuleClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ContentDecryptionModuleClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ContentDecryptionModuleResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ContentDecryptionModuleResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  CdmConfig {
 public:
  using DataView = CdmConfigDataView;
  using Data_ = internal::CdmConfig_Data;

  static CdmConfigPtr New();

  template <typename U>
  static CdmConfigPtr From(const U& u) {
    return mojo::TypeConverter<CdmConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CdmConfig>::Convert(*this);
  }

  CdmConfig();
  ~CdmConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CdmConfigPtr>
  CdmConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CdmConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CdmConfigPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CdmConfigPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool allow_distinctive_identifier;
  bool allow_persistent_state;
  bool use_hw_secure_codecs;
};

class CdmConfigDataView {
 public:
  CdmConfigDataView() {}

  CdmConfigDataView(
      internal::CdmConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allow_distinctive_identifier() const {
    return data_->allow_distinctive_identifier;
  }
  bool allow_persistent_state() const {
    return data_->allow_persistent_state;
  }
  bool use_hw_secure_codecs() const {
    return data_->use_hw_secure_codecs;
  }
 private:
  internal::CdmConfig_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::CdmConfigDataView> {
  using MojomType = ::media::mojom::CdmConfigPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  CdmPromiseResult {
 public:
  using DataView = CdmPromiseResultDataView;
  using Data_ = internal::CdmPromiseResult_Data;

  static CdmPromiseResultPtr New();

  template <typename U>
  static CdmPromiseResultPtr From(const U& u) {
    return mojo::TypeConverter<CdmPromiseResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CdmPromiseResult>::Convert(*this);
  }

  CdmPromiseResult();
  ~CdmPromiseResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CdmPromiseResultPtr>
  CdmPromiseResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CdmPromiseResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CdmPromiseResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CdmPromiseResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool success;
  CdmException exception;
  uint32_t system_code;
  mojo::String error_message;
};

class CdmPromiseResultDataView {
 public:
  CdmPromiseResultDataView() {}

  CdmPromiseResultDataView(
      internal::CdmPromiseResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  template <typename UserType>
  bool ReadException(UserType* output) const {
    auto data_value = data_->exception;
    return mojo::internal::Deserialize<::media::mojom::CdmException>(
        data_value, output);
  }

  ::media::mojom::CdmException exception() const {
    return static_cast<::media::mojom::CdmException>(data_->exception);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadErrorMessage(UserType* output) {
    auto pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::CdmPromiseResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::CdmPromiseResultDataView> {
  using MojomType = ::media::mojom::CdmPromiseResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {








class  CdmKeyInformation {
 public:
  using DataView = CdmKeyInformationDataView;
  using Data_ = internal::CdmKeyInformation_Data;

  static CdmKeyInformationPtr New();

  template <typename U>
  static CdmKeyInformationPtr From(const U& u) {
    return mojo::TypeConverter<CdmKeyInformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CdmKeyInformation>::Convert(*this);
  }

  CdmKeyInformation();
  ~CdmKeyInformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CdmKeyInformationPtr>
  CdmKeyInformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CdmKeyInformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        CdmKeyInformationPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        CdmKeyInformationPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<uint8_t> key_id;
  CdmKeyStatus status;
  uint32_t system_code;
 private:
  DISALLOW_COPY_AND_ASSIGN(CdmKeyInformation);
};

class CdmKeyInformationDataView {
 public:
  CdmKeyInformationDataView() {}

  CdmKeyInformationDataView(
      internal::CdmKeyInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadKeyId(UserType* output) {
    auto pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmKeyStatus>(
        data_value, output);
  }

  ::media::mojom::CdmKeyStatus status() const {
    return static_cast<::media::mojom::CdmKeyStatus>(data_->status);
  }
  uint32_t system_code() const {
    return data_->system_code;
  }
 private:
  internal::CdmKeyInformation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::CdmKeyInformationDataView> {
  using MojomType = ::media::mojom::CdmKeyInformationPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {


template <typename StructPtrType>
CdmConfigPtr CdmConfig::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->allow_distinctive_identifier = mojo::internal::Clone(allow_distinctive_identifier);
  rv->allow_persistent_state = mojo::internal::Clone(allow_persistent_state);
  rv->use_hw_secure_codecs = mojo::internal::Clone(use_hw_secure_codecs);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CdmConfig>::value>::type*>
bool CdmConfig::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->allow_distinctive_identifier, other.allow_distinctive_identifier))
    return false;
  if (!mojo::internal::Equals(this->allow_persistent_state, other.allow_persistent_state))
    return false;
  if (!mojo::internal::Equals(this->use_hw_secure_codecs, other.use_hw_secure_codecs))
    return false;
  return true;
}


template <typename StructPtrType>
CdmPromiseResultPtr CdmPromiseResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->success = mojo::internal::Clone(success);
  rv->exception = mojo::internal::Clone(exception);
  rv->system_code = mojo::internal::Clone(system_code);
  rv->error_message = mojo::internal::Clone(error_message);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CdmPromiseResult>::value>::type*>
bool CdmPromiseResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->success, other.success))
    return false;
  if (!mojo::internal::Equals(this->exception, other.exception))
    return false;
  if (!mojo::internal::Equals(this->system_code, other.system_code))
    return false;
  if (!mojo::internal::Equals(this->error_message, other.error_message))
    return false;
  return true;
}

inline void CdmPromiseResultDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
CdmKeyInformationPtr CdmKeyInformation::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key_id = mojo::internal::Clone(key_id);
  rv->status = mojo::internal::Clone(status);
  rv->system_code = mojo::internal::Clone(system_code);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CdmKeyInformation>::value>::type*>
bool CdmKeyInformation::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key_id, other.key_id))
    return false;
  if (!mojo::internal::Equals(this->status, other.status))
    return false;
  if (!mojo::internal::Equals(this->system_code, other.system_code))
    return false;
  return true;
}

inline void CdmKeyInformationDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::CdmConfig, ::media::mojom::CdmConfigPtr> {
  static bool IsNull(const ::media::mojom::CdmConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::CdmConfigPtr* output) { output->reset(); }
  static decltype(::media::mojom::CdmConfig::allow_distinctive_identifier) allow_distinctive_identifier(
      const ::media::mojom::CdmConfigPtr& input) {
    return input->allow_distinctive_identifier;
  }
  static decltype(::media::mojom::CdmConfig::allow_persistent_state) allow_persistent_state(
      const ::media::mojom::CdmConfigPtr& input) {
    return input->allow_persistent_state;
  }
  static decltype(::media::mojom::CdmConfig::use_hw_secure_codecs) use_hw_secure_codecs(
      const ::media::mojom::CdmConfigPtr& input) {
    return input->use_hw_secure_codecs;
  }

  static bool Read(::media::mojom::CdmConfigDataView input, ::media::mojom::CdmConfigPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmConfigPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmConfig, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::CdmConfig_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmConfig_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::CdmConfig_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->allow_distinctive_identifier = CallWithContext(Traits::allow_distinctive_identifier, input, custom_context);
      result->allow_persistent_state = CallWithContext(Traits::allow_persistent_state, input, custom_context);
      result->use_hw_secure_codecs = CallWithContext(Traits::use_hw_secure_codecs, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CdmConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::CdmPromiseResult, ::media::mojom::CdmPromiseResultPtr> {
  static bool IsNull(const ::media::mojom::CdmPromiseResultPtr& input) { return !input; }
  static void SetToNull(::media::mojom::CdmPromiseResultPtr* output) { output->reset(); }
  static decltype(::media::mojom::CdmPromiseResult::success) success(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->success;
  }
  static decltype(::media::mojom::CdmPromiseResult::exception) exception(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->exception;
  }
  static decltype(::media::mojom::CdmPromiseResult::system_code) system_code(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->system_code;
  }
  static decltype(::media::mojom::CdmPromiseResult::error_message)& error_message(
      ::media::mojom::CdmPromiseResultPtr& input) {
    return input->error_message;
  }

  static bool Read(::media::mojom::CdmPromiseResultDataView input, ::media::mojom::CdmPromiseResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmPromiseResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmPromiseResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::CdmPromiseResult_Data);
    decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_error_message, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmPromiseResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::CdmPromiseResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->success = CallWithContext(Traits::success, input, custom_context);
      mojo::internal::Serialize<::media::mojom::CdmException>(
          CallWithContext(Traits::exception, input, custom_context), &result->exception);
      result->system_code = CallWithContext(Traits::system_code, input, custom_context);
      decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
      typename decltype(result->error_message)::BaseType* error_message_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_error_message, buffer, &error_message_ptr, context);
      result->error_message.Set(error_message_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CdmPromiseResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmPromiseResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::CdmKeyInformation, ::media::mojom::CdmKeyInformationPtr> {
  static bool IsNull(const ::media::mojom::CdmKeyInformationPtr& input) { return !input; }
  static void SetToNull(::media::mojom::CdmKeyInformationPtr* output) { output->reset(); }
  static decltype(::media::mojom::CdmKeyInformation::key_id)& key_id(
      ::media::mojom::CdmKeyInformationPtr& input) {
    return input->key_id;
  }
  static decltype(::media::mojom::CdmKeyInformation::status) status(
      const ::media::mojom::CdmKeyInformationPtr& input) {
    return input->status;
  }
  static decltype(::media::mojom::CdmKeyInformation::system_code) system_code(
      const ::media::mojom::CdmKeyInformationPtr& input) {
    return input->system_code;
  }

  static bool Read(::media::mojom::CdmKeyInformationDataView input, ::media::mojom::CdmKeyInformationPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmKeyInformationPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::CdmKeyInformation, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::CdmKeyInformation_Data);
    decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_key_id, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::CdmKeyInformation_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::CdmKeyInformation_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
      typename decltype(result->key_id)::BaseType* key_id_ptr;
      const mojo::internal::ContainerValidateParams key_id_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_key_id, buffer, &key_id_ptr, &key_id_validate_params,
          context);
      result->key_id.Set(key_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->key_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null key_id in CdmKeyInformation struct");
      mojo::internal::Serialize<::media::mojom::CdmKeyStatus>(
          CallWithContext(Traits::status, input, custom_context), &result->status);
      result->system_code = CallWithContext(Traits::system_code, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::CdmKeyInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::CdmKeyInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_