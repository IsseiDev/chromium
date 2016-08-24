// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {
class AutocompleteAdditionalInfo_Data;
class AutocompleteMatch_Data;
class AutocompleteResultsForProvider_Data;
class OmniboxResult_Data;

#pragma pack(push, 1)
class AutocompleteAdditionalInfo_Data {
 public:
  static AutocompleteAdditionalInfo_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AutocompleteAdditionalInfo_Data))) AutocompleteAdditionalInfo_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  AutocompleteAdditionalInfo_Data() : header_({sizeof(*this), 0}) {
  }
  ~AutocompleteAdditionalInfo_Data() = delete;
};
static_assert(sizeof(AutocompleteAdditionalInfo_Data) == 24,
              "Bad sizeof(AutocompleteAdditionalInfo_Data)");
class AutocompleteMatch_Data {
 public:
  static AutocompleteMatch_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AutocompleteMatch_Data))) AutocompleteMatch_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  uint8_t provider_done : 1;
  uint8_t deletable : 1;
  uint8_t allowed_to_be_default_match : 1;
  uint8_t starred : 1;
  uint8_t from_previous : 1;
  uint8_t pad5_[3];
  int32_t relevance;
  mojo::internal::Pointer<mojo::internal::String_Data> fill_into_edit;
  mojo::internal::Pointer<mojo::internal::String_Data> inline_autocompletion;
  mojo::internal::Pointer<mojo::internal::String_Data> destination_url;
  mojo::internal::Pointer<mojo::internal::String_Data> contents;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  int32_t transition;
  int32_t duplicates;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> associated_keyword;
  mojo::internal::Pointer<mojo::internal::String_Data> keyword;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteAdditionalInfo_Data>>> additional_info;

 private:
  AutocompleteMatch_Data() : header_({sizeof(*this), 0}) {
  }
  ~AutocompleteMatch_Data() = delete;
};
static_assert(sizeof(AutocompleteMatch_Data) == 104,
              "Bad sizeof(AutocompleteMatch_Data)");
class AutocompleteResultsForProvider_Data {
 public:
  static AutocompleteResultsForProvider_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(AutocompleteResultsForProvider_Data))) AutocompleteResultsForProvider_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> provider_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteMatch_Data>>> results;

 private:
  AutocompleteResultsForProvider_Data() : header_({sizeof(*this), 0}) {
  }
  ~AutocompleteResultsForProvider_Data() = delete;
};
static_assert(sizeof(AutocompleteResultsForProvider_Data) == 24,
              "Bad sizeof(AutocompleteResultsForProvider_Data)");
class OmniboxResult_Data {
 public:
  static OmniboxResult_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OmniboxResult_Data))) OmniboxResult_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t done : 1;
  uint8_t is_typed_host : 1;
  uint8_t pad1_[3];
  int32_t time_since_omnibox_started_ms;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteMatch_Data>>> combined_results;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AutocompleteResultsForProvider_Data>>> results_by_provider;

 private:
  OmniboxResult_Data() : header_({sizeof(*this), 0}) {
  }
  ~OmniboxResult_Data() = delete;
};
static_assert(sizeof(OmniboxResult_Data) == 40,
              "Bad sizeof(OmniboxResult_Data)");
const uint32_t kOmniboxPageHandler_SetClientPage_Name = 0;
class OmniboxPageHandler_SetClientPage_Params_Data {
 public:
  static OmniboxPageHandler_SetClientPage_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OmniboxPageHandler_SetClientPage_Params_Data))) OmniboxPageHandler_SetClientPage_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data page;

 private:
  OmniboxPageHandler_SetClientPage_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OmniboxPageHandler_SetClientPage_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPageHandler_SetClientPage_Params_Data) == 16,
              "Bad sizeof(OmniboxPageHandler_SetClientPage_Params_Data)");
const uint32_t kOmniboxPageHandler_StartOmniboxQuery_Name = 1;
class OmniboxPageHandler_StartOmniboxQuery_Params_Data {
 public:
  static OmniboxPageHandler_StartOmniboxQuery_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data))) OmniboxPageHandler_StartOmniboxQuery_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> input_string;
  int32_t cursor_position;
  uint8_t prevent_inline_autocomplete : 1;
  uint8_t prefer_keyword : 1;
  uint8_t pad3_[3];
  int32_t page_classification;
  uint8_t padfinal_[4];

 private:
  OmniboxPageHandler_StartOmniboxQuery_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OmniboxPageHandler_StartOmniboxQuery_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data) == 32,
              "Bad sizeof(OmniboxPageHandler_StartOmniboxQuery_Params_Data)");
const uint32_t kOmniboxPage_HandleNewAutocompleteResult_Name = 0;
class OmniboxPage_HandleNewAutocompleteResult_Params_Data {
 public:
  static OmniboxPage_HandleNewAutocompleteResult_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data))) OmniboxPage_HandleNewAutocompleteResult_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::OmniboxResult_Data> result;

 private:
  OmniboxPage_HandleNewAutocompleteResult_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~OmniboxPage_HandleNewAutocompleteResult_Params_Data() = delete;
};
static_assert(sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data) == 16,
              "Bad sizeof(OmniboxPage_HandleNewAutocompleteResult_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_SHARED_INTERNAL_H_