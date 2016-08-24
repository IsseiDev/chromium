// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_DRIVER_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_DRIVER_MOJOM_H_

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
#include "components/autofill/content/public/interfaces/autofill_driver.mojom-shared.h"
#include "components/autofill/content/public/interfaces/autofill_types.mojom.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class AutofillDriver;
using AutofillDriverPtr = mojo::InterfacePtr<AutofillDriver>;
using AutofillDriverPtrInfo = mojo::InterfacePtrInfo<AutofillDriver>;
using AutofillDriverRequest = mojo::InterfaceRequest<AutofillDriver>;
using AutofillDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutofillDriver>;
using AutofillDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutofillDriver>;
using AutofillDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutofillDriver>;

class PasswordManagerDriver;
using PasswordManagerDriverPtr = mojo::InterfacePtr<PasswordManagerDriver>;
using PasswordManagerDriverPtrInfo = mojo::InterfacePtrInfo<PasswordManagerDriver>;
using PasswordManagerDriverRequest = mojo::InterfaceRequest<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PasswordManagerDriver>;
using PasswordManagerDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PasswordManagerDriver>;


class AutofillDriverProxy;
class AutofillDriverStub;

class AutofillDriverRequestValidator;

class  AutofillDriver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AutofillDriverProxy;
  using Stub_ = AutofillDriverStub;

  using RequestValidator_ = AutofillDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~AutofillDriver() {}

  virtual void FirstUserGestureObserved() = 0;

  virtual void FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) = 0;

  virtual void WillSubmitForm(const autofill::FormData& form, base::TimeTicks timestamp) = 0;

  virtual void FormSubmitted(const autofill::FormData& form) = 0;

  virtual void TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, base::TimeTicks timestamp) = 0;

  virtual void QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) = 0;

  virtual void HidePopup() = 0;

  virtual void PingAck() = 0;

  virtual void FocusNoLongerOnForm() = 0;

  virtual void DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) = 0;

  virtual void DidPreviewAutofillFormData() = 0;

  virtual void DidEndTextFieldEditing() = 0;

  virtual void SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) = 0;
};

class PasswordManagerDriverProxy;
class PasswordManagerDriverStub;

class PasswordManagerDriverRequestValidator;

class  PasswordManagerDriver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PasswordManagerDriverProxy;
  using Stub_ = PasswordManagerDriverStub;

  using RequestValidator_ = PasswordManagerDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PasswordManagerDriver() {}

  virtual void PasswordAutofillAgentConstructed() = 0;

  virtual void PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) = 0;

  virtual void PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) = 0;

  virtual void PasswordFormSubmitted(const autofill::PasswordForm& password_form) = 0;

  virtual void InPageNavigation(const autofill::PasswordForm& password_form) = 0;

  virtual void RecordSavePasswordProgress(const std::string& log) = 0;

  virtual void ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) = 0;

  virtual void PresaveGeneratedPassword(const autofill::PasswordForm& password_form) = 0;

  virtual void PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) = 0;

  virtual void SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) = 0;
};

class  AutofillDriverProxy
    : public AutofillDriver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AutofillDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void FirstUserGestureObserved() override;
  void FormsSeen(const std::vector<autofill::FormData>& forms, base::TimeTicks timestamp) override;
  void WillSubmitForm(const autofill::FormData& form, base::TimeTicks timestamp) override;
  void FormSubmitted(const autofill::FormData& form) override;
  void TextFieldDidChange(const autofill::FormData& form, const autofill::FormFieldData& field, base::TimeTicks timestamp) override;
  void QueryFormFieldAutofill(int32_t id, const autofill::FormData& form, const autofill::FormFieldData& field, const gfx::RectF& bounding_box) override;
  void HidePopup() override;
  void PingAck() override;
  void FocusNoLongerOnForm() override;
  void DidFillAutofillFormData(const autofill::FormData& form, base::TimeTicks timestamp) override;
  void DidPreviewAutofillFormData() override;
  void DidEndTextFieldEditing() override;
  void SetDataList(const std::vector<base::string16>& values, const std::vector<base::string16>& labels) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  PasswordManagerDriverProxy
    : public PasswordManagerDriver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PasswordManagerDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void PasswordAutofillAgentConstructed() override;
  void PasswordFormsParsed(const std::vector<autofill::PasswordForm>& forms) override;
  void PasswordFormsRendered(const std::vector<autofill::PasswordForm>& visible_forms, bool did_stop_loading) override;
  void PasswordFormSubmitted(const autofill::PasswordForm& password_form) override;
  void InPageNavigation(const autofill::PasswordForm& password_form) override;
  void RecordSavePasswordProgress(const std::string& log) override;
  void ShowPasswordSuggestions(int32_t key, base::i18n::TextDirection text_direction, const base::string16& typed_username, int32_t options, const gfx::RectF& bounds) override;
  void PresaveGeneratedPassword(const autofill::PasswordForm& password_form) override;
  void PasswordNoLongerGenerated(const autofill::PasswordForm& password_form) override;
  void SaveGenerationFieldDetectedByClassifier(const autofill::PasswordForm& password_form, const base::string16& generation_field) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  AutofillDriverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AutofillDriverStub();
  ~AutofillDriverStub() override;
  void set_sink(AutofillDriver* sink) { sink_ = sink; }
  AutofillDriver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AutofillDriver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PasswordManagerDriverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PasswordManagerDriverStub();
  ~PasswordManagerDriverStub() override;
  void set_sink(PasswordManagerDriver* sink) { sink_ = sink; }
  PasswordManagerDriver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PasswordManagerDriver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AutofillDriverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AutofillDriverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PasswordManagerDriverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PasswordManagerDriverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace autofill

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_DRIVER_MOJOM_H_