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

#include "components/autofill/content/public/interfaces/autofill_driver.mojom.h"

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
#include "ipc/ipc_message_utils.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "components/autofill/content/public/cpp/autofill_types_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
namespace autofill {
namespace mojom {

namespace {

class AutofillDriver_FirstUserGestureObserved_ParamsDataView {
 public:
  AutofillDriver_FirstUserGestureObserved_ParamsDataView() {}

  AutofillDriver_FirstUserGestureObserved_ParamsDataView(
      internal::AutofillDriver_FirstUserGestureObserved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_FirstUserGestureObserved_Params_Data* data_ = nullptr;
};




class AutofillDriver_FormsSeen_ParamsDataView {
 public:
  AutofillDriver_FormsSeen_ParamsDataView() {}

  AutofillDriver_FormsSeen_ParamsDataView(
      internal::AutofillDriver_FormsSeen_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormsDataView(
      mojo::ArrayDataView<::autofill::mojom::FormDataDataView>* output);

  template <typename UserType>
  bool ReadForms(UserType* output) {
    auto pointer = data_->forms.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_FormsSeen_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_FormsSeen_ParamsDataView::GetFormsDataView(
    mojo::ArrayDataView<::autofill::mojom::FormDataDataView>* output) {
  auto pointer = data_->forms.Get();
  *output = mojo::ArrayDataView<::autofill::mojom::FormDataDataView>(pointer, context_);
}
inline void AutofillDriver_FormsSeen_ParamsDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}


class AutofillDriver_WillSubmitForm_ParamsDataView {
 public:
  AutofillDriver_WillSubmitForm_ParamsDataView() {}

  AutofillDriver_WillSubmitForm_ParamsDataView(
      internal::AutofillDriver_WillSubmitForm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormDataView(
      ::autofill::mojom::FormDataDataView* output);

  template <typename UserType>
  bool ReadForm(UserType* output) {
    auto pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_WillSubmitForm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_WillSubmitForm_ParamsDataView::GetFormDataView(
    ::autofill::mojom::FormDataDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::FormDataDataView(pointer, context_);
}
inline void AutofillDriver_WillSubmitForm_ParamsDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}


class AutofillDriver_FormSubmitted_ParamsDataView {
 public:
  AutofillDriver_FormSubmitted_ParamsDataView() {}

  AutofillDriver_FormSubmitted_ParamsDataView(
      internal::AutofillDriver_FormSubmitted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormDataView(
      ::autofill::mojom::FormDataDataView* output);

  template <typename UserType>
  bool ReadForm(UserType* output) {
    auto pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_FormSubmitted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_FormSubmitted_ParamsDataView::GetFormDataView(
    ::autofill::mojom::FormDataDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::FormDataDataView(pointer, context_);
}


class AutofillDriver_TextFieldDidChange_ParamsDataView {
 public:
  AutofillDriver_TextFieldDidChange_ParamsDataView() {}

  AutofillDriver_TextFieldDidChange_ParamsDataView(
      internal::AutofillDriver_TextFieldDidChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormDataView(
      ::autofill::mojom::FormDataDataView* output);

  template <typename UserType>
  bool ReadForm(UserType* output) {
    auto pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  inline void GetFieldDataView(
      ::autofill::mojom::FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadField(UserType* output) {
    auto pointer = data_->field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_TextFieldDidChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_TextFieldDidChange_ParamsDataView::GetFormDataView(
    ::autofill::mojom::FormDataDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::FormDataDataView(pointer, context_);
}
inline void AutofillDriver_TextFieldDidChange_ParamsDataView::GetFieldDataView(
    ::autofill::mojom::FormFieldDataDataView* output) {
  auto pointer = data_->field.Get();
  *output = ::autofill::mojom::FormFieldDataDataView(pointer, context_);
}
inline void AutofillDriver_TextFieldDidChange_ParamsDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}


class AutofillDriver_QueryFormFieldAutofill_ParamsDataView {
 public:
  AutofillDriver_QueryFormFieldAutofill_ParamsDataView() {}

  AutofillDriver_QueryFormFieldAutofill_ParamsDataView(
      internal::AutofillDriver_QueryFormFieldAutofill_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
  inline void GetFormDataView(
      ::autofill::mojom::FormDataDataView* output);

  template <typename UserType>
  bool ReadForm(UserType* output) {
    auto pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  inline void GetFieldDataView(
      ::autofill::mojom::FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadField(UserType* output) {
    auto pointer = data_->field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
  inline void GetBoundingBoxDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadBoundingBox(UserType* output) {
    auto pointer = data_->bounding_box.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_QueryFormFieldAutofill_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_QueryFormFieldAutofill_ParamsDataView::GetFormDataView(
    ::autofill::mojom::FormDataDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::FormDataDataView(pointer, context_);
}
inline void AutofillDriver_QueryFormFieldAutofill_ParamsDataView::GetFieldDataView(
    ::autofill::mojom::FormFieldDataDataView* output) {
  auto pointer = data_->field.Get();
  *output = ::autofill::mojom::FormFieldDataDataView(pointer, context_);
}
inline void AutofillDriver_QueryFormFieldAutofill_ParamsDataView::GetBoundingBoxDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->bounding_box.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}


class AutofillDriver_HidePopup_ParamsDataView {
 public:
  AutofillDriver_HidePopup_ParamsDataView() {}

  AutofillDriver_HidePopup_ParamsDataView(
      internal::AutofillDriver_HidePopup_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_HidePopup_Params_Data* data_ = nullptr;
};




class AutofillDriver_PingAck_ParamsDataView {
 public:
  AutofillDriver_PingAck_ParamsDataView() {}

  AutofillDriver_PingAck_ParamsDataView(
      internal::AutofillDriver_PingAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_PingAck_Params_Data* data_ = nullptr;
};




class AutofillDriver_FocusNoLongerOnForm_ParamsDataView {
 public:
  AutofillDriver_FocusNoLongerOnForm_ParamsDataView() {}

  AutofillDriver_FocusNoLongerOnForm_ParamsDataView(
      internal::AutofillDriver_FocusNoLongerOnForm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_FocusNoLongerOnForm_Params_Data* data_ = nullptr;
};




class AutofillDriver_DidFillAutofillFormData_ParamsDataView {
 public:
  AutofillDriver_DidFillAutofillFormData_ParamsDataView() {}

  AutofillDriver_DidFillAutofillFormData_ParamsDataView(
      internal::AutofillDriver_DidFillAutofillFormData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormDataView(
      ::autofill::mojom::FormDataDataView* output);

  template <typename UserType>
  bool ReadForm(UserType* output) {
    auto pointer = data_->form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_DidFillAutofillFormData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_DidFillAutofillFormData_ParamsDataView::GetFormDataView(
    ::autofill::mojom::FormDataDataView* output) {
  auto pointer = data_->form.Get();
  *output = ::autofill::mojom::FormDataDataView(pointer, context_);
}
inline void AutofillDriver_DidFillAutofillFormData_ParamsDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}


class AutofillDriver_DidPreviewAutofillFormData_ParamsDataView {
 public:
  AutofillDriver_DidPreviewAutofillFormData_ParamsDataView() {}

  AutofillDriver_DidPreviewAutofillFormData_ParamsDataView(
      internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data* data_ = nullptr;
};




class AutofillDriver_DidEndTextFieldEditing_ParamsDataView {
 public:
  AutofillDriver_DidEndTextFieldEditing_ParamsDataView() {}

  AutofillDriver_DidEndTextFieldEditing_ParamsDataView(
      internal::AutofillDriver_DidEndTextFieldEditing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AutofillDriver_DidEndTextFieldEditing_Params_Data* data_ = nullptr;
};




class AutofillDriver_SetDataList_ParamsDataView {
 public:
  AutofillDriver_SetDataList_ParamsDataView() {}

  AutofillDriver_SetDataList_ParamsDataView(
      internal::AutofillDriver_SetDataList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      mojo::ArrayDataView<::mojo::common::mojom::String16DataView>* output);

  template <typename UserType>
  bool ReadValues(UserType* output) {
    auto pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
        pointer, output, context_);
  }
  inline void GetLabelsDataView(
      mojo::ArrayDataView<::mojo::common::mojom::String16DataView>* output);

  template <typename UserType>
  bool ReadLabels(UserType* output) {
    auto pointer = data_->labels.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
        pointer, output, context_);
  }
 private:
  internal::AutofillDriver_SetDataList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AutofillDriver_SetDataList_ParamsDataView::GetValuesDataView(
    mojo::ArrayDataView<::mojo::common::mojom::String16DataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<::mojo::common::mojom::String16DataView>(pointer, context_);
}
inline void AutofillDriver_SetDataList_ParamsDataView::GetLabelsDataView(
    mojo::ArrayDataView<::mojo::common::mojom::String16DataView>* output) {
  auto pointer = data_->labels.Get();
  *output = mojo::ArrayDataView<::mojo::common::mojom::String16DataView>(pointer, context_);
}


class PasswordManagerDriver_PasswordAutofillAgentConstructed_ParamsDataView {
 public:
  PasswordManagerDriver_PasswordAutofillAgentConstructed_ParamsDataView() {}

  PasswordManagerDriver_PasswordAutofillAgentConstructed_ParamsDataView(
      internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data* data_ = nullptr;
};




class PasswordManagerDriver_PasswordFormsParsed_ParamsDataView {
 public:
  PasswordManagerDriver_PasswordFormsParsed_ParamsDataView() {}

  PasswordManagerDriver_PasswordFormsParsed_ParamsDataView(
      internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormsDataView(
      mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>* output);

  template <typename UserType>
  bool ReadForms(UserType* output) {
    auto pointer = data_->forms.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_PasswordFormsParsed_ParamsDataView::GetFormsDataView(
    mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>* output) {
  auto pointer = data_->forms.Get();
  *output = mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>(pointer, context_);
}


class PasswordManagerDriver_PasswordFormsRendered_ParamsDataView {
 public:
  PasswordManagerDriver_PasswordFormsRendered_ParamsDataView() {}

  PasswordManagerDriver_PasswordFormsRendered_ParamsDataView(
      internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVisibleFormsDataView(
      mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>* output);

  template <typename UserType>
  bool ReadVisibleForms(UserType* output) {
    auto pointer = data_->visible_forms.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
        pointer, output, context_);
  }
  bool did_stop_loading() const {
    return data_->did_stop_loading;
  }
 private:
  internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_PasswordFormsRendered_ParamsDataView::GetVisibleFormsDataView(
    mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>* output) {
  auto pointer = data_->visible_forms.Get();
  *output = mojo::ArrayDataView<::autofill::mojom::PasswordFormDataView>(pointer, context_);
}


class PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView {
 public:
  PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView() {}

  PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView(
      internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  bool ReadPasswordForm(UserType* output) {
    auto pointer = data_->password_form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView::GetPasswordFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->password_form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}


class PasswordManagerDriver_InPageNavigation_ParamsDataView {
 public:
  PasswordManagerDriver_InPageNavigation_ParamsDataView() {}

  PasswordManagerDriver_InPageNavigation_ParamsDataView(
      internal::PasswordManagerDriver_InPageNavigation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  bool ReadPasswordForm(UserType* output) {
    auto pointer = data_->password_form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_InPageNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_InPageNavigation_ParamsDataView::GetPasswordFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->password_form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}


class PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView {
 public:
  PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView() {}

  PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView(
      internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLogDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLog(UserType* output) {
    auto pointer = data_->log.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView::GetLogDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->log.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView {
 public:
  PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView() {}

  PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView(
      internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t key() const {
    return data_->key;
  }
  template <typename UserType>
  bool ReadTextDirection(UserType* output) const {
    auto data_value = data_->text_direction;
    return mojo::internal::Deserialize<::autofill::mojom::TextDirection>(
        data_value, output);
  }

  ::autofill::mojom::TextDirection text_direction() const {
    return static_cast<::autofill::mojom::TextDirection>(data_->text_direction);
  }
  inline void GetTypedUsernameDataView(
      ::mojo::common::mojom::String16DataView* output);

  template <typename UserType>
  bool ReadTypedUsername(UserType* output) {
    auto pointer = data_->typed_username.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::String16Ptr>(
        pointer, output, context_);
  }
  int32_t options() const {
    return data_->options;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadBounds(UserType* output) {
    auto pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView::GetTypedUsernameDataView(
    ::mojo::common::mojom::String16DataView* output) {
  auto pointer = data_->typed_username.Get();
  *output = ::mojo::common::mojom::String16DataView(pointer, context_);
}
inline void PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView::GetBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}


class PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView {
 public:
  PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView() {}

  PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView(
      internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  bool ReadPasswordForm(UserType* output) {
    auto pointer = data_->password_form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView::GetPasswordFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->password_form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}


class PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView {
 public:
  PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView() {}

  PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView(
      internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  bool ReadPasswordForm(UserType* output) {
    auto pointer = data_->password_form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView::GetPasswordFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->password_form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}


class PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView {
 public:
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView() {}

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView(
      internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordFormDataView(
      ::autofill::mojom::PasswordFormDataView* output);

  template <typename UserType>
  bool ReadPasswordForm(UserType* output) {
    auto pointer = data_->password_form.Get();
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormPtr>(
        pointer, output, context_);
  }
  inline void GetGenerationFieldDataView(
      ::mojo::common::mojom::String16DataView* output);

  template <typename UserType>
  bool ReadGenerationField(UserType* output) {
    auto pointer = data_->generation_field.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::String16Ptr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView::GetPasswordFormDataView(
    ::autofill::mojom::PasswordFormDataView* output) {
  auto pointer = data_->password_form.Get();
  *output = ::autofill::mojom::PasswordFormDataView(pointer, context_);
}
inline void PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView::GetGenerationFieldDataView(
    ::mojo::common::mojom::String16DataView* output) {
  auto pointer = data_->generation_field.Get();
  *output = ::mojo::common::mojom::String16DataView(pointer, context_);
}


}  // namespace
const char AutofillDriver::Name_[] = "autofill::mojom::AutofillDriver";
const uint32_t AutofillDriver::Version_;

AutofillDriverProxy::AutofillDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AutofillDriverProxy::FirstUserGestureObserved(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_FirstUserGestureObserved_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_FirstUserGestureObserved_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_FirstUserGestureObserved_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::FormsSeen(
    const std::vector<autofill::FormData>& in_forms, base::TimeTicks in_timestamp) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_FormsSeen_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
      in_forms, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_FormsSeen_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_FormsSeen_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->forms)::BaseType* forms_ptr;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
      in_forms, builder.buffer(), &forms_ptr, &forms_validate_params,
      &serialization_context_);
  params->forms.Set(forms_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in AutofillDriver.FormsSeen request");
  typename decltype(params->timestamp)::BaseType* timestamp_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, builder.buffer(), &timestamp_ptr, &serialization_context_);
  params->timestamp.Set(timestamp_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.FormsSeen request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::WillSubmitForm(
    const autofill::FormData& in_form, base::TimeTicks in_timestamp) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_WillSubmitForm_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
      in_form, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_WillSubmitForm_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_WillSubmitForm_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->form)::BaseType* form_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
      in_form, builder.buffer(), &form_ptr, &serialization_context_);
  params->form.Set(form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.WillSubmitForm request");
  typename decltype(params->timestamp)::BaseType* timestamp_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, builder.buffer(), &timestamp_ptr, &serialization_context_);
  params->timestamp.Set(timestamp_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.WillSubmitForm request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::FormSubmitted(
    const autofill::FormData& in_form) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_FormSubmitted_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
      in_form, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_FormSubmitted_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_FormSubmitted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->form)::BaseType* form_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
      in_form, builder.buffer(), &form_ptr, &serialization_context_);
  params->form.Set(form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.FormSubmitted request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::TextFieldDidChange(
    const autofill::FormData& in_form, const autofill::FormFieldData& in_field, base::TimeTicks in_timestamp) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_TextFieldDidChange_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
      in_form, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
      in_field, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_TextFieldDidChange_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_TextFieldDidChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->form)::BaseType* form_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
      in_form, builder.buffer(), &form_ptr, &serialization_context_);
  params->form.Set(form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.TextFieldDidChange request");
  typename decltype(params->field)::BaseType* field_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
      in_field, builder.buffer(), &field_ptr, &serialization_context_);
  params->field.Set(field_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.TextFieldDidChange request");
  typename decltype(params->timestamp)::BaseType* timestamp_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, builder.buffer(), &timestamp_ptr, &serialization_context_);
  params->timestamp.Set(timestamp_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.TextFieldDidChange request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::QueryFormFieldAutofill(
    int32_t in_id, const autofill::FormData& in_form, const autofill::FormFieldData& in_field, const gfx::RectF& in_bounding_box) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_QueryFormFieldAutofill_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
      in_form, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
      in_field, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
      in_bounding_box, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_QueryFormFieldAutofill_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_QueryFormFieldAutofill_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->id = in_id;
  typename decltype(params->form)::BaseType* form_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
      in_form, builder.buffer(), &form_ptr, &serialization_context_);
  params->form.Set(form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.QueryFormFieldAutofill request");
  typename decltype(params->field)::BaseType* field_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
      in_field, builder.buffer(), &field_ptr, &serialization_context_);
  params->field.Set(field_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null field in AutofillDriver.QueryFormFieldAutofill request");
  typename decltype(params->bounding_box)::BaseType* bounding_box_ptr;
  mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
      in_bounding_box, builder.buffer(), &bounding_box_ptr, &serialization_context_);
  params->bounding_box.Set(bounding_box_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounding_box.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounding_box in AutofillDriver.QueryFormFieldAutofill request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::HidePopup(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_HidePopup_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_HidePopup_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_HidePopup_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::PingAck(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_PingAck_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_PingAck_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_PingAck_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::FocusNoLongerOnForm(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_FocusNoLongerOnForm_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_FocusNoLongerOnForm_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_FocusNoLongerOnForm_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::DidFillAutofillFormData(
    const autofill::FormData& in_form, base::TimeTicks in_timestamp) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_DidFillAutofillFormData_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
      in_form, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_DidFillAutofillFormData_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_DidFillAutofillFormData_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->form)::BaseType* form_ptr;
  mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
      in_form, builder.buffer(), &form_ptr, &serialization_context_);
  params->form.Set(form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in AutofillDriver.DidFillAutofillFormData request");
  typename decltype(params->timestamp)::BaseType* timestamp_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
      in_timestamp, builder.buffer(), &timestamp_ptr, &serialization_context_);
  params->timestamp.Set(timestamp_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in AutofillDriver.DidFillAutofillFormData request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::DidPreviewAutofillFormData(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_DidPreviewAutofillFormData_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::DidEndTextFieldEditing(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_DidEndTextFieldEditing_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_DidEndTextFieldEditing_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_DidEndTextFieldEditing_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AutofillDriverProxy::SetDataList(
    const std::vector<base::string16>& in_values, const std::vector<base::string16>& in_labels) {
  size_t size = sizeof(::autofill::mojom::internal::AutofillDriver_SetDataList_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
      in_values, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
      in_labels, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAutofillDriver_SetDataList_Name, size);

  auto params =
      ::autofill::mojom::internal::AutofillDriver_SetDataList_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->values)::BaseType* values_ptr;
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
      in_values, builder.buffer(), &values_ptr, &values_validate_params,
      &serialization_context_);
  params->values.Set(values_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in AutofillDriver.SetDataList request");
  typename decltype(params->labels)::BaseType* labels_ptr;
  const mojo::internal::ContainerValidateParams labels_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojo::common::mojom::String16Ptr>>(
      in_labels, builder.buffer(), &labels_ptr, &labels_validate_params,
      &serialization_context_);
  params->labels.Set(labels_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->labels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null labels in AutofillDriver.SetDataList request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

AutofillDriverStub::AutofillDriverStub()
    : sink_(nullptr),
      control_message_handler_(AutofillDriver::Version_) {
}

AutofillDriverStub::~AutofillDriverStub() {}

bool AutofillDriverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAutofillDriver_FirstUserGestureObserved_Name: {
      internal::AutofillDriver_FirstUserGestureObserved_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FirstUserGestureObserved_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_FirstUserGestureObserved_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FirstUserGestureObserved deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::FirstUserGestureObserved");
      mojo::internal::MessageDispatchContext context(message);
      sink_->FirstUserGestureObserved();
      return true;
    }
    case internal::kAutofillDriver_FormsSeen_Name: {
      internal::AutofillDriver_FormsSeen_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FormsSeen_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<autofill::FormData> p_forms{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_FormsSeen_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FormsSeen deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::FormsSeen");
      mojo::internal::MessageDispatchContext context(message);
      sink_->FormsSeen(
std::move(p_forms), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_WillSubmitForm_Name: {
      internal::AutofillDriver_WillSubmitForm_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_WillSubmitForm_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::FormData p_form{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_WillSubmitForm_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::WillSubmitForm deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::WillSubmitForm");
      mojo::internal::MessageDispatchContext context(message);
      sink_->WillSubmitForm(
std::move(p_form), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
      internal::AutofillDriver_FormSubmitted_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FormSubmitted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::FormData p_form{};
      AutofillDriver_FormSubmitted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FormSubmitted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::FormSubmitted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->FormSubmitted(
std::move(p_form));
      return true;
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
      internal::AutofillDriver_TextFieldDidChange_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_TextFieldDidChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_TextFieldDidChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::TextFieldDidChange deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::TextFieldDidChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->TextFieldDidChange(
std::move(p_form), 
std::move(p_field), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
      internal::AutofillDriver_QueryFormFieldAutofill_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_QueryFormFieldAutofill_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_id{};
      autofill::FormData p_form{};
      autofill::FormFieldData p_field{};
      gfx::RectF p_bounding_box{};
      AutofillDriver_QueryFormFieldAutofill_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadField(&p_field))
        success = false;
      if (!input_data_view.ReadBoundingBox(&p_bounding_box))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::QueryFormFieldAutofill deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::QueryFormFieldAutofill");
      mojo::internal::MessageDispatchContext context(message);
      sink_->QueryFormFieldAutofill(
std::move(p_id), 
std::move(p_form), 
std::move(p_field), 
std::move(p_bounding_box));
      return true;
    }
    case internal::kAutofillDriver_HidePopup_Name: {
      internal::AutofillDriver_HidePopup_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_HidePopup_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_HidePopup_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::HidePopup deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::HidePopup");
      mojo::internal::MessageDispatchContext context(message);
      sink_->HidePopup();
      return true;
    }
    case internal::kAutofillDriver_PingAck_Name: {
      internal::AutofillDriver_PingAck_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_PingAck_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_PingAck_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::PingAck deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::PingAck");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PingAck();
      return true;
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
      internal::AutofillDriver_FocusNoLongerOnForm_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_FocusNoLongerOnForm_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_FocusNoLongerOnForm_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::FocusNoLongerOnForm deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::FocusNoLongerOnForm");
      mojo::internal::MessageDispatchContext context(message);
      sink_->FocusNoLongerOnForm();
      return true;
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
      internal::AutofillDriver_DidFillAutofillFormData_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidFillAutofillFormData_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::FormData p_form{};
      base::TimeTicks p_timestamp{};
      AutofillDriver_DidFillAutofillFormData_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidFillAutofillFormData deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::DidFillAutofillFormData");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DidFillAutofillFormData(
std::move(p_form), 
std::move(p_timestamp));
      return true;
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
      internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_DidPreviewAutofillFormData_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidPreviewAutofillFormData deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::DidPreviewAutofillFormData");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DidPreviewAutofillFormData();
      return true;
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
      internal::AutofillDriver_DidEndTextFieldEditing_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_DidEndTextFieldEditing_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AutofillDriver_DidEndTextFieldEditing_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::DidEndTextFieldEditing deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::DidEndTextFieldEditing");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DidEndTextFieldEditing();
      return true;
    }
    case internal::kAutofillDriver_SetDataList_Name: {
      internal::AutofillDriver_SetDataList_Params_Data* params =
          reinterpret_cast<internal::AutofillDriver_SetDataList_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<base::string16> p_values{};
      std::vector<base::string16> p_labels{};
      AutofillDriver_SetDataList_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!input_data_view.ReadLabels(&p_labels))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutofillDriver::SetDataList deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AutofillDriver::SetDataList");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetDataList(
std::move(p_values), 
std::move(p_labels));
      return true;
    }
  }
  return false;
}

bool AutofillDriverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAutofillDriver_FirstUserGestureObserved_Name: {
      break;
    }
    case internal::kAutofillDriver_FormsSeen_Name: {
      break;
    }
    case internal::kAutofillDriver_WillSubmitForm_Name: {
      break;
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
      break;
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
      break;
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
      break;
    }
    case internal::kAutofillDriver_HidePopup_Name: {
      break;
    }
    case internal::kAutofillDriver_PingAck_Name: {
      break;
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
      break;
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
      break;
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
      break;
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
      break;
    }
    case internal::kAutofillDriver_SetDataList_Name: {
      break;
    }
  }
  return false;
}

AutofillDriverRequestValidator::AutofillDriverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AutofillDriverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AutofillDriver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAutofillDriver_FirstUserGestureObserved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FirstUserGestureObserved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_FormsSeen_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FormsSeen_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_WillSubmitForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_WillSubmitForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_FormSubmitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FormSubmitted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_TextFieldDidChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_TextFieldDidChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_QueryFormFieldAutofill_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_QueryFormFieldAutofill_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_HidePopup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_HidePopup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_PingAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_PingAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_FocusNoLongerOnForm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_FocusNoLongerOnForm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_DidFillAutofillFormData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidFillAutofillFormData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_DidPreviewAutofillFormData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidPreviewAutofillFormData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_DidEndTextFieldEditing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_DidEndTextFieldEditing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAutofillDriver_SetDataList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutofillDriver_SetDataList_Params_Data>(
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

const char PasswordManagerDriver::Name_[] = "autofill::mojom::PasswordManagerDriver";
const uint32_t PasswordManagerDriver::Version_;

PasswordManagerDriverProxy::PasswordManagerDriverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PasswordManagerDriverProxy::PasswordAutofillAgentConstructed(
    ) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::PasswordFormsParsed(
    const std::vector<autofill::PasswordForm>& in_forms) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
      in_forms, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PasswordFormsParsed_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->forms)::BaseType* forms_ptr;
  const mojo::internal::ContainerValidateParams forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
      in_forms, builder.buffer(), &forms_ptr, &forms_validate_params,
      &serialization_context_);
  params->forms.Set(forms_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null forms in PasswordManagerDriver.PasswordFormsParsed request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::PasswordFormsRendered(
    const std::vector<autofill::PasswordForm>& in_visible_forms, bool in_did_stop_loading) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
      in_visible_forms, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PasswordFormsRendered_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->visible_forms)::BaseType* visible_forms_ptr;
  const mojo::internal::ContainerValidateParams visible_forms_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::autofill::mojom::PasswordFormPtr>>(
      in_visible_forms, builder.buffer(), &visible_forms_ptr, &visible_forms_validate_params,
      &serialization_context_);
  params->visible_forms.Set(visible_forms_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->visible_forms.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null visible_forms in PasswordManagerDriver.PasswordFormsRendered request");
  params->did_stop_loading = in_did_stop_loading;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::PasswordFormSubmitted(
    const autofill::PasswordForm& in_password_form) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PasswordFormSubmitted_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->password_form)::BaseType* password_form_ptr;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, builder.buffer(), &password_form_ptr, &serialization_context_);
  params->password_form.Set(password_form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PasswordFormSubmitted request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::InPageNavigation(
    const autofill::PasswordForm& in_password_form) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_InPageNavigation_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_InPageNavigation_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_InPageNavigation_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->password_form)::BaseType* password_form_ptr;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, builder.buffer(), &password_form_ptr, &serialization_context_);
  params->password_form.Set(password_form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.InPageNavigation request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::RecordSavePasswordProgress(
    const std::string& in_log) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_log, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->log)::BaseType* log_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_log, builder.buffer(), &log_ptr, &serialization_context_);
  params->log.Set(log_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->log.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null log in PasswordManagerDriver.RecordSavePasswordProgress request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::ShowPasswordSuggestions(
    int32_t in_key, base::i18n::TextDirection in_text_direction, const base::string16& in_typed_username, int32_t in_options, const gfx::RectF& in_bounds) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::String16Ptr>(
      in_typed_username, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
      in_bounds, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->key = in_key;
  mojo::internal::Serialize<::autofill::mojom::TextDirection>(
      in_text_direction, &params->text_direction);
  typename decltype(params->typed_username)::BaseType* typed_username_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::String16Ptr>(
      in_typed_username, builder.buffer(), &typed_username_ptr, &serialization_context_);
  params->typed_username.Set(typed_username_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->typed_username.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null typed_username in PasswordManagerDriver.ShowPasswordSuggestions request");
  params->options = in_options;
  typename decltype(params->bounds)::BaseType* bounds_ptr;
  mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
      in_bounds, builder.buffer(), &bounds_ptr, &serialization_context_);
  params->bounds.Set(bounds_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in PasswordManagerDriver.ShowPasswordSuggestions request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::PresaveGeneratedPassword(
    const autofill::PasswordForm& in_password_form) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->password_form)::BaseType* password_form_ptr;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, builder.buffer(), &password_form_ptr, &serialization_context_);
  params->password_form.Set(password_form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PresaveGeneratedPassword request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::PasswordNoLongerGenerated(
    const autofill::PasswordForm& in_password_form) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->password_form)::BaseType* password_form_ptr;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, builder.buffer(), &password_form_ptr, &serialization_context_);
  params->password_form.Set(password_form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.PasswordNoLongerGenerated request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PasswordManagerDriverProxy::SaveGenerationFieldDetectedByClassifier(
    const autofill::PasswordForm& in_password_form, const base::string16& in_generation_field) {
  size_t size = sizeof(::autofill::mojom::internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data);
  size += mojo::internal::PrepareToSerialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::String16Ptr>(
      in_generation_field, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name, size);

  auto params =
      ::autofill::mojom::internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->password_form)::BaseType* password_form_ptr;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormPtr>(
      in_password_form, builder.buffer(), &password_form_ptr, &serialization_context_);
  params->password_form.Set(password_form_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->password_form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null password_form in PasswordManagerDriver.SaveGenerationFieldDetectedByClassifier request");
  typename decltype(params->generation_field)::BaseType* generation_field_ptr;
  mojo::internal::Serialize<::mojo::common::mojom::String16Ptr>(
      in_generation_field, builder.buffer(), &generation_field_ptr, &serialization_context_);
  params->generation_field.Set(generation_field_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->generation_field.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null generation_field in PasswordManagerDriver.SaveGenerationFieldDetectedByClassifier request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PasswordManagerDriverStub::PasswordManagerDriverStub()
    : sink_(nullptr),
      control_message_handler_(PasswordManagerDriver::Version_) {
}

PasswordManagerDriverStub::~PasswordManagerDriverStub() {}

bool PasswordManagerDriverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name: {
      internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PasswordManagerDriver_PasswordAutofillAgentConstructed_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordAutofillAgentConstructed deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PasswordAutofillAgentConstructed");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PasswordAutofillAgentConstructed();
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
      internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<autofill::PasswordForm> p_forms{};
      PasswordManagerDriver_PasswordFormsParsed_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadForms(&p_forms))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormsParsed deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PasswordFormsParsed");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PasswordFormsParsed(
std::move(p_forms));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
      internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<autofill::PasswordForm> p_visible_forms{};
      bool p_did_stop_loading{};
      PasswordManagerDriver_PasswordFormsRendered_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadVisibleForms(&p_visible_forms))
        success = false;
      p_did_stop_loading = input_data_view.did_stop_loading();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormsRendered deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PasswordFormsRendered");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PasswordFormsRendered(
std::move(p_visible_forms), 
std::move(p_did_stop_loading));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
      internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PasswordFormSubmitted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordFormSubmitted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PasswordFormSubmitted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PasswordFormSubmitted(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_InPageNavigation_Name: {
      internal::PasswordManagerDriver_InPageNavigation_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_InPageNavigation_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_InPageNavigation_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::InPageNavigation deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::InPageNavigation");
      mojo::internal::MessageDispatchContext context(message);
      sink_->InPageNavigation(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
      internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_log{};
      PasswordManagerDriver_RecordSavePasswordProgress_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadLog(&p_log))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::RecordSavePasswordProgress deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::RecordSavePasswordProgress");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RecordSavePasswordProgress(
std::move(p_log));
      return true;
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
      internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_key{};
      base::i18n::TextDirection p_text_direction{};
      base::string16 p_typed_username{};
      int32_t p_options{};
      gfx::RectF p_bounds{};
      PasswordManagerDriver_ShowPasswordSuggestions_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_key = input_data_view.key();
      if (!input_data_view.ReadTextDirection(&p_text_direction))
        success = false;
      if (!input_data_view.ReadTypedUsername(&p_typed_username))
        success = false;
      p_options = input_data_view.options();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::ShowPasswordSuggestions deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::ShowPasswordSuggestions");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ShowPasswordSuggestions(
std::move(p_key), 
std::move(p_text_direction), 
std::move(p_typed_username), 
std::move(p_options), 
std::move(p_bounds));
      return true;
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
      internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PresaveGeneratedPassword_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PresaveGeneratedPassword deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PresaveGeneratedPassword");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PresaveGeneratedPassword(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
      internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::PasswordForm p_password_form{};
      PasswordManagerDriver_PasswordNoLongerGenerated_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::PasswordNoLongerGenerated deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::PasswordNoLongerGenerated");
      mojo::internal::MessageDispatchContext context(message);
      sink_->PasswordNoLongerGenerated(
std::move(p_password_form));
      return true;
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
      internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data* params =
          reinterpret_cast<internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      autofill::PasswordForm p_password_form{};
      base::string16 p_generation_field{};
      PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadPasswordForm(&p_password_form))
        success = false;
      if (!input_data_view.ReadGenerationField(&p_generation_field))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PasswordManagerDriver::SaveGenerationFieldDetectedByClassifier");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SaveGenerationFieldDetectedByClassifier(
std::move(p_password_form), 
std::move(p_generation_field));
      return true;
    }
  }
  return false;
}

bool PasswordManagerDriverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_InPageNavigation_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
      break;
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
      break;
    }
  }
  return false;
}

PasswordManagerDriverRequestValidator::PasswordManagerDriverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PasswordManagerDriverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PasswordManagerDriver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPasswordManagerDriver_PasswordAutofillAgentConstructed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordAutofillAgentConstructed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_PasswordFormsParsed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormsParsed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_PasswordFormsRendered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormsRendered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_PasswordFormSubmitted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordFormSubmitted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_InPageNavigation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_InPageNavigation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_RecordSavePasswordProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_RecordSavePasswordProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_ShowPasswordSuggestions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_ShowPasswordSuggestions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_PresaveGeneratedPassword_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PresaveGeneratedPassword_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_PasswordNoLongerGenerated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_PasswordNoLongerGenerated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params_Data>(
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
}  // namespace autofill

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif