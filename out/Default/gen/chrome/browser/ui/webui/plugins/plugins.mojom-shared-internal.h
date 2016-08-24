// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_SHARED_INTERNAL_H_

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
class MimeType_Data;
class PluginFile_Data;
class PluginData_Data;

#pragma pack(push, 1)
class MimeType_Data {
 public:
  static MimeType_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(MimeType_Data))) MimeType_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> file_extensions;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;

 private:
  MimeType_Data() : header_({sizeof(*this), 0}) {
  }
  ~MimeType_Data() = delete;
};
static_assert(sizeof(MimeType_Data) == 32,
              "Bad sizeof(MimeType_Data)");
class PluginFile_Data {
 public:
  static PluginFile_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginFile_Data))) PluginFile_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<mojo::internal::String_Data> enabled_mode;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MimeType_Data>>> mime_types;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::String_Data> version;

 private:
  PluginFile_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginFile_Data() = delete;
};
static_assert(sizeof(PluginFile_Data) == 64,
              "Bad sizeof(PluginFile_Data)");
class PluginData_Data {
 public:
  static PluginData_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginData_Data))) PluginData_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t always_allowed : 1;
  uint8_t trusted : 1;
  uint8_t policy_click_to_play : 1;
  uint8_t critical : 1;
  uint8_t pad3_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Pointer<mojo::internal::String_Data> enabled_mode;
  mojo::internal::Pointer<mojo::internal::String_Data> id;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> update_url;
  mojo::internal::Pointer<mojo::internal::String_Data> version;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PluginFile_Data>>> plugin_files;

 private:
  PluginData_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginData_Data() = delete;
};
static_assert(sizeof(PluginData_Data) == 72,
              "Bad sizeof(PluginData_Data)");
const uint32_t kPluginsPageHandler_GetPluginsData_Name = 0;
class PluginsPageHandler_GetPluginsData_Params_Data {
 public:
  static PluginsPageHandler_GetPluginsData_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_GetPluginsData_Params_Data))) PluginsPageHandler_GetPluginsData_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginsPageHandler_GetPluginsData_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_GetPluginsData_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_GetPluginsData_Params_Data) == 8,
              "Bad sizeof(PluginsPageHandler_GetPluginsData_Params_Data)");
class PluginsPageHandler_GetPluginsData_ResponseParams_Data {
 public:
  static PluginsPageHandler_GetPluginsData_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_GetPluginsData_ResponseParams_Data))) PluginsPageHandler_GetPluginsData_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PluginData_Data>>> plugins;

 private:
  PluginsPageHandler_GetPluginsData_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_GetPluginsData_ResponseParams_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_GetPluginsData_ResponseParams_Data) == 16,
              "Bad sizeof(PluginsPageHandler_GetPluginsData_ResponseParams_Data)");
const uint32_t kPluginsPageHandler_GetShowDetails_Name = 1;
class PluginsPageHandler_GetShowDetails_Params_Data {
 public:
  static PluginsPageHandler_GetShowDetails_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_GetShowDetails_Params_Data))) PluginsPageHandler_GetShowDetails_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PluginsPageHandler_GetShowDetails_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_GetShowDetails_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_GetShowDetails_Params_Data) == 8,
              "Bad sizeof(PluginsPageHandler_GetShowDetails_Params_Data)");
class PluginsPageHandler_GetShowDetails_ResponseParams_Data {
 public:
  static PluginsPageHandler_GetShowDetails_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_GetShowDetails_ResponseParams_Data))) PluginsPageHandler_GetShowDetails_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t show_details : 1;
  uint8_t padfinal_[7];

 private:
  PluginsPageHandler_GetShowDetails_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_GetShowDetails_ResponseParams_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_GetShowDetails_ResponseParams_Data) == 16,
              "Bad sizeof(PluginsPageHandler_GetShowDetails_ResponseParams_Data)");
const uint32_t kPluginsPageHandler_SaveShowDetailsToPrefs_Name = 2;
class PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data {
 public:
  static PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data))) PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t details_mode : 1;
  uint8_t padfinal_[7];

 private:
  PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data) == 16,
              "Bad sizeof(PluginsPageHandler_SaveShowDetailsToPrefs_Params_Data)");
const uint32_t kPluginsPageHandler_SetPluginAlwaysAllowed_Name = 3;
class PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data {
 public:
  static PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data))) PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> plugin;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data) == 24,
              "Bad sizeof(PluginsPageHandler_SetPluginAlwaysAllowed_Params_Data)");
const uint32_t kPluginsPageHandler_SetPluginEnabled_Name = 4;
class PluginsPageHandler_SetPluginEnabled_Params_Data {
 public:
  static PluginsPageHandler_SetPluginEnabled_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_SetPluginEnabled_Params_Data))) PluginsPageHandler_SetPluginEnabled_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> plugin_path;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  PluginsPageHandler_SetPluginEnabled_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_SetPluginEnabled_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_SetPluginEnabled_Params_Data) == 24,
              "Bad sizeof(PluginsPageHandler_SetPluginEnabled_Params_Data)");
const uint32_t kPluginsPageHandler_SetPluginGroupEnabled_Name = 5;
class PluginsPageHandler_SetPluginGroupEnabled_Params_Data {
 public:
  static PluginsPageHandler_SetPluginGroupEnabled_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_SetPluginGroupEnabled_Params_Data))) PluginsPageHandler_SetPluginGroupEnabled_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> group_name;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  PluginsPageHandler_SetPluginGroupEnabled_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_SetPluginGroupEnabled_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_SetPluginGroupEnabled_Params_Data) == 24,
              "Bad sizeof(PluginsPageHandler_SetPluginGroupEnabled_Params_Data)");
const uint32_t kPluginsPageHandler_SetClientPage_Name = 6;
class PluginsPageHandler_SetClientPage_Params_Data {
 public:
  static PluginsPageHandler_SetClientPage_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPageHandler_SetClientPage_Params_Data))) PluginsPageHandler_SetClientPage_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data page;

 private:
  PluginsPageHandler_SetClientPage_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPageHandler_SetClientPage_Params_Data() = delete;
};
static_assert(sizeof(PluginsPageHandler_SetClientPage_Params_Data) == 16,
              "Bad sizeof(PluginsPageHandler_SetClientPage_Params_Data)");
const uint32_t kPluginsPage_OnPluginsUpdated_Name = 0;
class PluginsPage_OnPluginsUpdated_Params_Data {
 public:
  static PluginsPage_OnPluginsUpdated_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(PluginsPage_OnPluginsUpdated_Params_Data))) PluginsPage_OnPluginsUpdated_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PluginData_Data>>> plugins;

 private:
  PluginsPage_OnPluginsUpdated_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~PluginsPage_OnPluginsUpdated_Params_Data() = delete;
};
static_assert(sizeof(PluginsPage_OnPluginsUpdated_Params_Data) == 16,
              "Bad sizeof(PluginsPage_OnPluginsUpdated_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_PLUGINS_PLUGINS_MOJOM_SHARED_INTERNAL_H_