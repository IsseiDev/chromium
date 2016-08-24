// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_H_
#define COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_H_

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
#include "components/autofill/content/public/interfaces/autofill_types.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "url/mojo/origin.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "components/autofill/core/common/form_field_data_predictions.h"
#include "components/autofill/core/common/form_data_predictions.h"
#include "components/autofill/core/common/password_form_fill_data.h"
#include "components/autofill/core/common/form_data.h"
#include "components/autofill/core/common/password_form_field_prediction_map.h"
#include "base/files/file_path.h"
#include "base/values.h"
#include "url/origin.h"
#include "components/autofill/core/common/form_field_data.h"
#include "url/gurl.h"
#include "base/version.h"
#include "base/time/time.h"
#include "components/autofill/core/common/password_form.h"
#include "base/strings/string16.h"
#include "components/autofill/core/common/password_form_generation_data.h"


namespace autofill {
namespace mojom {
class FormFieldData;
class FormFieldDataDataView;
using FormFieldDataPtr = mojo::StructPtr<FormFieldData>;

class FormData;
class FormDataDataView;
using FormDataPtr = mojo::StructPtr<FormData>;

class FormFieldDataPredictions;
class FormFieldDataPredictionsDataView;
using FormFieldDataPredictionsPtr = mojo::StructPtr<FormFieldDataPredictions>;

class FormDataPredictions;
class FormDataPredictionsDataView;
using FormDataPredictionsPtr = mojo::StructPtr<FormDataPredictions>;

class PasswordAndRealm;
class PasswordAndRealmDataView;
using PasswordAndRealmPtr = mojo::InlinedStructPtr<PasswordAndRealm>;

class UsernamesCollectionKey;
class UsernamesCollectionKeyDataView;
using UsernamesCollectionKeyPtr = mojo::InlinedStructPtr<UsernamesCollectionKey>;

class PasswordFormFillData;
class PasswordFormFillDataDataView;
using PasswordFormFillDataPtr = mojo::StructPtr<PasswordFormFillData>;

class PasswordFormGenerationData;
class PasswordFormGenerationDataDataView;
using PasswordFormGenerationDataPtr = mojo::StructPtr<PasswordFormGenerationData>;

class PasswordForm;
class PasswordFormDataView;
using PasswordFormPtr = mojo::StructPtr<PasswordForm>;

class PasswordFormFieldPredictionMap;
class PasswordFormFieldPredictionMapDataView;
using PasswordFormFieldPredictionMapPtr = mojo::StructPtr<PasswordFormFieldPredictionMap>;

class FormsPredictionsMap;
class FormsPredictionsMapDataView;
using FormsPredictionsMapPtr = mojo::StructPtr<FormsPredictionsMap>;







class  PasswordAndRealm {
 public:
  using DataView = PasswordAndRealmDataView;
  using Data_ = internal::PasswordAndRealm_Data;

  static PasswordAndRealmPtr New();

  template <typename U>
  static PasswordAndRealmPtr From(const U& u) {
    return mojo::TypeConverter<PasswordAndRealmPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordAndRealm>::Convert(*this);
  }

  PasswordAndRealm();
  ~PasswordAndRealm();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordAndRealmPtr>
  PasswordAndRealmPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordAndRealm>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PasswordAndRealmPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PasswordAndRealmPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string password;
  std::string realm;
};

class PasswordAndRealmDataView {
 public:
  PasswordAndRealmDataView() {}

  PasswordAndRealmDataView(
      internal::PasswordAndRealm_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPasswordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPassword(UserType* output) {
    auto pointer = data_->password.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadRealm(UserType* output) {
    auto pointer = data_->realm.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PasswordAndRealm_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::PasswordAndRealmDataView> {
  using MojomType = ::autofill::mojom::PasswordAndRealmPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  UsernamesCollectionKey {
 public:
  using DataView = UsernamesCollectionKeyDataView;
  using Data_ = internal::UsernamesCollectionKey_Data;

  static UsernamesCollectionKeyPtr New();

  template <typename U>
  static UsernamesCollectionKeyPtr From(const U& u) {
    return mojo::TypeConverter<UsernamesCollectionKeyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsernamesCollectionKey>::Convert(*this);
  }

  UsernamesCollectionKey();
  ~UsernamesCollectionKey();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsernamesCollectionKeyPtr>
  UsernamesCollectionKeyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsernamesCollectionKey>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        UsernamesCollectionKeyPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        UsernamesCollectionKeyPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string username;
  std::string password;
  std::string realm;
};

class UsernamesCollectionKeyDataView {
 public:
  UsernamesCollectionKeyDataView() {}

  UsernamesCollectionKeyDataView(
      internal::UsernamesCollectionKey_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUsernameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUsername(UserType* output) {
    auto pointer = data_->username.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPasswordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPassword(UserType* output) {
    auto pointer = data_->password.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadRealm(UserType* output) {
    auto pointer = data_->realm.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::UsernamesCollectionKey_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::UsernamesCollectionKeyDataView> {
  using MojomType = ::autofill::mojom::UsernamesCollectionKeyPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {










class  FormFieldData {
 public:
  using DataView = FormFieldDataDataView;
  using Data_ = internal::FormFieldData_Data;

  static FormFieldDataPtr New();

  template <typename U>
  static FormFieldDataPtr From(const U& u) {
    return mojo::TypeConverter<FormFieldDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormFieldData>::Convert(*this);
  }

  FormFieldData();
  ~FormFieldData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormFieldDataPtr>
  FormFieldDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormFieldData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FormFieldDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FormFieldDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string label;
  std::string name;
  std::string value;
  std::string form_control_type;
  std::string autocomplete_attribute;
  std::string placeholder;
  std::string css_classes;
  uint32_t properties_mask;
  uint64_t max_length;
  bool is_autofilled;
  autofill::FormFieldData::CheckStatus check_status;
  bool is_focusable;
  bool should_autocomplete;
  autofill::FormFieldData::RoleAttribute role;
  base::i18n::TextDirection text_direction;
  std::vector<std::string> option_values;
  std::vector<std::string> option_contents;
};

class FormFieldDataDataView {
 public:
  FormFieldDataDataView() {}

  FormFieldDataDataView(
      internal::FormFieldData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLabel(UserType* output) {
    auto pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetFormControlTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadFormControlType(UserType* output) {
    auto pointer = data_->form_control_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAutocompleteAttributeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAutocompleteAttribute(UserType* output) {
    auto pointer = data_->autocomplete_attribute.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPlaceholderDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPlaceholder(UserType* output) {
    auto pointer = data_->placeholder.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCssClassesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCssClasses(UserType* output) {
    auto pointer = data_->css_classes.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint32_t properties_mask() const {
    return data_->properties_mask;
  }
  uint64_t max_length() const {
    return data_->max_length;
  }
  bool is_autofilled() const {
    return data_->is_autofilled;
  }
  template <typename UserType>
  bool ReadCheckStatus(UserType* output) const {
    auto data_value = data_->check_status;
    return mojo::internal::Deserialize<::autofill::mojom::CheckStatus>(
        data_value, output);
  }

  ::autofill::mojom::CheckStatus check_status() const {
    return static_cast<::autofill::mojom::CheckStatus>(data_->check_status);
  }
  bool is_focusable() const {
    return data_->is_focusable;
  }
  bool should_autocomplete() const {
    return data_->should_autocomplete;
  }
  template <typename UserType>
  bool ReadRole(UserType* output) const {
    auto data_value = data_->role;
    return mojo::internal::Deserialize<::autofill::mojom::RoleAttribute>(
        data_value, output);
  }

  ::autofill::mojom::RoleAttribute role() const {
    return static_cast<::autofill::mojom::RoleAttribute>(data_->role);
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
  inline void GetOptionValuesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadOptionValues(UserType* output) {
    auto pointer = data_->option_values.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetOptionContentsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadOptionContents(UserType* output) {
    auto pointer = data_->option_contents.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
 private:
  internal::FormFieldData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::FormFieldDataDataView> {
  using MojomType = ::autofill::mojom::FormFieldDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  FormData {
 public:
  using DataView = FormDataDataView;
  using Data_ = internal::FormData_Data;

  static FormDataPtr New();

  template <typename U>
  static FormDataPtr From(const U& u) {
    return mojo::TypeConverter<FormDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormData>::Convert(*this);
  }

  FormData();
  ~FormData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormDataPtr>
  FormDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FormDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FormDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  GURL origin;
  GURL action;
  bool is_form_tag;
  bool is_formless_checkout;
  std::vector<autofill::FormFieldData> fields;
};

class FormDataDataView {
 public:
  FormDataDataView() {}

  FormDataDataView(
      internal::FormData_Data* data,
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
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadAction(UserType* output) {
    auto pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  bool is_form_tag() const {
    return data_->is_form_tag;
  }
  bool is_formless_checkout() const {
    return data_->is_formless_checkout;
  }
  inline void GetFieldsDataView(
      mojo::ArrayDataView<FormFieldDataDataView>* output);

  template <typename UserType>
  bool ReadFields(UserType* output) {
    auto pointer = data_->fields.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
        pointer, output, context_);
  }
 private:
  internal::FormData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::FormDataDataView> {
  using MojomType = ::autofill::mojom::FormDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  FormFieldDataPredictions {
 public:
  using DataView = FormFieldDataPredictionsDataView;
  using Data_ = internal::FormFieldDataPredictions_Data;

  static FormFieldDataPredictionsPtr New();

  template <typename U>
  static FormFieldDataPredictionsPtr From(const U& u) {
    return mojo::TypeConverter<FormFieldDataPredictionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormFieldDataPredictions>::Convert(*this);
  }

  FormFieldDataPredictions();
  ~FormFieldDataPredictions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormFieldDataPredictionsPtr>
  FormFieldDataPredictionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormFieldDataPredictions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FormFieldDataPredictionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FormFieldDataPredictionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  autofill::FormFieldData field;
  std::string signature;
  std::string heuristic_type;
  std::string server_type;
  std::string overall_type;
  std::string parseable_name;
};

class FormFieldDataPredictionsDataView {
 public:
  FormFieldDataPredictionsDataView() {}

  FormFieldDataPredictionsDataView(
      internal::FormFieldDataPredictions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadField(UserType* output) {
    auto pointer = data_->field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSignature(UserType* output) {
    auto pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetHeuristicTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHeuristicType(UserType* output) {
    auto pointer = data_->heuristic_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetServerTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadServerType(UserType* output) {
    auto pointer = data_->server_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetOverallTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadOverallType(UserType* output) {
    auto pointer = data_->overall_type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetParseableNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadParseableName(UserType* output) {
    auto pointer = data_->parseable_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::FormFieldDataPredictions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::FormFieldDataPredictionsDataView> {
  using MojomType = ::autofill::mojom::FormFieldDataPredictionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  FormDataPredictions {
 public:
  using DataView = FormDataPredictionsDataView;
  using Data_ = internal::FormDataPredictions_Data;

  static FormDataPredictionsPtr New();

  template <typename U>
  static FormDataPredictionsPtr From(const U& u) {
    return mojo::TypeConverter<FormDataPredictionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormDataPredictions>::Convert(*this);
  }

  FormDataPredictions();
  ~FormDataPredictions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormDataPredictionsPtr>
  FormDataPredictionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormDataPredictions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FormDataPredictionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FormDataPredictionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  autofill::FormData data;
  std::string signature;
  std::vector<autofill::FormFieldDataPredictions> fields;
};

class FormDataPredictionsDataView {
 public:
  FormDataPredictionsDataView() {}

  FormDataPredictionsDataView(
      internal::FormDataPredictions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      FormDataDataView* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSignature(UserType* output) {
    auto pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetFieldsDataView(
      mojo::ArrayDataView<FormFieldDataPredictionsDataView>* output);

  template <typename UserType>
  bool ReadFields(UserType* output) {
    auto pointer = data_->fields.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::FormFieldDataPredictionsPtr>>(
        pointer, output, context_);
  }
 private:
  internal::FormDataPredictions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::FormDataPredictionsDataView> {
  using MojomType = ::autofill::mojom::FormDataPredictionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {





class  PasswordFormFillData {
 public:
  using DataView = PasswordFormFillDataDataView;
  using Data_ = internal::PasswordFormFillData_Data;

  static PasswordFormFillDataPtr New();

  template <typename U>
  static PasswordFormFillDataPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormFillDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormFillData>::Convert(*this);
  }

  PasswordFormFillData();
  ~PasswordFormFillData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormFillDataPtr>
  PasswordFormFillDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormFillData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PasswordFormFillDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PasswordFormFillDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  GURL origin;
  GURL action;
  autofill::FormFieldData username_field;
  autofill::FormFieldData password_field;
  std::string preferred_realm;
  std::unordered_map<std::string, autofill::PasswordAndRealm> additional_logins;
  std::vector<autofill::UsernamesCollectionKey> other_possible_usernames_keys;
  std::vector<std::vector<std::string>> other_possible_usernames_values;
  bool wait_for_username;
  bool is_possible_change_password_form;
};

class PasswordFormFillDataDataView {
 public:
  PasswordFormFillDataDataView() {}

  PasswordFormFillDataDataView(
      internal::PasswordFormFillData_Data* data,
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
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadAction(UserType* output) {
    auto pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetUsernameFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadUsernameField(UserType* output) {
    auto pointer = data_->username_field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
  inline void GetPasswordFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadPasswordField(UserType* output) {
    auto pointer = data_->password_field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
  inline void GetPreferredRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPreferredRealm(UserType* output) {
    auto pointer = data_->preferred_realm.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAdditionalLoginsDataView(
      mojo::MapDataView<mojo::StringDataView, PasswordAndRealmDataView>* output);

  template <typename UserType>
  bool ReadAdditionalLogins(UserType* output) {
    auto pointer = data_->additional_logins.Get();
    return mojo::internal::Deserialize<mojo::Map<mojo::String, ::autofill::mojom::PasswordAndRealmPtr>>(
        pointer, output, context_);
  }
  inline void GetOtherPossibleUsernamesKeysDataView(
      mojo::ArrayDataView<UsernamesCollectionKeyDataView>* output);

  template <typename UserType>
  bool ReadOtherPossibleUsernamesKeys(UserType* output) {
    auto pointer = data_->other_possible_usernames_keys.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::UsernamesCollectionKeyPtr>>(
        pointer, output, context_);
  }
  inline void GetOtherPossibleUsernamesValuesDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  bool ReadOtherPossibleUsernamesValues(UserType* output) {
    auto pointer = data_->other_possible_usernames_values.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::Array<mojo::String>>>(
        pointer, output, context_);
  }
  bool wait_for_username() const {
    return data_->wait_for_username;
  }
  bool is_possible_change_password_form() const {
    return data_->is_possible_change_password_form;
  }
 private:
  internal::PasswordFormFillData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::PasswordFormFillDataDataView> {
  using MojomType = ::autofill::mojom::PasswordFormFillDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  PasswordFormGenerationData {
 public:
  using DataView = PasswordFormGenerationDataDataView;
  using Data_ = internal::PasswordFormGenerationData_Data;

  static PasswordFormGenerationDataPtr New();

  template <typename U>
  static PasswordFormGenerationDataPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormGenerationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormGenerationData>::Convert(*this);
  }

  PasswordFormGenerationData();
  ~PasswordFormGenerationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormGenerationDataPtr>
  PasswordFormGenerationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormGenerationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PasswordFormGenerationDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PasswordFormGenerationDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  GURL action;
  autofill::FormFieldData generation_field;
};

class PasswordFormGenerationDataDataView {
 public:
  PasswordFormGenerationDataDataView() {}

  PasswordFormGenerationDataDataView(
      internal::PasswordFormGenerationData_Data* data,
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
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadAction(UserType* output) {
    auto pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetGenerationFieldDataView(
      FormFieldDataDataView* output);

  template <typename UserType>
  bool ReadGenerationField(UserType* output) {
    auto pointer = data_->generation_field.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormFieldDataPtr>(
        pointer, output, context_);
  }
 private:
  internal::PasswordFormGenerationData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::PasswordFormGenerationDataDataView> {
  using MojomType = ::autofill::mojom::PasswordFormGenerationDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  PasswordForm {
 public:
  using DataView = PasswordFormDataView;
  using Data_ = internal::PasswordForm_Data;

  static PasswordFormPtr New();

  template <typename U>
  static PasswordFormPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordForm>::Convert(*this);
  }

  PasswordForm();
  ~PasswordForm();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormPtr>
  PasswordFormPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordForm>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PasswordFormPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PasswordFormPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  autofill::PasswordForm::Scheme scheme;
  std::string signon_realm;
  GURL origin_with_path;
  GURL action;
  std::string affiliated_web_realm;
  std::string submit_element;
  std::string username_element;
  bool username_marked_by_site;
  std::string username_value;
  std::vector<std::string> other_possible_usernames;
  std::string password_element;
  std::string password_value;
  bool password_value_is_default;
  std::string new_password_element;
  std::string new_password_value;
  bool new_password_value_is_default;
  bool new_password_marked_by_site;
  bool preferred;
  base::Time date_created;
  base::Time date_synced;
  bool blacklisted_by_user;
  autofill::PasswordForm::Type type;
  int32_t times_used;
  autofill::FormData form_data;
  autofill::PasswordForm::GenerationUploadStatus generation_upload_status;
  std::string display_name;
  GURL icon_url;
  url::Origin federation_origin;
  bool skip_zero_click;
  autofill::PasswordForm::Layout layout;
  bool was_parsed_using_autofill_predictions;
  bool is_public_suffix_match;
  bool is_affiliation_based_match;
  bool does_look_like_signup_form;
};

class PasswordFormDataView {
 public:
  PasswordFormDataView() {}

  PasswordFormDataView(
      internal::PasswordForm_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadScheme(UserType* output) const {
    auto data_value = data_->scheme;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormScheme>(
        data_value, output);
  }

  ::autofill::mojom::PasswordFormScheme scheme() const {
    return static_cast<::autofill::mojom::PasswordFormScheme>(data_->scheme);
  }
  inline void GetSignonRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSignonRealm(UserType* output) {
    auto pointer = data_->signon_realm.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetOriginWithPathDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadOriginWithPath(UserType* output) {
    auto pointer = data_->origin_with_path.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadAction(UserType* output) {
    auto pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetAffiliatedWebRealmDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAffiliatedWebRealm(UserType* output) {
    auto pointer = data_->affiliated_web_realm.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSubmitElementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSubmitElement(UserType* output) {
    auto pointer = data_->submit_element.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetUsernameElementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUsernameElement(UserType* output) {
    auto pointer = data_->username_element.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool username_marked_by_site() const {
    return data_->username_marked_by_site;
  }
  inline void GetUsernameValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUsernameValue(UserType* output) {
    auto pointer = data_->username_value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetOtherPossibleUsernamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadOtherPossibleUsernames(UserType* output) {
    auto pointer = data_->other_possible_usernames.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetPasswordElementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPasswordElement(UserType* output) {
    auto pointer = data_->password_element.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPasswordValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPasswordValue(UserType* output) {
    auto pointer = data_->password_value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool password_value_is_default() const {
    return data_->password_value_is_default;
  }
  inline void GetNewPasswordElementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadNewPasswordElement(UserType* output) {
    auto pointer = data_->new_password_element.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNewPasswordValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadNewPasswordValue(UserType* output) {
    auto pointer = data_->new_password_value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool new_password_value_is_default() const {
    return data_->new_password_value_is_default;
  }
  bool new_password_marked_by_site() const {
    return data_->new_password_marked_by_site;
  }
  bool preferred() const {
    return data_->preferred;
  }
  inline void GetDateCreatedDataView(
      ::mojo::common::mojom::TimeDataView* output);

  template <typename UserType>
  bool ReadDateCreated(UserType* output) {
    auto pointer = data_->date_created.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimePtr>(
        pointer, output, context_);
  }
  inline void GetDateSyncedDataView(
      ::mojo::common::mojom::TimeDataView* output);

  template <typename UserType>
  bool ReadDateSynced(UserType* output) {
    auto pointer = data_->date_synced.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimePtr>(
        pointer, output, context_);
  }
  bool blacklisted_by_user() const {
    return data_->blacklisted_by_user;
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormType>(
        data_value, output);
  }

  ::autofill::mojom::PasswordFormType type() const {
    return static_cast<::autofill::mojom::PasswordFormType>(data_->type);
  }
  int32_t times_used() const {
    return data_->times_used;
  }
  inline void GetFormDataDataView(
      FormDataDataView* output);

  template <typename UserType>
  bool ReadFormData(UserType* output) {
    auto pointer = data_->form_data.Get();
    return mojo::internal::Deserialize<::autofill::mojom::FormDataPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadGenerationUploadStatus(UserType* output) const {
    auto data_value = data_->generation_upload_status;
    return mojo::internal::Deserialize<::autofill::mojom::GenerationUploadStatus>(
        data_value, output);
  }

  ::autofill::mojom::GenerationUploadStatus generation_upload_status() const {
    return static_cast<::autofill::mojom::GenerationUploadStatus>(data_->generation_upload_status);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDisplayName(UserType* output) {
    auto pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIconUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadIconUrl(UserType* output) {
    auto pointer = data_->icon_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetFederationOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  bool ReadFederationOrigin(UserType* output) {
    auto pointer = data_->federation_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginPtr>(
        pointer, output, context_);
  }
  bool skip_zero_click() const {
    return data_->skip_zero_click;
  }
  template <typename UserType>
  bool ReadLayout(UserType* output) const {
    auto data_value = data_->layout;
    return mojo::internal::Deserialize<::autofill::mojom::PasswordFormLayout>(
        data_value, output);
  }

  ::autofill::mojom::PasswordFormLayout layout() const {
    return static_cast<::autofill::mojom::PasswordFormLayout>(data_->layout);
  }
  bool was_parsed_using_autofill_predictions() const {
    return data_->was_parsed_using_autofill_predictions;
  }
  bool is_public_suffix_match() const {
    return data_->is_public_suffix_match;
  }
  bool is_affiliation_based_match() const {
    return data_->is_affiliation_based_match;
  }
  bool does_look_like_signup_form() const {
    return data_->does_look_like_signup_form;
  }
 private:
  internal::PasswordForm_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::PasswordFormDataView> {
  using MojomType = ::autofill::mojom::PasswordFormPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  PasswordFormFieldPredictionMap {
 public:
  using DataView = PasswordFormFieldPredictionMapDataView;
  using Data_ = internal::PasswordFormFieldPredictionMap_Data;

  static PasswordFormFieldPredictionMapPtr New();

  template <typename U>
  static PasswordFormFieldPredictionMapPtr From(const U& u) {
    return mojo::TypeConverter<PasswordFormFieldPredictionMapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PasswordFormFieldPredictionMap>::Convert(*this);
  }

  PasswordFormFieldPredictionMap();
  ~PasswordFormFieldPredictionMap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PasswordFormFieldPredictionMapPtr>
  PasswordFormFieldPredictionMapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PasswordFormFieldPredictionMap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PasswordFormFieldPredictionMapPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PasswordFormFieldPredictionMapPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::vector<autofill::FormFieldData> keys;
  std::vector<autofill::PasswordFormFieldPredictionType> values;
};

class PasswordFormFieldPredictionMapDataView {
 public:
  PasswordFormFieldPredictionMapDataView() {}

  PasswordFormFieldPredictionMapDataView(
      internal::PasswordFormFieldPredictionMap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<FormFieldDataDataView>* output);

  template <typename UserType>
  bool ReadKeys(UserType* output) {
    auto pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<PasswordFormFieldPredictionType>* output);

  template <typename UserType>
  bool ReadValues(UserType* output) {
    auto pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionType>>(
        pointer, output, context_);
  }
 private:
  internal::PasswordFormFieldPredictionMap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::PasswordFormFieldPredictionMapDataView> {
  using MojomType = ::autofill::mojom::PasswordFormFieldPredictionMapPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {



class  FormsPredictionsMap {
 public:
  using DataView = FormsPredictionsMapDataView;
  using Data_ = internal::FormsPredictionsMap_Data;

  static FormsPredictionsMapPtr New();

  template <typename U>
  static FormsPredictionsMapPtr From(const U& u) {
    return mojo::TypeConverter<FormsPredictionsMapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FormsPredictionsMap>::Convert(*this);
  }

  FormsPredictionsMap();
  ~FormsPredictionsMap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FormsPredictionsMapPtr>
  FormsPredictionsMapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FormsPredictionsMap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        FormsPredictionsMapPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        FormsPredictionsMapPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::vector<autofill::FormData> keys;
  std::vector<autofill::PasswordFormFieldPredictionMap> values;
};

class FormsPredictionsMapDataView {
 public:
  FormsPredictionsMapDataView() {}

  FormsPredictionsMapDataView(
      internal::FormsPredictionsMap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<FormDataDataView>* output);

  template <typename UserType>
  bool ReadKeys(UserType* output) {
    auto pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>* output);

  template <typename UserType>
  bool ReadValues(UserType* output) {
    auto pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionMapPtr>>(
        pointer, output, context_);
  }
 private:
  internal::FormsPredictionsMap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::autofill::mojom::FormsPredictionsMapDataView> {
  using MojomType = ::autofill::mojom::FormsPredictionsMapPtr;
};
}  // namespace internal
}  // namespace mojo

namespace autofill {
namespace mojom {


template <typename StructPtrType>
FormFieldDataPtr FormFieldData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->label = mojo::internal::Clone(label);
  rv->name = mojo::internal::Clone(name);
  rv->value = mojo::internal::Clone(value);
  rv->form_control_type = mojo::internal::Clone(form_control_type);
  rv->autocomplete_attribute = mojo::internal::Clone(autocomplete_attribute);
  rv->placeholder = mojo::internal::Clone(placeholder);
  rv->css_classes = mojo::internal::Clone(css_classes);
  rv->properties_mask = mojo::internal::Clone(properties_mask);
  rv->max_length = mojo::internal::Clone(max_length);
  rv->is_autofilled = mojo::internal::Clone(is_autofilled);
  rv->check_status = mojo::internal::Clone(check_status);
  rv->is_focusable = mojo::internal::Clone(is_focusable);
  rv->should_autocomplete = mojo::internal::Clone(should_autocomplete);
  rv->role = mojo::internal::Clone(role);
  rv->text_direction = mojo::internal::Clone(text_direction);
  rv->option_values = mojo::internal::Clone(option_values);
  rv->option_contents = mojo::internal::Clone(option_contents);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormFieldData>::value>::type*>
bool FormFieldData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->label, other.label))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  if (!mojo::internal::Equals(this->form_control_type, other.form_control_type))
    return false;
  if (!mojo::internal::Equals(this->autocomplete_attribute, other.autocomplete_attribute))
    return false;
  if (!mojo::internal::Equals(this->placeholder, other.placeholder))
    return false;
  if (!mojo::internal::Equals(this->css_classes, other.css_classes))
    return false;
  if (!mojo::internal::Equals(this->properties_mask, other.properties_mask))
    return false;
  if (!mojo::internal::Equals(this->max_length, other.max_length))
    return false;
  if (!mojo::internal::Equals(this->is_autofilled, other.is_autofilled))
    return false;
  if (!mojo::internal::Equals(this->check_status, other.check_status))
    return false;
  if (!mojo::internal::Equals(this->is_focusable, other.is_focusable))
    return false;
  if (!mojo::internal::Equals(this->should_autocomplete, other.should_autocomplete))
    return false;
  if (!mojo::internal::Equals(this->role, other.role))
    return false;
  if (!mojo::internal::Equals(this->text_direction, other.text_direction))
    return false;
  if (!mojo::internal::Equals(this->option_values, other.option_values))
    return false;
  if (!mojo::internal::Equals(this->option_contents, other.option_contents))
    return false;
  return true;
}

inline void FormFieldDataDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetFormControlTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->form_control_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetAutocompleteAttributeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->autocomplete_attribute.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetPlaceholderDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->placeholder.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetCssClassesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->css_classes.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataDataView::GetOptionValuesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->option_values.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void FormFieldDataDataView::GetOptionContentsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->option_contents.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}

template <typename StructPtrType>
FormDataPtr FormData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->origin = mojo::internal::Clone(origin);
  rv->action = mojo::internal::Clone(action);
  rv->is_form_tag = mojo::internal::Clone(is_form_tag);
  rv->is_formless_checkout = mojo::internal::Clone(is_formless_checkout);
  rv->fields = mojo::internal::Clone(fields);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormData>::value>::type*>
bool FormData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->origin, other.origin))
    return false;
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->is_form_tag, other.is_form_tag))
    return false;
  if (!mojo::internal::Equals(this->is_formless_checkout, other.is_formless_checkout))
    return false;
  if (!mojo::internal::Equals(this->fields, other.fields))
    return false;
  return true;
}

inline void FormDataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormDataDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FormDataDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FormDataDataView::GetFieldsDataView(
    mojo::ArrayDataView<FormFieldDataDataView>* output) {
  auto pointer = data_->fields.Get();
  *output = mojo::ArrayDataView<FormFieldDataDataView>(pointer, context_);
}

template <typename StructPtrType>
FormFieldDataPredictionsPtr FormFieldDataPredictions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->field = mojo::internal::Clone(field);
  rv->signature = mojo::internal::Clone(signature);
  rv->heuristic_type = mojo::internal::Clone(heuristic_type);
  rv->server_type = mojo::internal::Clone(server_type);
  rv->overall_type = mojo::internal::Clone(overall_type);
  rv->parseable_name = mojo::internal::Clone(parseable_name);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormFieldDataPredictions>::value>::type*>
bool FormFieldDataPredictions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->field, other.field))
    return false;
  if (!mojo::internal::Equals(this->signature, other.signature))
    return false;
  if (!mojo::internal::Equals(this->heuristic_type, other.heuristic_type))
    return false;
  if (!mojo::internal::Equals(this->server_type, other.server_type))
    return false;
  if (!mojo::internal::Equals(this->overall_type, other.overall_type))
    return false;
  if (!mojo::internal::Equals(this->parseable_name, other.parseable_name))
    return false;
  return true;
}

inline void FormFieldDataPredictionsDataView::GetFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetHeuristicTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->heuristic_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetServerTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->server_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetOverallTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->overall_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormFieldDataPredictionsDataView::GetParseableNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->parseable_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
FormDataPredictionsPtr FormDataPredictions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->data = mojo::internal::Clone(data);
  rv->signature = mojo::internal::Clone(signature);
  rv->fields = mojo::internal::Clone(fields);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormDataPredictions>::value>::type*>
bool FormDataPredictions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  if (!mojo::internal::Equals(this->signature, other.signature))
    return false;
  if (!mojo::internal::Equals(this->fields, other.fields))
    return false;
  return true;
}

inline void FormDataPredictionsDataView::GetDataDataView(
    FormDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = FormDataDataView(pointer, context_);
}
inline void FormDataPredictionsDataView::GetSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FormDataPredictionsDataView::GetFieldsDataView(
    mojo::ArrayDataView<FormFieldDataPredictionsDataView>* output) {
  auto pointer = data_->fields.Get();
  *output = mojo::ArrayDataView<FormFieldDataPredictionsDataView>(pointer, context_);
}

template <typename StructPtrType>
PasswordAndRealmPtr PasswordAndRealm::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->password = mojo::internal::Clone(password);
  rv->realm = mojo::internal::Clone(realm);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordAndRealm>::value>::type*>
bool PasswordAndRealm::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->password, other.password))
    return false;
  if (!mojo::internal::Equals(this->realm, other.realm))
    return false;
  return true;
}

inline void PasswordAndRealmDataView::GetPasswordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->password.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordAndRealmDataView::GetRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
UsernamesCollectionKeyPtr UsernamesCollectionKey::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->username = mojo::internal::Clone(username);
  rv->password = mojo::internal::Clone(password);
  rv->realm = mojo::internal::Clone(realm);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsernamesCollectionKey>::value>::type*>
bool UsernamesCollectionKey::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->username, other.username))
    return false;
  if (!mojo::internal::Equals(this->password, other.password))
    return false;
  if (!mojo::internal::Equals(this->realm, other.realm))
    return false;
  return true;
}

inline void UsernamesCollectionKeyDataView::GetUsernameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->username.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsernamesCollectionKeyDataView::GetPasswordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->password.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void UsernamesCollectionKeyDataView::GetRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PasswordFormFillDataPtr PasswordFormFillData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->origin = mojo::internal::Clone(origin);
  rv->action = mojo::internal::Clone(action);
  rv->username_field = mojo::internal::Clone(username_field);
  rv->password_field = mojo::internal::Clone(password_field);
  rv->preferred_realm = mojo::internal::Clone(preferred_realm);
  rv->additional_logins = mojo::internal::Clone(additional_logins);
  rv->other_possible_usernames_keys = mojo::internal::Clone(other_possible_usernames_keys);
  rv->other_possible_usernames_values = mojo::internal::Clone(other_possible_usernames_values);
  rv->wait_for_username = mojo::internal::Clone(wait_for_username);
  rv->is_possible_change_password_form = mojo::internal::Clone(is_possible_change_password_form);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormFillData>::value>::type*>
bool PasswordFormFillData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->origin, other.origin))
    return false;
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->username_field, other.username_field))
    return false;
  if (!mojo::internal::Equals(this->password_field, other.password_field))
    return false;
  if (!mojo::internal::Equals(this->preferred_realm, other.preferred_realm))
    return false;
  if (!mojo::internal::Equals(this->additional_logins, other.additional_logins))
    return false;
  if (!mojo::internal::Equals(this->other_possible_usernames_keys, other.other_possible_usernames_keys))
    return false;
  if (!mojo::internal::Equals(this->other_possible_usernames_values, other.other_possible_usernames_values))
    return false;
  if (!mojo::internal::Equals(this->wait_for_username, other.wait_for_username))
    return false;
  if (!mojo::internal::Equals(this->is_possible_change_password_form, other.is_possible_change_password_form))
    return false;
  return true;
}

inline void PasswordFormFillDataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetUsernameFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->username_field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetPasswordFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->password_field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetPreferredRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->preferred_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetAdditionalLoginsDataView(
    mojo::MapDataView<mojo::StringDataView, PasswordAndRealmDataView>* output) {
  auto pointer = data_->additional_logins.Get();
  *output = mojo::MapDataView<mojo::StringDataView, PasswordAndRealmDataView>(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetOtherPossibleUsernamesKeysDataView(
    mojo::ArrayDataView<UsernamesCollectionKeyDataView>* output) {
  auto pointer = data_->other_possible_usernames_keys.Get();
  *output = mojo::ArrayDataView<UsernamesCollectionKeyDataView>(pointer, context_);
}
inline void PasswordFormFillDataDataView::GetOtherPossibleUsernamesValuesDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->other_possible_usernames_values.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}

template <typename StructPtrType>
PasswordFormGenerationDataPtr PasswordFormGenerationData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->action = mojo::internal::Clone(action);
  rv->generation_field = mojo::internal::Clone(generation_field);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormGenerationData>::value>::type*>
bool PasswordFormGenerationData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->generation_field, other.generation_field))
    return false;
  return true;
}

inline void PasswordFormGenerationDataDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormGenerationDataDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormGenerationDataDataView::GetGenerationFieldDataView(
    FormFieldDataDataView* output) {
  auto pointer = data_->generation_field.Get();
  *output = FormFieldDataDataView(pointer, context_);
}

template <typename StructPtrType>
PasswordFormPtr PasswordForm::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->scheme = mojo::internal::Clone(scheme);
  rv->signon_realm = mojo::internal::Clone(signon_realm);
  rv->origin_with_path = mojo::internal::Clone(origin_with_path);
  rv->action = mojo::internal::Clone(action);
  rv->affiliated_web_realm = mojo::internal::Clone(affiliated_web_realm);
  rv->submit_element = mojo::internal::Clone(submit_element);
  rv->username_element = mojo::internal::Clone(username_element);
  rv->username_marked_by_site = mojo::internal::Clone(username_marked_by_site);
  rv->username_value = mojo::internal::Clone(username_value);
  rv->other_possible_usernames = mojo::internal::Clone(other_possible_usernames);
  rv->password_element = mojo::internal::Clone(password_element);
  rv->password_value = mojo::internal::Clone(password_value);
  rv->password_value_is_default = mojo::internal::Clone(password_value_is_default);
  rv->new_password_element = mojo::internal::Clone(new_password_element);
  rv->new_password_value = mojo::internal::Clone(new_password_value);
  rv->new_password_value_is_default = mojo::internal::Clone(new_password_value_is_default);
  rv->new_password_marked_by_site = mojo::internal::Clone(new_password_marked_by_site);
  rv->preferred = mojo::internal::Clone(preferred);
  rv->date_created = mojo::internal::Clone(date_created);
  rv->date_synced = mojo::internal::Clone(date_synced);
  rv->blacklisted_by_user = mojo::internal::Clone(blacklisted_by_user);
  rv->type = mojo::internal::Clone(type);
  rv->times_used = mojo::internal::Clone(times_used);
  rv->form_data = mojo::internal::Clone(form_data);
  rv->generation_upload_status = mojo::internal::Clone(generation_upload_status);
  rv->display_name = mojo::internal::Clone(display_name);
  rv->icon_url = mojo::internal::Clone(icon_url);
  rv->federation_origin = mojo::internal::Clone(federation_origin);
  rv->skip_zero_click = mojo::internal::Clone(skip_zero_click);
  rv->layout = mojo::internal::Clone(layout);
  rv->was_parsed_using_autofill_predictions = mojo::internal::Clone(was_parsed_using_autofill_predictions);
  rv->is_public_suffix_match = mojo::internal::Clone(is_public_suffix_match);
  rv->is_affiliation_based_match = mojo::internal::Clone(is_affiliation_based_match);
  rv->does_look_like_signup_form = mojo::internal::Clone(does_look_like_signup_form);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordForm>::value>::type*>
bool PasswordForm::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->scheme, other.scheme))
    return false;
  if (!mojo::internal::Equals(this->signon_realm, other.signon_realm))
    return false;
  if (!mojo::internal::Equals(this->origin_with_path, other.origin_with_path))
    return false;
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->affiliated_web_realm, other.affiliated_web_realm))
    return false;
  if (!mojo::internal::Equals(this->submit_element, other.submit_element))
    return false;
  if (!mojo::internal::Equals(this->username_element, other.username_element))
    return false;
  if (!mojo::internal::Equals(this->username_marked_by_site, other.username_marked_by_site))
    return false;
  if (!mojo::internal::Equals(this->username_value, other.username_value))
    return false;
  if (!mojo::internal::Equals(this->other_possible_usernames, other.other_possible_usernames))
    return false;
  if (!mojo::internal::Equals(this->password_element, other.password_element))
    return false;
  if (!mojo::internal::Equals(this->password_value, other.password_value))
    return false;
  if (!mojo::internal::Equals(this->password_value_is_default, other.password_value_is_default))
    return false;
  if (!mojo::internal::Equals(this->new_password_element, other.new_password_element))
    return false;
  if (!mojo::internal::Equals(this->new_password_value, other.new_password_value))
    return false;
  if (!mojo::internal::Equals(this->new_password_value_is_default, other.new_password_value_is_default))
    return false;
  if (!mojo::internal::Equals(this->new_password_marked_by_site, other.new_password_marked_by_site))
    return false;
  if (!mojo::internal::Equals(this->preferred, other.preferred))
    return false;
  if (!mojo::internal::Equals(this->date_created, other.date_created))
    return false;
  if (!mojo::internal::Equals(this->date_synced, other.date_synced))
    return false;
  if (!mojo::internal::Equals(this->blacklisted_by_user, other.blacklisted_by_user))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->times_used, other.times_used))
    return false;
  if (!mojo::internal::Equals(this->form_data, other.form_data))
    return false;
  if (!mojo::internal::Equals(this->generation_upload_status, other.generation_upload_status))
    return false;
  if (!mojo::internal::Equals(this->display_name, other.display_name))
    return false;
  if (!mojo::internal::Equals(this->icon_url, other.icon_url))
    return false;
  if (!mojo::internal::Equals(this->federation_origin, other.federation_origin))
    return false;
  if (!mojo::internal::Equals(this->skip_zero_click, other.skip_zero_click))
    return false;
  if (!mojo::internal::Equals(this->layout, other.layout))
    return false;
  if (!mojo::internal::Equals(this->was_parsed_using_autofill_predictions, other.was_parsed_using_autofill_predictions))
    return false;
  if (!mojo::internal::Equals(this->is_public_suffix_match, other.is_public_suffix_match))
    return false;
  if (!mojo::internal::Equals(this->is_affiliation_based_match, other.is_affiliation_based_match))
    return false;
  if (!mojo::internal::Equals(this->does_look_like_signup_form, other.does_look_like_signup_form))
    return false;
  return true;
}

inline void PasswordFormDataView::GetSignonRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signon_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetOriginWithPathDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin_with_path.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetAffiliatedWebRealmDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->affiliated_web_realm.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetSubmitElementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->submit_element.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetUsernameElementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->username_element.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetUsernameValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->username_value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetOtherPossibleUsernamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->other_possible_usernames.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PasswordFormDataView::GetPasswordElementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->password_element.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetPasswordValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->password_value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetNewPasswordElementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_password_element.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetNewPasswordValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->new_password_value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetDateCreatedDataView(
    ::mojo::common::mojom::TimeDataView* output) {
  auto pointer = data_->date_created.Get();
  *output = ::mojo::common::mojom::TimeDataView(pointer, context_);
}
inline void PasswordFormDataView::GetDateSyncedDataView(
    ::mojo::common::mojom::TimeDataView* output) {
  auto pointer = data_->date_synced.Get();
  *output = ::mojo::common::mojom::TimeDataView(pointer, context_);
}
inline void PasswordFormDataView::GetFormDataDataView(
    FormDataDataView* output) {
  auto pointer = data_->form_data.Get();
  *output = FormDataDataView(pointer, context_);
}
inline void PasswordFormDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PasswordFormDataView::GetIconUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PasswordFormDataView::GetFederationOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->federation_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}

template <typename StructPtrType>
PasswordFormFieldPredictionMapPtr PasswordFormFieldPredictionMap::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->keys = mojo::internal::Clone(keys);
  rv->values = mojo::internal::Clone(values);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PasswordFormFieldPredictionMap>::value>::type*>
bool PasswordFormFieldPredictionMap::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->keys, other.keys))
    return false;
  if (!mojo::internal::Equals(this->values, other.values))
    return false;
  return true;
}

inline void PasswordFormFieldPredictionMapDataView::GetKeysDataView(
    mojo::ArrayDataView<FormFieldDataDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<FormFieldDataDataView>(pointer, context_);
}
inline void PasswordFormFieldPredictionMapDataView::GetValuesDataView(
    mojo::ArrayDataView<PasswordFormFieldPredictionType>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<PasswordFormFieldPredictionType>(pointer, context_);
}

template <typename StructPtrType>
FormsPredictionsMapPtr FormsPredictionsMap::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->keys = mojo::internal::Clone(keys);
  rv->values = mojo::internal::Clone(values);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FormsPredictionsMap>::value>::type*>
bool FormsPredictionsMap::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->keys, other.keys))
    return false;
  if (!mojo::internal::Equals(this->values, other.values))
    return false;
  return true;
}

inline void FormsPredictionsMapDataView::GetKeysDataView(
    mojo::ArrayDataView<FormDataDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<FormDataDataView>(pointer, context_);
}
inline void FormsPredictionsMapDataView::GetValuesDataView(
    mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<PasswordFormFieldPredictionMapDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace autofill

namespace mojo {


template <>
struct  StructTraits<::autofill::mojom::FormFieldData, ::autofill::mojom::FormFieldDataPtr> {
  static bool IsNull(const ::autofill::mojom::FormFieldDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormFieldDataPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::FormFieldData::label)& label(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->label;
  }
  static decltype(::autofill::mojom::FormFieldData::name)& name(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->name;
  }
  static decltype(::autofill::mojom::FormFieldData::value)& value(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->value;
  }
  static decltype(::autofill::mojom::FormFieldData::form_control_type)& form_control_type(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->form_control_type;
  }
  static decltype(::autofill::mojom::FormFieldData::autocomplete_attribute)& autocomplete_attribute(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->autocomplete_attribute;
  }
  static decltype(::autofill::mojom::FormFieldData::placeholder)& placeholder(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->placeholder;
  }
  static decltype(::autofill::mojom::FormFieldData::css_classes)& css_classes(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->css_classes;
  }
  static decltype(::autofill::mojom::FormFieldData::properties_mask) properties_mask(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->properties_mask;
  }
  static decltype(::autofill::mojom::FormFieldData::max_length) max_length(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->max_length;
  }
  static decltype(::autofill::mojom::FormFieldData::is_autofilled) is_autofilled(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_autofilled;
  }
  static decltype(::autofill::mojom::FormFieldData::check_status) check_status(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->check_status;
  }
  static decltype(::autofill::mojom::FormFieldData::is_focusable) is_focusable(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->is_focusable;
  }
  static decltype(::autofill::mojom::FormFieldData::should_autocomplete) should_autocomplete(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->should_autocomplete;
  }
  static decltype(::autofill::mojom::FormFieldData::role) role(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->role;
  }
  static decltype(::autofill::mojom::FormFieldData::text_direction) text_direction(
      const ::autofill::mojom::FormFieldDataPtr& input) {
    return input->text_direction;
  }
  static decltype(::autofill::mojom::FormFieldData::option_values)& option_values(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->option_values;
  }
  static decltype(::autofill::mojom::FormFieldData::option_contents)& option_contents(
      ::autofill::mojom::FormFieldDataPtr& input) {
    return input->option_contents;
  }

  static bool Read(::autofill::mojom::FormFieldDataDataView input, ::autofill::mojom::FormFieldDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormFieldDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormFieldData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::FormFieldData_Data);
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_label, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_value, context);
    decltype(CallWithContext(Traits::form_control_type, input, custom_context)) in_form_control_type = CallWithContext(Traits::form_control_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_form_control_type, context);
    decltype(CallWithContext(Traits::autocomplete_attribute, input, custom_context)) in_autocomplete_attribute = CallWithContext(Traits::autocomplete_attribute, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_autocomplete_attribute, context);
    decltype(CallWithContext(Traits::placeholder, input, custom_context)) in_placeholder = CallWithContext(Traits::placeholder, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_placeholder, context);
    decltype(CallWithContext(Traits::css_classes, input, custom_context)) in_css_classes = CallWithContext(Traits::css_classes, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_css_classes, context);
    decltype(CallWithContext(Traits::option_values, input, custom_context)) in_option_values = CallWithContext(Traits::option_values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_option_values, context);
    decltype(CallWithContext(Traits::option_contents, input, custom_context)) in_option_contents = CallWithContext(Traits::option_contents, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_option_contents, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormFieldData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::FormFieldData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
      typename decltype(result->label)::BaseType* label_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_label, buffer, &label_ptr, context);
      result->label.Set(label_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->label.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null label in FormFieldData struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in FormFieldData struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_value, buffer, &value_ptr, context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in FormFieldData struct");
      decltype(CallWithContext(Traits::form_control_type, input, custom_context)) in_form_control_type = CallWithContext(Traits::form_control_type, input, custom_context);
      typename decltype(result->form_control_type)::BaseType* form_control_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_form_control_type, buffer, &form_control_type_ptr, context);
      result->form_control_type.Set(form_control_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->form_control_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null form_control_type in FormFieldData struct");
      decltype(CallWithContext(Traits::autocomplete_attribute, input, custom_context)) in_autocomplete_attribute = CallWithContext(Traits::autocomplete_attribute, input, custom_context);
      typename decltype(result->autocomplete_attribute)::BaseType* autocomplete_attribute_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_autocomplete_attribute, buffer, &autocomplete_attribute_ptr, context);
      result->autocomplete_attribute.Set(autocomplete_attribute_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->autocomplete_attribute.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null autocomplete_attribute in FormFieldData struct");
      decltype(CallWithContext(Traits::placeholder, input, custom_context)) in_placeholder = CallWithContext(Traits::placeholder, input, custom_context);
      typename decltype(result->placeholder)::BaseType* placeholder_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_placeholder, buffer, &placeholder_ptr, context);
      result->placeholder.Set(placeholder_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->placeholder.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null placeholder in FormFieldData struct");
      decltype(CallWithContext(Traits::css_classes, input, custom_context)) in_css_classes = CallWithContext(Traits::css_classes, input, custom_context);
      typename decltype(result->css_classes)::BaseType* css_classes_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_css_classes, buffer, &css_classes_ptr, context);
      result->css_classes.Set(css_classes_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->css_classes.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null css_classes in FormFieldData struct");
      result->properties_mask = CallWithContext(Traits::properties_mask, input, custom_context);
      result->max_length = CallWithContext(Traits::max_length, input, custom_context);
      result->is_autofilled = CallWithContext(Traits::is_autofilled, input, custom_context);
      mojo::internal::Serialize<::autofill::mojom::CheckStatus>(
          CallWithContext(Traits::check_status, input, custom_context), &result->check_status);
      result->is_focusable = CallWithContext(Traits::is_focusable, input, custom_context);
      result->should_autocomplete = CallWithContext(Traits::should_autocomplete, input, custom_context);
      mojo::internal::Serialize<::autofill::mojom::RoleAttribute>(
          CallWithContext(Traits::role, input, custom_context), &result->role);
      mojo::internal::Serialize<::autofill::mojom::TextDirection>(
          CallWithContext(Traits::text_direction, input, custom_context), &result->text_direction);
      decltype(CallWithContext(Traits::option_values, input, custom_context)) in_option_values = CallWithContext(Traits::option_values, input, custom_context);
      typename decltype(result->option_values)::BaseType* option_values_ptr;
      const mojo::internal::ContainerValidateParams option_values_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_option_values, buffer, &option_values_ptr, &option_values_validate_params,
          context);
      result->option_values.Set(option_values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->option_values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null option_values in FormFieldData struct");
      decltype(CallWithContext(Traits::option_contents, input, custom_context)) in_option_contents = CallWithContext(Traits::option_contents, input, custom_context);
      typename decltype(result->option_contents)::BaseType* option_contents_ptr;
      const mojo::internal::ContainerValidateParams option_contents_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_option_contents, buffer, &option_contents_ptr, &option_contents_validate_params,
          context);
      result->option_contents.Set(option_contents_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->option_contents.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null option_contents in FormFieldData struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormFieldData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormFieldDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::FormData, ::autofill::mojom::FormDataPtr> {
  static bool IsNull(const ::autofill::mojom::FormDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormDataPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::FormData::name)& name(
      ::autofill::mojom::FormDataPtr& input) {
    return input->name;
  }
  static decltype(::autofill::mojom::FormData::origin)& origin(
      ::autofill::mojom::FormDataPtr& input) {
    return input->origin;
  }
  static decltype(::autofill::mojom::FormData::action)& action(
      ::autofill::mojom::FormDataPtr& input) {
    return input->action;
  }
  static decltype(::autofill::mojom::FormData::is_form_tag) is_form_tag(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->is_form_tag;
  }
  static decltype(::autofill::mojom::FormData::is_formless_checkout) is_formless_checkout(
      const ::autofill::mojom::FormDataPtr& input) {
    return input->is_formless_checkout;
  }
  static decltype(::autofill::mojom::FormData::fields)& fields(
      ::autofill::mojom::FormDataPtr& input) {
    return input->fields;
  }

  static bool Read(::autofill::mojom::FormDataDataView input, ::autofill::mojom::FormDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::FormData_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_origin, context);
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_action, context);
    decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
        in_fields, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::FormData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in FormData struct");
      decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
      typename decltype(result->origin)::BaseType* origin_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_origin, buffer, &origin_ptr, context);
      result->origin.Set(origin_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->origin.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null origin in FormData struct");
      decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
      typename decltype(result->action)::BaseType* action_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_action, buffer, &action_ptr, context);
      result->action.Set(action_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->action.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null action in FormData struct");
      result->is_form_tag = CallWithContext(Traits::is_form_tag, input, custom_context);
      result->is_formless_checkout = CallWithContext(Traits::is_formless_checkout, input, custom_context);
      decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
      typename decltype(result->fields)::BaseType* fields_ptr;
      const mojo::internal::ContainerValidateParams fields_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
          in_fields, buffer, &fields_ptr, &fields_validate_params,
          context);
      result->fields.Set(fields_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->fields.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null fields in FormData struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::FormFieldDataPredictions, ::autofill::mojom::FormFieldDataPredictionsPtr> {
  static bool IsNull(const ::autofill::mojom::FormFieldDataPredictionsPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormFieldDataPredictionsPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::FormFieldDataPredictions::field)& field(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->field;
  }
  static decltype(::autofill::mojom::FormFieldDataPredictions::signature)& signature(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->signature;
  }
  static decltype(::autofill::mojom::FormFieldDataPredictions::heuristic_type)& heuristic_type(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->heuristic_type;
  }
  static decltype(::autofill::mojom::FormFieldDataPredictions::server_type)& server_type(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->server_type;
  }
  static decltype(::autofill::mojom::FormFieldDataPredictions::overall_type)& overall_type(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->overall_type;
  }
  static decltype(::autofill::mojom::FormFieldDataPredictions::parseable_name)& parseable_name(
      ::autofill::mojom::FormFieldDataPredictionsPtr& input) {
    return input->parseable_name;
  }

  static bool Read(::autofill::mojom::FormFieldDataPredictionsDataView input, ::autofill::mojom::FormFieldDataPredictionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormFieldDataPredictionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormFieldDataPredictions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::FormFieldDataPredictions_Data);
    decltype(CallWithContext(Traits::field, input, custom_context)) in_field = CallWithContext(Traits::field, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
        in_field, context);
    decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_signature, context);
    decltype(CallWithContext(Traits::heuristic_type, input, custom_context)) in_heuristic_type = CallWithContext(Traits::heuristic_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_heuristic_type, context);
    decltype(CallWithContext(Traits::server_type, input, custom_context)) in_server_type = CallWithContext(Traits::server_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_server_type, context);
    decltype(CallWithContext(Traits::overall_type, input, custom_context)) in_overall_type = CallWithContext(Traits::overall_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_overall_type, context);
    decltype(CallWithContext(Traits::parseable_name, input, custom_context)) in_parseable_name = CallWithContext(Traits::parseable_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_parseable_name, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormFieldDataPredictions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::FormFieldDataPredictions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::field, input, custom_context)) in_field = CallWithContext(Traits::field, input, custom_context);
      typename decltype(result->field)::BaseType* field_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
          in_field, buffer, &field_ptr, context);
      result->field.Set(field_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->field.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null field in FormFieldDataPredictions struct");
      decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
      typename decltype(result->signature)::BaseType* signature_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_signature, buffer, &signature_ptr, context);
      result->signature.Set(signature_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->signature.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null signature in FormFieldDataPredictions struct");
      decltype(CallWithContext(Traits::heuristic_type, input, custom_context)) in_heuristic_type = CallWithContext(Traits::heuristic_type, input, custom_context);
      typename decltype(result->heuristic_type)::BaseType* heuristic_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_heuristic_type, buffer, &heuristic_type_ptr, context);
      result->heuristic_type.Set(heuristic_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->heuristic_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null heuristic_type in FormFieldDataPredictions struct");
      decltype(CallWithContext(Traits::server_type, input, custom_context)) in_server_type = CallWithContext(Traits::server_type, input, custom_context);
      typename decltype(result->server_type)::BaseType* server_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_server_type, buffer, &server_type_ptr, context);
      result->server_type.Set(server_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->server_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null server_type in FormFieldDataPredictions struct");
      decltype(CallWithContext(Traits::overall_type, input, custom_context)) in_overall_type = CallWithContext(Traits::overall_type, input, custom_context);
      typename decltype(result->overall_type)::BaseType* overall_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_overall_type, buffer, &overall_type_ptr, context);
      result->overall_type.Set(overall_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->overall_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null overall_type in FormFieldDataPredictions struct");
      decltype(CallWithContext(Traits::parseable_name, input, custom_context)) in_parseable_name = CallWithContext(Traits::parseable_name, input, custom_context);
      typename decltype(result->parseable_name)::BaseType* parseable_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_parseable_name, buffer, &parseable_name_ptr, context);
      result->parseable_name.Set(parseable_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->parseable_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null parseable_name in FormFieldDataPredictions struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormFieldDataPredictions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormFieldDataPredictionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::FormDataPredictions, ::autofill::mojom::FormDataPredictionsPtr> {
  static bool IsNull(const ::autofill::mojom::FormDataPredictionsPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormDataPredictionsPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::FormDataPredictions::data)& data(
      ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->data;
  }
  static decltype(::autofill::mojom::FormDataPredictions::signature)& signature(
      ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->signature;
  }
  static decltype(::autofill::mojom::FormDataPredictions::fields)& fields(
      ::autofill::mojom::FormDataPredictionsPtr& input) {
    return input->fields;
  }

  static bool Read(::autofill::mojom::FormDataPredictionsDataView input, ::autofill::mojom::FormDataPredictionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormDataPredictionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormDataPredictions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::FormDataPredictions_Data);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
        in_data, context);
    decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_signature, context);
    decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::FormFieldDataPredictionsPtr>>(
        in_fields, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormDataPredictions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::FormDataPredictions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
          in_data, buffer, &data_ptr, context);
      result->data.Set(data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null data in FormDataPredictions struct");
      decltype(CallWithContext(Traits::signature, input, custom_context)) in_signature = CallWithContext(Traits::signature, input, custom_context);
      typename decltype(result->signature)::BaseType* signature_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_signature, buffer, &signature_ptr, context);
      result->signature.Set(signature_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->signature.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null signature in FormDataPredictions struct");
      decltype(CallWithContext(Traits::fields, input, custom_context)) in_fields = CallWithContext(Traits::fields, input, custom_context);
      typename decltype(result->fields)::BaseType* fields_ptr;
      const mojo::internal::ContainerValidateParams fields_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::FormFieldDataPredictionsPtr>>(
          in_fields, buffer, &fields_ptr, &fields_validate_params,
          context);
      result->fields.Set(fields_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->fields.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null fields in FormDataPredictions struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormDataPredictions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormDataPredictionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::PasswordAndRealm, ::autofill::mojom::PasswordAndRealmPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordAndRealmPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordAndRealmPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::PasswordAndRealm::password)& password(
      ::autofill::mojom::PasswordAndRealmPtr& input) {
    return input->password;
  }
  static decltype(::autofill::mojom::PasswordAndRealm::realm)& realm(
      ::autofill::mojom::PasswordAndRealmPtr& input) {
    return input->realm;
  }

  static bool Read(::autofill::mojom::PasswordAndRealmDataView input, ::autofill::mojom::PasswordAndRealmPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordAndRealmPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordAndRealm, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::PasswordAndRealm_Data);
    decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_password, context);
    decltype(CallWithContext(Traits::realm, input, custom_context)) in_realm = CallWithContext(Traits::realm, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_realm, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordAndRealm_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::PasswordAndRealm_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
      typename decltype(result->password)::BaseType* password_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_password, buffer, &password_ptr, context);
      result->password.Set(password_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password in PasswordAndRealm struct");
      decltype(CallWithContext(Traits::realm, input, custom_context)) in_realm = CallWithContext(Traits::realm, input, custom_context);
      typename decltype(result->realm)::BaseType* realm_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_realm, buffer, &realm_ptr, context);
      result->realm.Set(realm_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->realm.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null realm in PasswordAndRealm struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordAndRealm_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordAndRealmDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::UsernamesCollectionKey, ::autofill::mojom::UsernamesCollectionKeyPtr> {
  static bool IsNull(const ::autofill::mojom::UsernamesCollectionKeyPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::UsernamesCollectionKeyPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::UsernamesCollectionKey::username)& username(
      ::autofill::mojom::UsernamesCollectionKeyPtr& input) {
    return input->username;
  }
  static decltype(::autofill::mojom::UsernamesCollectionKey::password)& password(
      ::autofill::mojom::UsernamesCollectionKeyPtr& input) {
    return input->password;
  }
  static decltype(::autofill::mojom::UsernamesCollectionKey::realm)& realm(
      ::autofill::mojom::UsernamesCollectionKeyPtr& input) {
    return input->realm;
  }

  static bool Read(::autofill::mojom::UsernamesCollectionKeyDataView input, ::autofill::mojom::UsernamesCollectionKeyPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::UsernamesCollectionKeyPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::UsernamesCollectionKey, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::UsernamesCollectionKey_Data);
    decltype(CallWithContext(Traits::username, input, custom_context)) in_username = CallWithContext(Traits::username, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_username, context);
    decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_password, context);
    decltype(CallWithContext(Traits::realm, input, custom_context)) in_realm = CallWithContext(Traits::realm, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_realm, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::UsernamesCollectionKey_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::UsernamesCollectionKey_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::username, input, custom_context)) in_username = CallWithContext(Traits::username, input, custom_context);
      typename decltype(result->username)::BaseType* username_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_username, buffer, &username_ptr, context);
      result->username.Set(username_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->username.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null username in UsernamesCollectionKey struct");
      decltype(CallWithContext(Traits::password, input, custom_context)) in_password = CallWithContext(Traits::password, input, custom_context);
      typename decltype(result->password)::BaseType* password_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_password, buffer, &password_ptr, context);
      result->password.Set(password_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password in UsernamesCollectionKey struct");
      decltype(CallWithContext(Traits::realm, input, custom_context)) in_realm = CallWithContext(Traits::realm, input, custom_context);
      typename decltype(result->realm)::BaseType* realm_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_realm, buffer, &realm_ptr, context);
      result->realm.Set(realm_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->realm.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null realm in UsernamesCollectionKey struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::UsernamesCollectionKey_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::UsernamesCollectionKeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::PasswordFormFillData, ::autofill::mojom::PasswordFormFillDataPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormFillDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormFillDataPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::PasswordFormFillData::name)& name(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->name;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::origin)& origin(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->origin;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::action)& action(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->action;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::username_field)& username_field(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->username_field;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::password_field)& password_field(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->password_field;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::preferred_realm)& preferred_realm(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->preferred_realm;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::additional_logins)& additional_logins(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->additional_logins;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::other_possible_usernames_keys)& other_possible_usernames_keys(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->other_possible_usernames_keys;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::other_possible_usernames_values)& other_possible_usernames_values(
      ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->other_possible_usernames_values;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::wait_for_username) wait_for_username(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->wait_for_username;
  }
  static decltype(::autofill::mojom::PasswordFormFillData::is_possible_change_password_form) is_possible_change_password_form(
      const ::autofill::mojom::PasswordFormFillDataPtr& input) {
    return input->is_possible_change_password_form;
  }

  static bool Read(::autofill::mojom::PasswordFormFillDataDataView input, ::autofill::mojom::PasswordFormFillDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFillDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormFillData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::PasswordFormFillData_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_origin, context);
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_action, context);
    decltype(CallWithContext(Traits::username_field, input, custom_context)) in_username_field = CallWithContext(Traits::username_field, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
        in_username_field, context);
    decltype(CallWithContext(Traits::password_field, input, custom_context)) in_password_field = CallWithContext(Traits::password_field, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
        in_password_field, context);
    decltype(CallWithContext(Traits::preferred_realm, input, custom_context)) in_preferred_realm = CallWithContext(Traits::preferred_realm, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_preferred_realm, context);
    decltype(CallWithContext(Traits::additional_logins, input, custom_context)) in_additional_logins = CallWithContext(Traits::additional_logins, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Map<mojo::String, ::autofill::mojom::PasswordAndRealmPtr>>(
        in_additional_logins, context);
    decltype(CallWithContext(Traits::other_possible_usernames_keys, input, custom_context)) in_other_possible_usernames_keys = CallWithContext(Traits::other_possible_usernames_keys, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::UsernamesCollectionKeyPtr>>(
        in_other_possible_usernames_keys, context);
    decltype(CallWithContext(Traits::other_possible_usernames_values, input, custom_context)) in_other_possible_usernames_values = CallWithContext(Traits::other_possible_usernames_values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::Array<mojo::String>>>(
        in_other_possible_usernames_values, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormFillData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::PasswordFormFillData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
      typename decltype(result->origin)::BaseType* origin_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_origin, buffer, &origin_ptr, context);
      result->origin.Set(origin_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->origin.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null origin in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
      typename decltype(result->action)::BaseType* action_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_action, buffer, &action_ptr, context);
      result->action.Set(action_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->action.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null action in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::username_field, input, custom_context)) in_username_field = CallWithContext(Traits::username_field, input, custom_context);
      typename decltype(result->username_field)::BaseType* username_field_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
          in_username_field, buffer, &username_field_ptr, context);
      result->username_field.Set(username_field_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->username_field.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null username_field in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::password_field, input, custom_context)) in_password_field = CallWithContext(Traits::password_field, input, custom_context);
      typename decltype(result->password_field)::BaseType* password_field_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
          in_password_field, buffer, &password_field_ptr, context);
      result->password_field.Set(password_field_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password_field.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password_field in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::preferred_realm, input, custom_context)) in_preferred_realm = CallWithContext(Traits::preferred_realm, input, custom_context);
      typename decltype(result->preferred_realm)::BaseType* preferred_realm_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_preferred_realm, buffer, &preferred_realm_ptr, context);
      result->preferred_realm.Set(preferred_realm_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->preferred_realm.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null preferred_realm in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::additional_logins, input, custom_context)) in_additional_logins = CallWithContext(Traits::additional_logins, input, custom_context);
      typename decltype(result->additional_logins)::BaseType* additional_logins_ptr;
      const mojo::internal::ContainerValidateParams additional_logins_validate_params(
          new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Map<mojo::String, ::autofill::mojom::PasswordAndRealmPtr>>(
          in_additional_logins, buffer, &additional_logins_ptr, &additional_logins_validate_params,
          context);
      result->additional_logins.Set(additional_logins_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->additional_logins.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null additional_logins in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::other_possible_usernames_keys, input, custom_context)) in_other_possible_usernames_keys = CallWithContext(Traits::other_possible_usernames_keys, input, custom_context);
      typename decltype(result->other_possible_usernames_keys)::BaseType* other_possible_usernames_keys_ptr;
      const mojo::internal::ContainerValidateParams other_possible_usernames_keys_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::UsernamesCollectionKeyPtr>>(
          in_other_possible_usernames_keys, buffer, &other_possible_usernames_keys_ptr, &other_possible_usernames_keys_validate_params,
          context);
      result->other_possible_usernames_keys.Set(other_possible_usernames_keys_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->other_possible_usernames_keys.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null other_possible_usernames_keys in PasswordFormFillData struct");
      decltype(CallWithContext(Traits::other_possible_usernames_values, input, custom_context)) in_other_possible_usernames_values = CallWithContext(Traits::other_possible_usernames_values, input, custom_context);
      typename decltype(result->other_possible_usernames_values)::BaseType* other_possible_usernames_values_ptr;
      const mojo::internal::ContainerValidateParams other_possible_usernames_values_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
      mojo::internal::Serialize<mojo::Array<mojo::Array<mojo::String>>>(
          in_other_possible_usernames_values, buffer, &other_possible_usernames_values_ptr, &other_possible_usernames_values_validate_params,
          context);
      result->other_possible_usernames_values.Set(other_possible_usernames_values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->other_possible_usernames_values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null other_possible_usernames_values in PasswordFormFillData struct");
      result->wait_for_username = CallWithContext(Traits::wait_for_username, input, custom_context);
      result->is_possible_change_password_form = CallWithContext(Traits::is_possible_change_password_form, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormFillData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormFillDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::PasswordFormGenerationData, ::autofill::mojom::PasswordFormGenerationDataPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormGenerationDataPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormGenerationDataPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::PasswordFormGenerationData::name)& name(
      ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->name;
  }
  static decltype(::autofill::mojom::PasswordFormGenerationData::action)& action(
      ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->action;
  }
  static decltype(::autofill::mojom::PasswordFormGenerationData::generation_field)& generation_field(
      ::autofill::mojom::PasswordFormGenerationDataPtr& input) {
    return input->generation_field;
  }

  static bool Read(::autofill::mojom::PasswordFormGenerationDataDataView input, ::autofill::mojom::PasswordFormGenerationDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormGenerationDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormGenerationData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::PasswordFormGenerationData_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_action, context);
    decltype(CallWithContext(Traits::generation_field, input, custom_context)) in_generation_field = CallWithContext(Traits::generation_field, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormFieldDataPtr>(
        in_generation_field, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormGenerationData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::PasswordFormGenerationData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in PasswordFormGenerationData struct");
      decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
      typename decltype(result->action)::BaseType* action_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_action, buffer, &action_ptr, context);
      result->action.Set(action_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->action.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null action in PasswordFormGenerationData struct");
      decltype(CallWithContext(Traits::generation_field, input, custom_context)) in_generation_field = CallWithContext(Traits::generation_field, input, custom_context);
      typename decltype(result->generation_field)::BaseType* generation_field_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormFieldDataPtr>(
          in_generation_field, buffer, &generation_field_ptr, context);
      result->generation_field.Set(generation_field_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->generation_field.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null generation_field in PasswordFormGenerationData struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormGenerationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormGenerationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::PasswordForm, ::autofill::mojom::PasswordFormPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::PasswordForm::scheme) scheme(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->scheme;
  }
  static decltype(::autofill::mojom::PasswordForm::signon_realm)& signon_realm(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->signon_realm;
  }
  static decltype(::autofill::mojom::PasswordForm::origin_with_path)& origin_with_path(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->origin_with_path;
  }
  static decltype(::autofill::mojom::PasswordForm::action)& action(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->action;
  }
  static decltype(::autofill::mojom::PasswordForm::affiliated_web_realm)& affiliated_web_realm(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->affiliated_web_realm;
  }
  static decltype(::autofill::mojom::PasswordForm::submit_element)& submit_element(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->submit_element;
  }
  static decltype(::autofill::mojom::PasswordForm::username_element)& username_element(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_element;
  }
  static decltype(::autofill::mojom::PasswordForm::username_marked_by_site) username_marked_by_site(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_marked_by_site;
  }
  static decltype(::autofill::mojom::PasswordForm::username_value)& username_value(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->username_value;
  }
  static decltype(::autofill::mojom::PasswordForm::other_possible_usernames)& other_possible_usernames(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->other_possible_usernames;
  }
  static decltype(::autofill::mojom::PasswordForm::password_element)& password_element(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_element;
  }
  static decltype(::autofill::mojom::PasswordForm::password_value)& password_value(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_value;
  }
  static decltype(::autofill::mojom::PasswordForm::password_value_is_default) password_value_is_default(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->password_value_is_default;
  }
  static decltype(::autofill::mojom::PasswordForm::new_password_element)& new_password_element(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_element;
  }
  static decltype(::autofill::mojom::PasswordForm::new_password_value)& new_password_value(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_value;
  }
  static decltype(::autofill::mojom::PasswordForm::new_password_value_is_default) new_password_value_is_default(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_value_is_default;
  }
  static decltype(::autofill::mojom::PasswordForm::new_password_marked_by_site) new_password_marked_by_site(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->new_password_marked_by_site;
  }
  static decltype(::autofill::mojom::PasswordForm::preferred) preferred(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->preferred;
  }
  static decltype(::autofill::mojom::PasswordForm::date_created)& date_created(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->date_created;
  }
  static decltype(::autofill::mojom::PasswordForm::date_synced)& date_synced(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->date_synced;
  }
  static decltype(::autofill::mojom::PasswordForm::blacklisted_by_user) blacklisted_by_user(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->blacklisted_by_user;
  }
  static decltype(::autofill::mojom::PasswordForm::type) type(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->type;
  }
  static decltype(::autofill::mojom::PasswordForm::times_used) times_used(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->times_used;
  }
  static decltype(::autofill::mojom::PasswordForm::form_data)& form_data(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->form_data;
  }
  static decltype(::autofill::mojom::PasswordForm::generation_upload_status) generation_upload_status(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->generation_upload_status;
  }
  static decltype(::autofill::mojom::PasswordForm::display_name)& display_name(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->display_name;
  }
  static decltype(::autofill::mojom::PasswordForm::icon_url)& icon_url(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->icon_url;
  }
  static decltype(::autofill::mojom::PasswordForm::federation_origin)& federation_origin(
      ::autofill::mojom::PasswordFormPtr& input) {
    return input->federation_origin;
  }
  static decltype(::autofill::mojom::PasswordForm::skip_zero_click) skip_zero_click(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->skip_zero_click;
  }
  static decltype(::autofill::mojom::PasswordForm::layout) layout(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->layout;
  }
  static decltype(::autofill::mojom::PasswordForm::was_parsed_using_autofill_predictions) was_parsed_using_autofill_predictions(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->was_parsed_using_autofill_predictions;
  }
  static decltype(::autofill::mojom::PasswordForm::is_public_suffix_match) is_public_suffix_match(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->is_public_suffix_match;
  }
  static decltype(::autofill::mojom::PasswordForm::is_affiliation_based_match) is_affiliation_based_match(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->is_affiliation_based_match;
  }
  static decltype(::autofill::mojom::PasswordForm::does_look_like_signup_form) does_look_like_signup_form(
      const ::autofill::mojom::PasswordFormPtr& input) {
    return input->does_look_like_signup_form;
  }

  static bool Read(::autofill::mojom::PasswordFormDataView input, ::autofill::mojom::PasswordFormPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordForm, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::PasswordForm_Data);
    decltype(CallWithContext(Traits::signon_realm, input, custom_context)) in_signon_realm = CallWithContext(Traits::signon_realm, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_signon_realm, context);
    decltype(CallWithContext(Traits::origin_with_path, input, custom_context)) in_origin_with_path = CallWithContext(Traits::origin_with_path, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_origin_with_path, context);
    decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_action, context);
    decltype(CallWithContext(Traits::affiliated_web_realm, input, custom_context)) in_affiliated_web_realm = CallWithContext(Traits::affiliated_web_realm, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_affiliated_web_realm, context);
    decltype(CallWithContext(Traits::submit_element, input, custom_context)) in_submit_element = CallWithContext(Traits::submit_element, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_submit_element, context);
    decltype(CallWithContext(Traits::username_element, input, custom_context)) in_username_element = CallWithContext(Traits::username_element, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_username_element, context);
    decltype(CallWithContext(Traits::username_value, input, custom_context)) in_username_value = CallWithContext(Traits::username_value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_username_value, context);
    decltype(CallWithContext(Traits::other_possible_usernames, input, custom_context)) in_other_possible_usernames = CallWithContext(Traits::other_possible_usernames, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_other_possible_usernames, context);
    decltype(CallWithContext(Traits::password_element, input, custom_context)) in_password_element = CallWithContext(Traits::password_element, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_password_element, context);
    decltype(CallWithContext(Traits::password_value, input, custom_context)) in_password_value = CallWithContext(Traits::password_value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_password_value, context);
    decltype(CallWithContext(Traits::new_password_element, input, custom_context)) in_new_password_element = CallWithContext(Traits::new_password_element, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_new_password_element, context);
    decltype(CallWithContext(Traits::new_password_value, input, custom_context)) in_new_password_value = CallWithContext(Traits::new_password_value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_new_password_value, context);
    decltype(CallWithContext(Traits::date_created, input, custom_context)) in_date_created = CallWithContext(Traits::date_created, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimePtr>(
        in_date_created, context);
    decltype(CallWithContext(Traits::date_synced, input, custom_context)) in_date_synced = CallWithContext(Traits::date_synced, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimePtr>(
        in_date_synced, context);
    decltype(CallWithContext(Traits::form_data, input, custom_context)) in_form_data = CallWithContext(Traits::form_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::autofill::mojom::FormDataPtr>(
        in_form_data, context);
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_display_name, context);
    decltype(CallWithContext(Traits::icon_url, input, custom_context)) in_icon_url = CallWithContext(Traits::icon_url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_icon_url, context);
    decltype(CallWithContext(Traits::federation_origin, input, custom_context)) in_federation_origin = CallWithContext(Traits::federation_origin, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
        in_federation_origin, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordForm_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::PasswordForm_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::autofill::mojom::PasswordFormScheme>(
          CallWithContext(Traits::scheme, input, custom_context), &result->scheme);
      decltype(CallWithContext(Traits::signon_realm, input, custom_context)) in_signon_realm = CallWithContext(Traits::signon_realm, input, custom_context);
      typename decltype(result->signon_realm)::BaseType* signon_realm_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_signon_realm, buffer, &signon_realm_ptr, context);
      result->signon_realm.Set(signon_realm_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->signon_realm.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null signon_realm in PasswordForm struct");
      decltype(CallWithContext(Traits::origin_with_path, input, custom_context)) in_origin_with_path = CallWithContext(Traits::origin_with_path, input, custom_context);
      typename decltype(result->origin_with_path)::BaseType* origin_with_path_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_origin_with_path, buffer, &origin_with_path_ptr, context);
      result->origin_with_path.Set(origin_with_path_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->origin_with_path.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null origin_with_path in PasswordForm struct");
      decltype(CallWithContext(Traits::action, input, custom_context)) in_action = CallWithContext(Traits::action, input, custom_context);
      typename decltype(result->action)::BaseType* action_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_action, buffer, &action_ptr, context);
      result->action.Set(action_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->action.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null action in PasswordForm struct");
      decltype(CallWithContext(Traits::affiliated_web_realm, input, custom_context)) in_affiliated_web_realm = CallWithContext(Traits::affiliated_web_realm, input, custom_context);
      typename decltype(result->affiliated_web_realm)::BaseType* affiliated_web_realm_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_affiliated_web_realm, buffer, &affiliated_web_realm_ptr, context);
      result->affiliated_web_realm.Set(affiliated_web_realm_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->affiliated_web_realm.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null affiliated_web_realm in PasswordForm struct");
      decltype(CallWithContext(Traits::submit_element, input, custom_context)) in_submit_element = CallWithContext(Traits::submit_element, input, custom_context);
      typename decltype(result->submit_element)::BaseType* submit_element_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_submit_element, buffer, &submit_element_ptr, context);
      result->submit_element.Set(submit_element_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->submit_element.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null submit_element in PasswordForm struct");
      decltype(CallWithContext(Traits::username_element, input, custom_context)) in_username_element = CallWithContext(Traits::username_element, input, custom_context);
      typename decltype(result->username_element)::BaseType* username_element_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_username_element, buffer, &username_element_ptr, context);
      result->username_element.Set(username_element_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->username_element.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null username_element in PasswordForm struct");
      result->username_marked_by_site = CallWithContext(Traits::username_marked_by_site, input, custom_context);
      decltype(CallWithContext(Traits::username_value, input, custom_context)) in_username_value = CallWithContext(Traits::username_value, input, custom_context);
      typename decltype(result->username_value)::BaseType* username_value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_username_value, buffer, &username_value_ptr, context);
      result->username_value.Set(username_value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->username_value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null username_value in PasswordForm struct");
      decltype(CallWithContext(Traits::other_possible_usernames, input, custom_context)) in_other_possible_usernames = CallWithContext(Traits::other_possible_usernames, input, custom_context);
      typename decltype(result->other_possible_usernames)::BaseType* other_possible_usernames_ptr;
      const mojo::internal::ContainerValidateParams other_possible_usernames_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_other_possible_usernames, buffer, &other_possible_usernames_ptr, &other_possible_usernames_validate_params,
          context);
      result->other_possible_usernames.Set(other_possible_usernames_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->other_possible_usernames.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null other_possible_usernames in PasswordForm struct");
      decltype(CallWithContext(Traits::password_element, input, custom_context)) in_password_element = CallWithContext(Traits::password_element, input, custom_context);
      typename decltype(result->password_element)::BaseType* password_element_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_password_element, buffer, &password_element_ptr, context);
      result->password_element.Set(password_element_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password_element.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password_element in PasswordForm struct");
      decltype(CallWithContext(Traits::password_value, input, custom_context)) in_password_value = CallWithContext(Traits::password_value, input, custom_context);
      typename decltype(result->password_value)::BaseType* password_value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_password_value, buffer, &password_value_ptr, context);
      result->password_value.Set(password_value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->password_value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null password_value in PasswordForm struct");
      result->password_value_is_default = CallWithContext(Traits::password_value_is_default, input, custom_context);
      decltype(CallWithContext(Traits::new_password_element, input, custom_context)) in_new_password_element = CallWithContext(Traits::new_password_element, input, custom_context);
      typename decltype(result->new_password_element)::BaseType* new_password_element_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_new_password_element, buffer, &new_password_element_ptr, context);
      result->new_password_element.Set(new_password_element_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->new_password_element.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null new_password_element in PasswordForm struct");
      decltype(CallWithContext(Traits::new_password_value, input, custom_context)) in_new_password_value = CallWithContext(Traits::new_password_value, input, custom_context);
      typename decltype(result->new_password_value)::BaseType* new_password_value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_new_password_value, buffer, &new_password_value_ptr, context);
      result->new_password_value.Set(new_password_value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->new_password_value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null new_password_value in PasswordForm struct");
      result->new_password_value_is_default = CallWithContext(Traits::new_password_value_is_default, input, custom_context);
      result->new_password_marked_by_site = CallWithContext(Traits::new_password_marked_by_site, input, custom_context);
      result->preferred = CallWithContext(Traits::preferred, input, custom_context);
      decltype(CallWithContext(Traits::date_created, input, custom_context)) in_date_created = CallWithContext(Traits::date_created, input, custom_context);
      typename decltype(result->date_created)::BaseType* date_created_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimePtr>(
          in_date_created, buffer, &date_created_ptr, context);
      result->date_created.Set(date_created_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->date_created.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null date_created in PasswordForm struct");
      decltype(CallWithContext(Traits::date_synced, input, custom_context)) in_date_synced = CallWithContext(Traits::date_synced, input, custom_context);
      typename decltype(result->date_synced)::BaseType* date_synced_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimePtr>(
          in_date_synced, buffer, &date_synced_ptr, context);
      result->date_synced.Set(date_synced_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->date_synced.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null date_synced in PasswordForm struct");
      result->blacklisted_by_user = CallWithContext(Traits::blacklisted_by_user, input, custom_context);
      mojo::internal::Serialize<::autofill::mojom::PasswordFormType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->times_used = CallWithContext(Traits::times_used, input, custom_context);
      decltype(CallWithContext(Traits::form_data, input, custom_context)) in_form_data = CallWithContext(Traits::form_data, input, custom_context);
      typename decltype(result->form_data)::BaseType* form_data_ptr;
      mojo::internal::Serialize<::autofill::mojom::FormDataPtr>(
          in_form_data, buffer, &form_data_ptr, context);
      result->form_data.Set(form_data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->form_data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null form_data in PasswordForm struct");
      mojo::internal::Serialize<::autofill::mojom::GenerationUploadStatus>(
          CallWithContext(Traits::generation_upload_status, input, custom_context), &result->generation_upload_status);
      decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
      typename decltype(result->display_name)::BaseType* display_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_display_name, buffer, &display_name_ptr, context);
      result->display_name.Set(display_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->display_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null display_name in PasswordForm struct");
      decltype(CallWithContext(Traits::icon_url, input, custom_context)) in_icon_url = CallWithContext(Traits::icon_url, input, custom_context);
      typename decltype(result->icon_url)::BaseType* icon_url_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_icon_url, buffer, &icon_url_ptr, context);
      result->icon_url.Set(icon_url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->icon_url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null icon_url in PasswordForm struct");
      decltype(CallWithContext(Traits::federation_origin, input, custom_context)) in_federation_origin = CallWithContext(Traits::federation_origin, input, custom_context);
      typename decltype(result->federation_origin)::BaseType* federation_origin_ptr;
      mojo::internal::Serialize<::url::mojom::OriginPtr>(
          in_federation_origin, buffer, &federation_origin_ptr, context);
      result->federation_origin.Set(federation_origin_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->federation_origin.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null federation_origin in PasswordForm struct");
      result->skip_zero_click = CallWithContext(Traits::skip_zero_click, input, custom_context);
      mojo::internal::Serialize<::autofill::mojom::PasswordFormLayout>(
          CallWithContext(Traits::layout, input, custom_context), &result->layout);
      result->was_parsed_using_autofill_predictions = CallWithContext(Traits::was_parsed_using_autofill_predictions, input, custom_context);
      result->is_public_suffix_match = CallWithContext(Traits::is_public_suffix_match, input, custom_context);
      result->is_affiliation_based_match = CallWithContext(Traits::is_affiliation_based_match, input, custom_context);
      result->does_look_like_signup_form = CallWithContext(Traits::does_look_like_signup_form, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordForm_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::PasswordFormFieldPredictionMap, ::autofill::mojom::PasswordFormFieldPredictionMapPtr> {
  static bool IsNull(const ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::PasswordFormFieldPredictionMapPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::PasswordFormFieldPredictionMap::keys)& keys(
      ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) {
    return input->keys;
  }
  static decltype(::autofill::mojom::PasswordFormFieldPredictionMap::values)& values(
      ::autofill::mojom::PasswordFormFieldPredictionMapPtr& input) {
    return input->values;
  }

  static bool Read(::autofill::mojom::PasswordFormFieldPredictionMapDataView input, ::autofill::mojom::PasswordFormFieldPredictionMapPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFieldPredictionMapPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::PasswordFormFieldPredictionMap, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data);
    decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
        in_keys, context);
    decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionType>>(
        in_values, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
      typename decltype(result->keys)::BaseType* keys_ptr;
      const mojo::internal::ContainerValidateParams keys_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::FormFieldDataPtr>>(
          in_keys, buffer, &keys_ptr, &keys_validate_params,
          context);
      result->keys.Set(keys_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->keys.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null keys in PasswordFormFieldPredictionMap struct");
      decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
      typename decltype(result->values)::BaseType* values_ptr;
      const mojo::internal::ContainerValidateParams values_validate_params(
          0, ::autofill::mojom::internal::PasswordFormFieldPredictionType_Data::Validate);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionType>>(
          in_values, buffer, &values_ptr, &values_validate_params,
          context);
      result->values.Set(values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null values in PasswordFormFieldPredictionMap struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::PasswordFormFieldPredictionMap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::PasswordFormFieldPredictionMapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::autofill::mojom::FormsPredictionsMap, ::autofill::mojom::FormsPredictionsMapPtr> {
  static bool IsNull(const ::autofill::mojom::FormsPredictionsMapPtr& input) { return !input; }
  static void SetToNull(::autofill::mojom::FormsPredictionsMapPtr* output) { output->reset(); }
  static decltype(::autofill::mojom::FormsPredictionsMap::keys)& keys(
      ::autofill::mojom::FormsPredictionsMapPtr& input) {
    return input->keys;
  }
  static decltype(::autofill::mojom::FormsPredictionsMap::values)& values(
      ::autofill::mojom::FormsPredictionsMapPtr& input) {
    return input->values;
  }

  static bool Read(::autofill::mojom::FormsPredictionsMapDataView input, ::autofill::mojom::FormsPredictionsMapPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::FormsPredictionsMapPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::autofill::mojom::FormsPredictionsMap, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::autofill::mojom::internal::FormsPredictionsMap_Data);
    decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
        in_keys, context);
    decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionMapPtr>>(
        in_values, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::autofill::mojom::internal::FormsPredictionsMap_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::autofill::mojom::internal::FormsPredictionsMap_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::keys, input, custom_context)) in_keys = CallWithContext(Traits::keys, input, custom_context);
      typename decltype(result->keys)::BaseType* keys_ptr;
      const mojo::internal::ContainerValidateParams keys_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::FormDataPtr>>(
          in_keys, buffer, &keys_ptr, &keys_validate_params,
          context);
      result->keys.Set(keys_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->keys.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null keys in FormsPredictionsMap struct");
      decltype(CallWithContext(Traits::values, input, custom_context)) in_values = CallWithContext(Traits::values, input, custom_context);
      typename decltype(result->values)::BaseType* values_ptr;
      const mojo::internal::ContainerValidateParams values_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::autofill::mojom::PasswordFormFieldPredictionMapPtr>>(
          in_values, buffer, &values_ptr, &values_validate_params,
          context);
      result->values.Set(values_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->values.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null values in FormsPredictionsMap struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::autofill::mojom::internal::FormsPredictionsMap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::autofill::mojom::FormsPredictionsMapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_H_