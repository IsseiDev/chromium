// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_SHARED_INTERNAL_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/cpp/bindings/lib/native_struct_data.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojo/url.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace internal {
class SiteEngagementInfo_Data;

#pragma pack(push, 1)
class SiteEngagementInfo_Data {
 public:
  static SiteEngagementInfo_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SiteEngagementInfo_Data))) SiteEngagementInfo_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  double score;

 private:
  SiteEngagementInfo_Data() : header_({sizeof(*this), 0}) {
  }
  ~SiteEngagementInfo_Data() = delete;
};
static_assert(sizeof(SiteEngagementInfo_Data) == 24,
              "Bad sizeof(SiteEngagementInfo_Data)");
const uint32_t kSiteEngagementUIHandler_GetSiteEngagementInfo_Name = 0;
class SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data {
 public:
  static SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data))) SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data() = delete;
};
static_assert(sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data) == 8,
              "Bad sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data)");
class SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data {
 public:
  static SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data))) SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SiteEngagementInfo_Data>>> info;

 private:
  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data() : header_({sizeof(*this), 0}) {
  }
  ~SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data) == 16,
              "Bad sizeof(SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data)");
const uint32_t kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name = 1;
class SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data {
 public:
  static SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data* New(mojo::internal::Buffer* buf) {
    return new (buf->Allocate(sizeof(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data))) SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data();
  }

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> origin;
  double score;

 private:
  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data() : header_({sizeof(*this), 0}) {
  }
  ~SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data() = delete;
};
static_assert(sizeof(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data) == 24,
              "Bad sizeof(SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_SHARED_INTERNAL_H_