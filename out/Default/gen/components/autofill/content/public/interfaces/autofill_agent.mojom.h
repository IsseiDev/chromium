// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_AGENT_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_AGENT_MOJOM_H_

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
#include "components/autofill/content/public/interfaces/autofill_agent.mojom-shared.h"
#include "components/autofill/content/public/interfaces/autofill_types.mojom.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "base/time/time.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/size.h"
#include "components/autofill/core/common/form_field_data_predictions.h"
#include "components/autofill/core/common/password_form_field_prediction_map.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/rect_f.h"
#include "components/autofill/core/common/form_data_predictions.h"
#include "components/autofill/core/common/form_data.h"
#include "base/files/file_path.h"
#include "components/autofill/core/common/form_field_data.h"
#include "url/origin.h"
#include "ui/gfx/geometry/point_f.h"
#include "components/autofill/core/common/password_form_fill_data.h"
#include "components/autofill/core/common/password_form_generation_data.h"
#include "url/gurl.h"
#include "ui/gfx/geometry/rect.h"
#include "components/autofill/core/common/password_form.h"
#include "ui/gfx/geometry/vector2d.h"


namespace autofill {
namespace mojom {
class AutofillAgent;
using AutofillAgentPtr = mojo::InterfacePtr<AutofillAgent>;
using AutofillAgentPtrInfo = mojo::InterfacePtrInfo<AutofillAgent>;
using AutofillAgentRequest = mojo::InterfaceRequest<AutofillAgent>;
using AutofillAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutofillAgent>;
using AutofillAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutofillAgent>;
using AutofillAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutofillAgent>;

class PasswordAutofillAgent;
using PasswordAutofillAgentPtr = mojo::InterfacePtr<PasswordAutofillAgent>;
using PasswordAutofillAgentPtrInfo = mojo::InterfacePtrInfo<PasswordAutofillAgent>;
using PasswordAutofillAgentRequest = mojo::InterfaceRequest<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordAutofillAgent>;
using PasswordAutofillAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordAutofillAgent>;

class PasswordGenerationAgent;
using PasswordGenerationAgentPtr = mojo::InterfacePtr<PasswordGenerationAgent>;
using PasswordGenerationAgentPtrInfo = mojo::InterfacePtrInfo<PasswordGenerationAgent>;
using PasswordGenerationAgentRequest = mojo::InterfaceRequest<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordGenerationAgent>;
using PasswordGenerationAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordGenerationAgent>;


class AutofillAgentProxy;
class AutofillAgentStub;

class AutofillAgentRequestValidator;

class  AutofillAgent {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AutofillAgentProxy;
  using Stub_ = AutofillAgentStub;

  using RequestValidator_ = AutofillAgentRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~AutofillAgent() {}

  virtual void FirstUserGestureObservedInTab() = 0;

  virtual void FillForm(int32_t id, const autofill::FormData& form) = 0;

  virtual void PreviewForm(int32_t id, const autofill::FormData& form) = 0;

  virtual void FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) = 0;

  virtual void ClearForm() = 0;

  virtual void ClearPreviewedForm() = 0;

  virtual void FillFieldWithValue(const base::string16& value) = 0;

  virtual void PreviewFieldWithValue(const base::string16& value) = 0;

  virtual void AcceptDataListSuggestion(const base::string16& value) = 0;

  virtual void FillPasswordSuggestion(const base::string16& username, const base::string16& password) = 0;

  virtual void PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) = 0;

  virtual void ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) = 0;
};

class PasswordAutofillAgentProxy;
class PasswordAutofillAgentStub;

class PasswordAutofillAgentRequestValidator;
class PasswordAutofillAgentResponseValidator;

class  PasswordAutofillAgent {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PasswordAutofillAgentProxy;
  using Stub_ = PasswordAutofillAgentStub;

  using RequestValidator_ = PasswordAutofillAgentRequestValidator;
  using ResponseValidator_ = PasswordAutofillAgentResponseValidator;
  virtual ~PasswordAutofillAgent() {}

  virtual void FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) = 0;

  virtual void SetLoggingState(bool active) = 0;

  virtual void AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) = 0;


  using FindFocusedPasswordFormCallback = base::Callback<void(const autofill::PasswordForm&)>;
  virtual void FindFocusedPasswordForm(const FindFocusedPasswordFormCallback& callback) = 0;
};

class PasswordGenerationAgentProxy;
class PasswordGenerationAgentStub;

class PasswordGenerationAgentRequestValidator;

class  PasswordGenerationAgent {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PasswordGenerationAgentProxy;
  using Stub_ = PasswordGenerationAgentStub;

  using RequestValidator_ = PasswordGenerationAgentRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PasswordGenerationAgent() {}

  virtual void GeneratedPasswordAccepted(const base::string16& generated_password) = 0;

  virtual void UserTriggeredGeneratePassword() = 0;

  virtual void FormNotBlacklisted(const autofill::PasswordForm& form) = 0;

  virtual void FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) = 0;

  virtual void AllowToRunFormClassifier() = 0;
};

class  AutofillAgentProxy
    : public AutofillAgent,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void FirstUserGestureObservedInTab() override;
  void FillForm(int32_t id, const autofill::FormData& form) override;
  void PreviewForm(int32_t id, const autofill::FormData& form) override;
  void FieldTypePredictionsAvailable(const std::vector<autofill::FormDataPredictions>& forms) override;
  void ClearForm() override;
  void ClearPreviewedForm() override;
  void FillFieldWithValue(const base::string16& value) override;
  void PreviewFieldWithValue(const base::string16& value) override;
  void AcceptDataListSuggestion(const base::string16& value) override;
  void FillPasswordSuggestion(const base::string16& username, const base::string16& password) override;
  void PreviewPasswordSuggestion(const base::string16& username, const base::string16& password) override;
  void ShowInitialPasswordAccountSuggestions(int32_t key, const autofill::PasswordFormFillData& form_data) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  PasswordAutofillAgentProxy
    : public PasswordAutofillAgent,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PasswordAutofillAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void FillPasswordForm(int32_t key, const autofill::PasswordFormFillData& form_data) override;
  void SetLoggingState(bool active) override;
  void AutofillUsernameAndPasswordDataReceived(const autofill::FormsPredictionsMap& predictions) override;
  void FindFocusedPasswordForm(const FindFocusedPasswordFormCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  PasswordGenerationAgentProxy
    : public PasswordGenerationAgent,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PasswordGenerationAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void GeneratedPasswordAccepted(const base::string16& generated_password) override;
  void UserTriggeredGeneratePassword() override;
  void FormNotBlacklisted(const autofill::PasswordForm& form) override;
  void FoundFormsEligibleForGeneration(const std::vector<autofill::PasswordFormGenerationData>& forms) override;
  void AllowToRunFormClassifier() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  AutofillAgentStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AutofillAgentStub();
  ~AutofillAgentStub() override;
  void set_sink(AutofillAgent* sink) { sink_ = sink; }
  AutofillAgent* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AutofillAgent* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PasswordAutofillAgentStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PasswordAutofillAgentStub();
  ~PasswordAutofillAgentStub() override;
  void set_sink(PasswordAutofillAgent* sink) { sink_ = sink; }
  PasswordAutofillAgent* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PasswordAutofillAgent* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PasswordGenerationAgentStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PasswordGenerationAgentStub();
  ~PasswordGenerationAgentStub() override;
  void set_sink(PasswordGenerationAgent* sink) { sink_ = sink; }
  PasswordGenerationAgent* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PasswordGenerationAgent* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AutofillAgentRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AutofillAgentRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PasswordAutofillAgentRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PasswordAutofillAgentRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PasswordGenerationAgentRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PasswordGenerationAgentRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PasswordAutofillAgentResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PasswordAutofillAgentResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_AGENT_MOJOM_H_