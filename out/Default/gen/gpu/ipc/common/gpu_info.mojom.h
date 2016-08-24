// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_H_

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
#include "gpu/ipc/common/gpu_info.mojom-shared.h"
#include "gpu/ipc/common/dx_diag_node.mojom.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "ui/gfx/geometry/insets.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace gpu {
namespace mojom {
class GpuDevice;
class GpuDeviceDataView;
using GpuDevicePtr = mojo::StructPtr<GpuDevice>;

class VideoDecodeAcceleratorSupportedProfile;
class VideoDecodeAcceleratorSupportedProfileDataView;
using VideoDecodeAcceleratorSupportedProfilePtr = mojo::StructPtr<VideoDecodeAcceleratorSupportedProfile>;

class VideoDecodeAcceleratorCapabilities;
class VideoDecodeAcceleratorCapabilitiesDataView;
using VideoDecodeAcceleratorCapabilitiesPtr = mojo::InlinedStructPtr<VideoDecodeAcceleratorCapabilities>;

class VideoEncodeAcceleratorSupportedProfile;
class VideoEncodeAcceleratorSupportedProfileDataView;
using VideoEncodeAcceleratorSupportedProfilePtr = mojo::StructPtr<VideoEncodeAcceleratorSupportedProfile>;

class GpuInfo;
class GpuInfoDataView;
using GpuInfoPtr = mojo::StructPtr<GpuInfo>;





class  VideoDecodeAcceleratorCapabilities {
 public:
  using DataView = VideoDecodeAcceleratorCapabilitiesDataView;
  using Data_ = internal::VideoDecodeAcceleratorCapabilities_Data;

  static VideoDecodeAcceleratorCapabilitiesPtr New();

  template <typename U>
  static VideoDecodeAcceleratorCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VideoDecodeAcceleratorCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecodeAcceleratorCapabilities>::Convert(*this);
  }

  VideoDecodeAcceleratorCapabilities();
  ~VideoDecodeAcceleratorCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecodeAcceleratorCapabilitiesPtr>
  VideoDecodeAcceleratorCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecodeAcceleratorCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VideoDecodeAcceleratorCapabilitiesPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VideoDecodeAcceleratorCapabilitiesPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t flags;
};

class VideoDecodeAcceleratorCapabilitiesDataView {
 public:
  VideoDecodeAcceleratorCapabilitiesDataView() {}

  VideoDecodeAcceleratorCapabilitiesDataView(
      internal::VideoDecodeAcceleratorCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t flags() const {
    return data_->flags;
  }
 private:
  internal::VideoDecodeAcceleratorCapabilities_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView> {
  using MojomType = ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {







class  GpuDevice {
 public:
  using DataView = GpuDeviceDataView;
  using Data_ = internal::GpuDevice_Data;

  static GpuDevicePtr New();

  template <typename U>
  static GpuDevicePtr From(const U& u) {
    return mojo::TypeConverter<GpuDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuDevice>::Convert(*this);
  }

  GpuDevice();
  ~GpuDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuDevicePtr>
  GpuDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        GpuDevicePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        GpuDevicePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t vendor_id;
  uint32_t device_id;
  bool active;
  std::string vendor_string;
  std::string device_string;
};

class GpuDeviceDataView {
 public:
  GpuDeviceDataView() {}

  GpuDeviceDataView(
      internal::GpuDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t vendor_id() const {
    return data_->vendor_id;
  }
  uint32_t device_id() const {
    return data_->device_id;
  }
  bool active() const {
    return data_->active;
  }
  inline void GetVendorStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadVendorString(UserType* output) {
    auto pointer = data_->vendor_string.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDeviceStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDeviceString(UserType* output) {
    auto pointer = data_->device_string.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::GpuDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::GpuDeviceDataView> {
  using MojomType = ::gpu::mojom::GpuDevicePtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {



class  VideoDecodeAcceleratorSupportedProfile {
 public:
  using DataView = VideoDecodeAcceleratorSupportedProfileDataView;
  using Data_ = internal::VideoDecodeAcceleratorSupportedProfile_Data;

  static VideoDecodeAcceleratorSupportedProfilePtr New();

  template <typename U>
  static VideoDecodeAcceleratorSupportedProfilePtr From(const U& u) {
    return mojo::TypeConverter<VideoDecodeAcceleratorSupportedProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecodeAcceleratorSupportedProfile>::Convert(*this);
  }

  VideoDecodeAcceleratorSupportedProfile();
  ~VideoDecodeAcceleratorSupportedProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecodeAcceleratorSupportedProfilePtr>
  VideoDecodeAcceleratorSupportedProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecodeAcceleratorSupportedProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VideoDecodeAcceleratorSupportedProfilePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VideoDecodeAcceleratorSupportedProfilePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gpu::VideoCodecProfile profile;
  gfx::Size max_resolution;
  gfx::Size min_resolution;
  bool encrypted_only;
};

class VideoDecodeAcceleratorSupportedProfileDataView {
 public:
  VideoDecodeAcceleratorSupportedProfileDataView() {}

  VideoDecodeAcceleratorSupportedProfileDataView(
      internal::VideoDecodeAcceleratorSupportedProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::gpu::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::gpu::mojom::VideoCodecProfile profile() const {
    return static_cast<::gpu::mojom::VideoCodecProfile>(data_->profile);
  }
  inline void GetMaxResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadMaxResolution(UserType* output) {
    auto pointer = data_->max_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetMinResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadMinResolution(UserType* output) {
    auto pointer = data_->min_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  bool encrypted_only() const {
    return data_->encrypted_only;
  }
 private:
  internal::VideoDecodeAcceleratorSupportedProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView> {
  using MojomType = ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {




class  VideoEncodeAcceleratorSupportedProfile {
 public:
  using DataView = VideoEncodeAcceleratorSupportedProfileDataView;
  using Data_ = internal::VideoEncodeAcceleratorSupportedProfile_Data;

  static VideoEncodeAcceleratorSupportedProfilePtr New();

  template <typename U>
  static VideoEncodeAcceleratorSupportedProfilePtr From(const U& u) {
    return mojo::TypeConverter<VideoEncodeAcceleratorSupportedProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoEncodeAcceleratorSupportedProfile>::Convert(*this);
  }

  VideoEncodeAcceleratorSupportedProfile();
  ~VideoEncodeAcceleratorSupportedProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoEncodeAcceleratorSupportedProfilePtr>
  VideoEncodeAcceleratorSupportedProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoEncodeAcceleratorSupportedProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VideoEncodeAcceleratorSupportedProfilePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VideoEncodeAcceleratorSupportedProfilePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gpu::VideoCodecProfile profile;
  gfx::Size max_resolution;
  uint32_t max_framerate_numerator;
  uint32_t max_framerate_denominator;
};

class VideoEncodeAcceleratorSupportedProfileDataView {
 public:
  VideoEncodeAcceleratorSupportedProfileDataView() {}

  VideoEncodeAcceleratorSupportedProfileDataView(
      internal::VideoEncodeAcceleratorSupportedProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::gpu::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::gpu::mojom::VideoCodecProfile profile() const {
    return static_cast<::gpu::mojom::VideoCodecProfile>(data_->profile);
  }
  inline void GetMaxResolutionDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadMaxResolution(UserType* output) {
    auto pointer = data_->max_resolution.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  uint32_t max_framerate_numerator() const {
    return data_->max_framerate_numerator;
  }
  uint32_t max_framerate_denominator() const {
    return data_->max_framerate_denominator;
  }
 private:
  internal::VideoEncodeAcceleratorSupportedProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView> {
  using MojomType = ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {



class  GpuInfo {
 public:
  using DataView = GpuInfoDataView;
  using Data_ = internal::GpuInfo_Data;

  static GpuInfoPtr New();

  template <typename U>
  static GpuInfoPtr From(const U& u) {
    return mojo::TypeConverter<GpuInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuInfo>::Convert(*this);
  }

  GpuInfo();
  ~GpuInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuInfoPtr>
  GpuInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        GpuInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        GpuInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  base::TimeDelta initialization_time;
  bool optimus;
  bool amd_switchable;
  bool lenovo_dcute;
  base::Optional<base::Version> display_link_version;
  gpu::GPUInfo::GPUDevice gpu;
  std::vector<gpu::GPUInfo::GPUDevice> secondary_gpus;
  uint64_t adapter_luid;
  std::string driver_vendor;
  std::string driver_version;
  std::string driver_date;
  std::string pixel_shader_version;
  std::string vertex_shader_version;
  std::string max_msaa_samples;
  std::string machine_model_name;
  std::string machine_model_version;
  std::string gl_version;
  std::string gl_vendor;
  std::string gl_renderer;
  std::string gl_extensions;
  std::string gl_ws_vendor;
  std::string gl_ws_version;
  std::string gl_ws_extensions;
  uint32_t gl_reset_notification_strategy;
  bool software_rendering;
  bool direct_rendering;
  bool sandboxed;
  int32_t process_crash_count;
  bool in_process_gpu;
  gpu::CollectInfoResult basic_info_state;
  gpu::CollectInfoResult context_info_state;
  gpu::CollectInfoResult dx_diagnostics_info_state;
  base::Optional<gpu::DxDiagNode> dx_diagnostics;
  gpu::VideoDecodeAcceleratorCapabilities video_decode_accelerator_capabilities;
  std::vector<gpu::VideoEncodeAcceleratorSupportedProfile> video_encode_accelerator_supported_profiles;
  bool jpeg_decode_accelerator_supported;
};

class GpuInfoDataView {
 public:
  GpuInfoDataView() {}

  GpuInfoDataView(
      internal::GpuInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInitializationTimeDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadInitializationTime(UserType* output) {
    auto pointer = data_->initialization_time.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  bool optimus() const {
    return data_->optimus;
  }
  bool amd_switchable() const {
    return data_->amd_switchable;
  }
  bool lenovo_dcute() const {
    return data_->lenovo_dcute;
  }
  inline void GetDisplayLinkVersionDataView(
      ::mojo::common::mojom::VersionDataView* output);

  template <typename UserType>
  bool ReadDisplayLinkVersion(UserType* output) {
    auto pointer = data_->display_link_version.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::VersionPtr>(
        pointer, output, context_);
  }
  inline void GetGpuDataView(
      GpuDeviceDataView* output);

  template <typename UserType>
  bool ReadGpu(UserType* output) {
    auto pointer = data_->gpu.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuDevicePtr>(
        pointer, output, context_);
  }
  inline void GetSecondaryGpusDataView(
      mojo::ArrayDataView<GpuDeviceDataView>* output);

  template <typename UserType>
  bool ReadSecondaryGpus(UserType* output) {
    auto pointer = data_->secondary_gpus.Get();
    return mojo::internal::Deserialize<mojo::Array<::gpu::mojom::GpuDevicePtr>>(
        pointer, output, context_);
  }
  uint64_t adapter_luid() const {
    return data_->adapter_luid;
  }
  inline void GetDriverVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDriverVendor(UserType* output) {
    auto pointer = data_->driver_vendor.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDriverVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDriverVersion(UserType* output) {
    auto pointer = data_->driver_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDriverDateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDriverDate(UserType* output) {
    auto pointer = data_->driver_date.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPixelShaderVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPixelShaderVersion(UserType* output) {
    auto pointer = data_->pixel_shader_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetVertexShaderVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadVertexShaderVersion(UserType* output) {
    auto pointer = data_->vertex_shader_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetMaxMsaaSamplesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMaxMsaaSamples(UserType* output) {
    auto pointer = data_->max_msaa_samples.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetMachineModelNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMachineModelName(UserType* output) {
    auto pointer = data_->machine_model_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetMachineModelVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMachineModelVersion(UserType* output) {
    auto pointer = data_->machine_model_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlVersion(UserType* output) {
    auto pointer = data_->gl_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlVendor(UserType* output) {
    auto pointer = data_->gl_vendor.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlRendererDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlRenderer(UserType* output) {
    auto pointer = data_->gl_renderer.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlExtensions(UserType* output) {
    auto pointer = data_->gl_extensions.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlWsVendorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlWsVendor(UserType* output) {
    auto pointer = data_->gl_ws_vendor.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlWsVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlWsVersion(UserType* output) {
    auto pointer = data_->gl_ws_version.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetGlWsExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGlWsExtensions(UserType* output) {
    auto pointer = data_->gl_ws_extensions.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint32_t gl_reset_notification_strategy() const {
    return data_->gl_reset_notification_strategy;
  }
  bool software_rendering() const {
    return data_->software_rendering;
  }
  bool direct_rendering() const {
    return data_->direct_rendering;
  }
  bool sandboxed() const {
    return data_->sandboxed;
  }
  int32_t process_crash_count() const {
    return data_->process_crash_count;
  }
  bool in_process_gpu() const {
    return data_->in_process_gpu;
  }
  template <typename UserType>
  bool ReadBasicInfoState(UserType* output) const {
    auto data_value = data_->basic_info_state;
    return mojo::internal::Deserialize<::gpu::mojom::CollectInfoResult>(
        data_value, output);
  }

  ::gpu::mojom::CollectInfoResult basic_info_state() const {
    return static_cast<::gpu::mojom::CollectInfoResult>(data_->basic_info_state);
  }
  template <typename UserType>
  bool ReadContextInfoState(UserType* output) const {
    auto data_value = data_->context_info_state;
    return mojo::internal::Deserialize<::gpu::mojom::CollectInfoResult>(
        data_value, output);
  }

  ::gpu::mojom::CollectInfoResult context_info_state() const {
    return static_cast<::gpu::mojom::CollectInfoResult>(data_->context_info_state);
  }
  template <typename UserType>
  bool ReadDxDiagnosticsInfoState(UserType* output) const {
    auto data_value = data_->dx_diagnostics_info_state;
    return mojo::internal::Deserialize<::gpu::mojom::CollectInfoResult>(
        data_value, output);
  }

  ::gpu::mojom::CollectInfoResult dx_diagnostics_info_state() const {
    return static_cast<::gpu::mojom::CollectInfoResult>(data_->dx_diagnostics_info_state);
  }
  inline void GetDxDiagnosticsDataView(
      ::gpu::mojom::DxDiagNodeDataView* output);

  template <typename UserType>
  bool ReadDxDiagnostics(UserType* output) {
    auto pointer = data_->dx_diagnostics.Get();
    return mojo::internal::Deserialize<::gpu::mojom::DxDiagNodePtr>(
        pointer, output, context_);
  }
  inline void GetVideoDecodeAcceleratorCapabilitiesDataView(
      VideoDecodeAcceleratorCapabilitiesDataView* output);

  template <typename UserType>
  bool ReadVideoDecodeAcceleratorCapabilities(UserType* output) {
    auto pointer = data_->video_decode_accelerator_capabilities.Get();
    return mojo::internal::Deserialize<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr>(
        pointer, output, context_);
  }
  inline void GetVideoEncodeAcceleratorSupportedProfilesDataView(
      mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>* output);

  template <typename UserType>
  bool ReadVideoEncodeAcceleratorSupportedProfiles(UserType* output) {
    auto pointer = data_->video_encode_accelerator_supported_profiles.Get();
    return mojo::internal::Deserialize<mojo::Array<::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr>>(
        pointer, output, context_);
  }
  bool jpeg_decode_accelerator_supported() const {
    return data_->jpeg_decode_accelerator_supported;
  }
 private:
  internal::GpuInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gpu::mojom::GpuInfoDataView> {
  using MojomType = ::gpu::mojom::GpuInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gpu {
namespace mojom {


template <typename StructPtrType>
GpuDevicePtr GpuDevice::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->vendor_id = mojo::internal::Clone(vendor_id);
  rv->device_id = mojo::internal::Clone(device_id);
  rv->active = mojo::internal::Clone(active);
  rv->vendor_string = mojo::internal::Clone(vendor_string);
  rv->device_string = mojo::internal::Clone(device_string);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuDevice>::value>::type*>
bool GpuDevice::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::Equals(this->device_id, other.device_id))
    return false;
  if (!mojo::internal::Equals(this->active, other.active))
    return false;
  if (!mojo::internal::Equals(this->vendor_string, other.vendor_string))
    return false;
  if (!mojo::internal::Equals(this->device_string, other.device_string))
    return false;
  return true;
}

inline void GpuDeviceDataView::GetVendorStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->vendor_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuDeviceDataView::GetDeviceStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
VideoDecodeAcceleratorSupportedProfilePtr VideoDecodeAcceleratorSupportedProfile::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->profile = mojo::internal::Clone(profile);
  rv->max_resolution = mojo::internal::Clone(max_resolution);
  rv->min_resolution = mojo::internal::Clone(min_resolution);
  rv->encrypted_only = mojo::internal::Clone(encrypted_only);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecodeAcceleratorSupportedProfile>::value>::type*>
bool VideoDecodeAcceleratorSupportedProfile::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->profile, other.profile))
    return false;
  if (!mojo::internal::Equals(this->max_resolution, other.max_resolution))
    return false;
  if (!mojo::internal::Equals(this->min_resolution, other.min_resolution))
    return false;
  if (!mojo::internal::Equals(this->encrypted_only, other.encrypted_only))
    return false;
  return true;
}

inline void VideoDecodeAcceleratorSupportedProfileDataView::GetMaxResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecodeAcceleratorSupportedProfileDataView::GetMinResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->min_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}

template <typename StructPtrType>
VideoDecodeAcceleratorCapabilitiesPtr VideoDecodeAcceleratorCapabilities::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->flags = mojo::internal::Clone(flags);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecodeAcceleratorCapabilities>::value>::type*>
bool VideoDecodeAcceleratorCapabilities::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->flags, other.flags))
    return false;
  return true;
}


template <typename StructPtrType>
VideoEncodeAcceleratorSupportedProfilePtr VideoEncodeAcceleratorSupportedProfile::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->profile = mojo::internal::Clone(profile);
  rv->max_resolution = mojo::internal::Clone(max_resolution);
  rv->max_framerate_numerator = mojo::internal::Clone(max_framerate_numerator);
  rv->max_framerate_denominator = mojo::internal::Clone(max_framerate_denominator);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoEncodeAcceleratorSupportedProfile>::value>::type*>
bool VideoEncodeAcceleratorSupportedProfile::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->profile, other.profile))
    return false;
  if (!mojo::internal::Equals(this->max_resolution, other.max_resolution))
    return false;
  if (!mojo::internal::Equals(this->max_framerate_numerator, other.max_framerate_numerator))
    return false;
  if (!mojo::internal::Equals(this->max_framerate_denominator, other.max_framerate_denominator))
    return false;
  return true;
}

inline void VideoEncodeAcceleratorSupportedProfileDataView::GetMaxResolutionDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->max_resolution.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}

template <typename StructPtrType>
GpuInfoPtr GpuInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->initialization_time = mojo::internal::Clone(initialization_time);
  rv->optimus = mojo::internal::Clone(optimus);
  rv->amd_switchable = mojo::internal::Clone(amd_switchable);
  rv->lenovo_dcute = mojo::internal::Clone(lenovo_dcute);
  rv->display_link_version = mojo::internal::Clone(display_link_version);
  rv->gpu = mojo::internal::Clone(gpu);
  rv->secondary_gpus = mojo::internal::Clone(secondary_gpus);
  rv->adapter_luid = mojo::internal::Clone(adapter_luid);
  rv->driver_vendor = mojo::internal::Clone(driver_vendor);
  rv->driver_version = mojo::internal::Clone(driver_version);
  rv->driver_date = mojo::internal::Clone(driver_date);
  rv->pixel_shader_version = mojo::internal::Clone(pixel_shader_version);
  rv->vertex_shader_version = mojo::internal::Clone(vertex_shader_version);
  rv->max_msaa_samples = mojo::internal::Clone(max_msaa_samples);
  rv->machine_model_name = mojo::internal::Clone(machine_model_name);
  rv->machine_model_version = mojo::internal::Clone(machine_model_version);
  rv->gl_version = mojo::internal::Clone(gl_version);
  rv->gl_vendor = mojo::internal::Clone(gl_vendor);
  rv->gl_renderer = mojo::internal::Clone(gl_renderer);
  rv->gl_extensions = mojo::internal::Clone(gl_extensions);
  rv->gl_ws_vendor = mojo::internal::Clone(gl_ws_vendor);
  rv->gl_ws_version = mojo::internal::Clone(gl_ws_version);
  rv->gl_ws_extensions = mojo::internal::Clone(gl_ws_extensions);
  rv->gl_reset_notification_strategy = mojo::internal::Clone(gl_reset_notification_strategy);
  rv->software_rendering = mojo::internal::Clone(software_rendering);
  rv->direct_rendering = mojo::internal::Clone(direct_rendering);
  rv->sandboxed = mojo::internal::Clone(sandboxed);
  rv->process_crash_count = mojo::internal::Clone(process_crash_count);
  rv->in_process_gpu = mojo::internal::Clone(in_process_gpu);
  rv->basic_info_state = mojo::internal::Clone(basic_info_state);
  rv->context_info_state = mojo::internal::Clone(context_info_state);
  rv->dx_diagnostics_info_state = mojo::internal::Clone(dx_diagnostics_info_state);
  rv->dx_diagnostics = mojo::internal::Clone(dx_diagnostics);
  rv->video_decode_accelerator_capabilities = mojo::internal::Clone(video_decode_accelerator_capabilities);
  rv->video_encode_accelerator_supported_profiles = mojo::internal::Clone(video_encode_accelerator_supported_profiles);
  rv->jpeg_decode_accelerator_supported = mojo::internal::Clone(jpeg_decode_accelerator_supported);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuInfo>::value>::type*>
bool GpuInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->initialization_time, other.initialization_time))
    return false;
  if (!mojo::internal::Equals(this->optimus, other.optimus))
    return false;
  if (!mojo::internal::Equals(this->amd_switchable, other.amd_switchable))
    return false;
  if (!mojo::internal::Equals(this->lenovo_dcute, other.lenovo_dcute))
    return false;
  if (!mojo::internal::Equals(this->display_link_version, other.display_link_version))
    return false;
  if (!mojo::internal::Equals(this->gpu, other.gpu))
    return false;
  if (!mojo::internal::Equals(this->secondary_gpus, other.secondary_gpus))
    return false;
  if (!mojo::internal::Equals(this->adapter_luid, other.adapter_luid))
    return false;
  if (!mojo::internal::Equals(this->driver_vendor, other.driver_vendor))
    return false;
  if (!mojo::internal::Equals(this->driver_version, other.driver_version))
    return false;
  if (!mojo::internal::Equals(this->driver_date, other.driver_date))
    return false;
  if (!mojo::internal::Equals(this->pixel_shader_version, other.pixel_shader_version))
    return false;
  if (!mojo::internal::Equals(this->vertex_shader_version, other.vertex_shader_version))
    return false;
  if (!mojo::internal::Equals(this->max_msaa_samples, other.max_msaa_samples))
    return false;
  if (!mojo::internal::Equals(this->machine_model_name, other.machine_model_name))
    return false;
  if (!mojo::internal::Equals(this->machine_model_version, other.machine_model_version))
    return false;
  if (!mojo::internal::Equals(this->gl_version, other.gl_version))
    return false;
  if (!mojo::internal::Equals(this->gl_vendor, other.gl_vendor))
    return false;
  if (!mojo::internal::Equals(this->gl_renderer, other.gl_renderer))
    return false;
  if (!mojo::internal::Equals(this->gl_extensions, other.gl_extensions))
    return false;
  if (!mojo::internal::Equals(this->gl_ws_vendor, other.gl_ws_vendor))
    return false;
  if (!mojo::internal::Equals(this->gl_ws_version, other.gl_ws_version))
    return false;
  if (!mojo::internal::Equals(this->gl_ws_extensions, other.gl_ws_extensions))
    return false;
  if (!mojo::internal::Equals(this->gl_reset_notification_strategy, other.gl_reset_notification_strategy))
    return false;
  if (!mojo::internal::Equals(this->software_rendering, other.software_rendering))
    return false;
  if (!mojo::internal::Equals(this->direct_rendering, other.direct_rendering))
    return false;
  if (!mojo::internal::Equals(this->sandboxed, other.sandboxed))
    return false;
  if (!mojo::internal::Equals(this->process_crash_count, other.process_crash_count))
    return false;
  if (!mojo::internal::Equals(this->in_process_gpu, other.in_process_gpu))
    return false;
  if (!mojo::internal::Equals(this->basic_info_state, other.basic_info_state))
    return false;
  if (!mojo::internal::Equals(this->context_info_state, other.context_info_state))
    return false;
  if (!mojo::internal::Equals(this->dx_diagnostics_info_state, other.dx_diagnostics_info_state))
    return false;
  if (!mojo::internal::Equals(this->dx_diagnostics, other.dx_diagnostics))
    return false;
  if (!mojo::internal::Equals(this->video_decode_accelerator_capabilities, other.video_decode_accelerator_capabilities))
    return false;
  if (!mojo::internal::Equals(this->video_encode_accelerator_supported_profiles, other.video_encode_accelerator_supported_profiles))
    return false;
  if (!mojo::internal::Equals(this->jpeg_decode_accelerator_supported, other.jpeg_decode_accelerator_supported))
    return false;
  return true;
}

inline void GpuInfoDataView::GetInitializationTimeDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->initialization_time.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void GpuInfoDataView::GetDisplayLinkVersionDataView(
    ::mojo::common::mojom::VersionDataView* output) {
  auto pointer = data_->display_link_version.Get();
  *output = ::mojo::common::mojom::VersionDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGpuDataView(
    GpuDeviceDataView* output) {
  auto pointer = data_->gpu.Get();
  *output = GpuDeviceDataView(pointer, context_);
}
inline void GpuInfoDataView::GetSecondaryGpusDataView(
    mojo::ArrayDataView<GpuDeviceDataView>* output) {
  auto pointer = data_->secondary_gpus.Get();
  *output = mojo::ArrayDataView<GpuDeviceDataView>(pointer, context_);
}
inline void GpuInfoDataView::GetDriverVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetDriverVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetDriverDateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->driver_date.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetPixelShaderVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->pixel_shader_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVertexShaderVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->vertex_shader_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMaxMsaaSamplesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->max_msaa_samples.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMachineModelNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->machine_model_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetMachineModelVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->machine_model_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlRendererDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_renderer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsVendorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_vendor.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_version.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetGlWsExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gl_ws_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuInfoDataView::GetDxDiagnosticsDataView(
    ::gpu::mojom::DxDiagNodeDataView* output) {
  auto pointer = data_->dx_diagnostics.Get();
  *output = ::gpu::mojom::DxDiagNodeDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVideoDecodeAcceleratorCapabilitiesDataView(
    VideoDecodeAcceleratorCapabilitiesDataView* output) {
  auto pointer = data_->video_decode_accelerator_capabilities.Get();
  *output = VideoDecodeAcceleratorCapabilitiesDataView(pointer, context_);
}
inline void GpuInfoDataView::GetVideoEncodeAcceleratorSupportedProfilesDataView(
    mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>* output) {
  auto pointer = data_->video_encode_accelerator_supported_profiles.Get();
  *output = mojo::ArrayDataView<VideoEncodeAcceleratorSupportedProfileDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::GpuDevice, ::gpu::mojom::GpuDevicePtr> {
  static bool IsNull(const ::gpu::mojom::GpuDevicePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::GpuDevicePtr* output) { output->reset(); }
  static decltype(::gpu::mojom::GpuDevice::vendor_id) vendor_id(
      const ::gpu::mojom::GpuDevicePtr& input) {
    return input->vendor_id;
  }
  static decltype(::gpu::mojom::GpuDevice::device_id) device_id(
      const ::gpu::mojom::GpuDevicePtr& input) {
    return input->device_id;
  }
  static decltype(::gpu::mojom::GpuDevice::active) active(
      const ::gpu::mojom::GpuDevicePtr& input) {
    return input->active;
  }
  static decltype(::gpu::mojom::GpuDevice::vendor_string)& vendor_string(
      ::gpu::mojom::GpuDevicePtr& input) {
    return input->vendor_string;
  }
  static decltype(::gpu::mojom::GpuDevice::device_string)& device_string(
      ::gpu::mojom::GpuDevicePtr& input) {
    return input->device_string;
  }

  static bool Read(::gpu::mojom::GpuDeviceDataView input, ::gpu::mojom::GpuDevicePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuDevicePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuDevice, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::GpuDevice_Data);
    decltype(CallWithContext(Traits::vendor_string, input, custom_context)) in_vendor_string = CallWithContext(Traits::vendor_string, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_vendor_string, context);
    decltype(CallWithContext(Traits::device_string, input, custom_context)) in_device_string = CallWithContext(Traits::device_string, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_device_string, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuDevice_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::GpuDevice_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
      result->device_id = CallWithContext(Traits::device_id, input, custom_context);
      result->active = CallWithContext(Traits::active, input, custom_context);
      decltype(CallWithContext(Traits::vendor_string, input, custom_context)) in_vendor_string = CallWithContext(Traits::vendor_string, input, custom_context);
      typename decltype(result->vendor_string)::BaseType* vendor_string_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_vendor_string, buffer, &vendor_string_ptr, context);
      result->vendor_string.Set(vendor_string_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->vendor_string.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null vendor_string in GpuDevice struct");
      decltype(CallWithContext(Traits::device_string, input, custom_context)) in_device_string = CallWithContext(Traits::device_string, input, custom_context);
      typename decltype(result->device_string)::BaseType* device_string_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_device_string, buffer, &device_string_ptr, context);
      result->device_string.Set(device_string_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->device_string.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null device_string in GpuDevice struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::GpuDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfile, ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr> {
  static bool IsNull(const ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr* output) { output->reset(); }
  static decltype(::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::profile) profile(
      const ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->profile;
  }
  static decltype(::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::max_resolution)& max_resolution(
      ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->max_resolution;
  }
  static decltype(::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::min_resolution)& min_resolution(
      ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->min_resolution;
  }
  static decltype(::gpu::mojom::VideoDecodeAcceleratorSupportedProfile::encrypted_only) encrypted_only(
      const ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->encrypted_only;
  }

  static bool Read(::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView input, ::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoDecodeAcceleratorSupportedProfilePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoDecodeAcceleratorSupportedProfile, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data);
    decltype(CallWithContext(Traits::max_resolution, input, custom_context)) in_max_resolution = CallWithContext(Traits::max_resolution, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_max_resolution, context);
    decltype(CallWithContext(Traits::min_resolution, input, custom_context)) in_min_resolution = CallWithContext(Traits::min_resolution, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_min_resolution, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::gpu::mojom::VideoCodecProfile>(
          CallWithContext(Traits::profile, input, custom_context), &result->profile);
      decltype(CallWithContext(Traits::max_resolution, input, custom_context)) in_max_resolution = CallWithContext(Traits::max_resolution, input, custom_context);
      typename decltype(result->max_resolution)::BaseType* max_resolution_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_max_resolution, buffer, &max_resolution_ptr, context);
      result->max_resolution.Set(max_resolution_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->max_resolution.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null max_resolution in VideoDecodeAcceleratorSupportedProfile struct");
      decltype(CallWithContext(Traits::min_resolution, input, custom_context)) in_min_resolution = CallWithContext(Traits::min_resolution, input, custom_context);
      typename decltype(result->min_resolution)::BaseType* min_resolution_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_min_resolution, buffer, &min_resolution_ptr, context);
      result->min_resolution.Set(min_resolution_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->min_resolution.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null min_resolution in VideoDecodeAcceleratorSupportedProfile struct");
      result->encrypted_only = CallWithContext(Traits::encrypted_only, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoDecodeAcceleratorSupportedProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoDecodeAcceleratorSupportedProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilities, ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr> {
  static bool IsNull(const ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr* output) { output->reset(); }
  static decltype(::gpu::mojom::VideoDecodeAcceleratorCapabilities::flags) flags(
      const ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr& input) {
    return input->flags;
  }

  static bool Read(::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView input, ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoDecodeAcceleratorCapabilities, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->flags = CallWithContext(Traits::flags, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoDecodeAcceleratorCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoDecodeAcceleratorCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfile, ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr> {
  static bool IsNull(const ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr* output) { output->reset(); }
  static decltype(::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::profile) profile(
      const ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->profile;
  }
  static decltype(::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::max_resolution)& max_resolution(
      ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_resolution;
  }
  static decltype(::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::max_framerate_numerator) max_framerate_numerator(
      const ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_framerate_numerator;
  }
  static decltype(::gpu::mojom::VideoEncodeAcceleratorSupportedProfile::max_framerate_denominator) max_framerate_denominator(
      const ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_framerate_denominator;
  }

  static bool Read(::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView input, ::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoEncodeAcceleratorSupportedProfile, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data);
    decltype(CallWithContext(Traits::max_resolution, input, custom_context)) in_max_resolution = CallWithContext(Traits::max_resolution, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_max_resolution, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::gpu::mojom::VideoCodecProfile>(
          CallWithContext(Traits::profile, input, custom_context), &result->profile);
      decltype(CallWithContext(Traits::max_resolution, input, custom_context)) in_max_resolution = CallWithContext(Traits::max_resolution, input, custom_context);
      typename decltype(result->max_resolution)::BaseType* max_resolution_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_max_resolution, buffer, &max_resolution_ptr, context);
      result->max_resolution.Set(max_resolution_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->max_resolution.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null max_resolution in VideoEncodeAcceleratorSupportedProfile struct");
      result->max_framerate_numerator = CallWithContext(Traits::max_framerate_numerator, input, custom_context);
      result->max_framerate_denominator = CallWithContext(Traits::max_framerate_denominator, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoEncodeAcceleratorSupportedProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoEncodeAcceleratorSupportedProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gpu::mojom::GpuInfo, ::gpu::mojom::GpuInfoPtr> {
  static bool IsNull(const ::gpu::mojom::GpuInfoPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::GpuInfoPtr* output) { output->reset(); }
  static decltype(::gpu::mojom::GpuInfo::initialization_time)& initialization_time(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->initialization_time;
  }
  static decltype(::gpu::mojom::GpuInfo::optimus) optimus(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->optimus;
  }
  static decltype(::gpu::mojom::GpuInfo::amd_switchable) amd_switchable(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->amd_switchable;
  }
  static decltype(::gpu::mojom::GpuInfo::lenovo_dcute) lenovo_dcute(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->lenovo_dcute;
  }
  static decltype(::gpu::mojom::GpuInfo::display_link_version)& display_link_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->display_link_version;
  }
  static decltype(::gpu::mojom::GpuInfo::gpu)& gpu(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gpu;
  }
  static decltype(::gpu::mojom::GpuInfo::secondary_gpus)& secondary_gpus(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->secondary_gpus;
  }
  static decltype(::gpu::mojom::GpuInfo::adapter_luid) adapter_luid(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->adapter_luid;
  }
  static decltype(::gpu::mojom::GpuInfo::driver_vendor)& driver_vendor(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->driver_vendor;
  }
  static decltype(::gpu::mojom::GpuInfo::driver_version)& driver_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->driver_version;
  }
  static decltype(::gpu::mojom::GpuInfo::driver_date)& driver_date(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->driver_date;
  }
  static decltype(::gpu::mojom::GpuInfo::pixel_shader_version)& pixel_shader_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->pixel_shader_version;
  }
  static decltype(::gpu::mojom::GpuInfo::vertex_shader_version)& vertex_shader_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->vertex_shader_version;
  }
  static decltype(::gpu::mojom::GpuInfo::max_msaa_samples)& max_msaa_samples(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->max_msaa_samples;
  }
  static decltype(::gpu::mojom::GpuInfo::machine_model_name)& machine_model_name(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->machine_model_name;
  }
  static decltype(::gpu::mojom::GpuInfo::machine_model_version)& machine_model_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->machine_model_version;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_version)& gl_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_version;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_vendor)& gl_vendor(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_vendor;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_renderer)& gl_renderer(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_renderer;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_extensions)& gl_extensions(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_extensions;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_ws_vendor)& gl_ws_vendor(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_ws_vendor;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_ws_version)& gl_ws_version(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_ws_version;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_ws_extensions)& gl_ws_extensions(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_ws_extensions;
  }
  static decltype(::gpu::mojom::GpuInfo::gl_reset_notification_strategy) gl_reset_notification_strategy(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->gl_reset_notification_strategy;
  }
  static decltype(::gpu::mojom::GpuInfo::software_rendering) software_rendering(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->software_rendering;
  }
  static decltype(::gpu::mojom::GpuInfo::direct_rendering) direct_rendering(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->direct_rendering;
  }
  static decltype(::gpu::mojom::GpuInfo::sandboxed) sandboxed(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->sandboxed;
  }
  static decltype(::gpu::mojom::GpuInfo::process_crash_count) process_crash_count(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->process_crash_count;
  }
  static decltype(::gpu::mojom::GpuInfo::in_process_gpu) in_process_gpu(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->in_process_gpu;
  }
  static decltype(::gpu::mojom::GpuInfo::basic_info_state) basic_info_state(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->basic_info_state;
  }
  static decltype(::gpu::mojom::GpuInfo::context_info_state) context_info_state(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->context_info_state;
  }
  static decltype(::gpu::mojom::GpuInfo::dx_diagnostics_info_state) dx_diagnostics_info_state(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->dx_diagnostics_info_state;
  }
  static decltype(::gpu::mojom::GpuInfo::dx_diagnostics)& dx_diagnostics(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->dx_diagnostics;
  }
  static decltype(::gpu::mojom::GpuInfo::video_decode_accelerator_capabilities)& video_decode_accelerator_capabilities(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->video_decode_accelerator_capabilities;
  }
  static decltype(::gpu::mojom::GpuInfo::video_encode_accelerator_supported_profiles)& video_encode_accelerator_supported_profiles(
      ::gpu::mojom::GpuInfoPtr& input) {
    return input->video_encode_accelerator_supported_profiles;
  }
  static decltype(::gpu::mojom::GpuInfo::jpeg_decode_accelerator_supported) jpeg_decode_accelerator_supported(
      const ::gpu::mojom::GpuInfoPtr& input) {
    return input->jpeg_decode_accelerator_supported;
  }

  static bool Read(::gpu::mojom::GpuInfoDataView input, ::gpu::mojom::GpuInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gpu::mojom::internal::GpuInfo_Data);
    decltype(CallWithContext(Traits::initialization_time, input, custom_context)) in_initialization_time = CallWithContext(Traits::initialization_time, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_initialization_time, context);
    decltype(CallWithContext(Traits::display_link_version, input, custom_context)) in_display_link_version = CallWithContext(Traits::display_link_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::VersionPtr>(
        in_display_link_version, context);
    decltype(CallWithContext(Traits::gpu, input, custom_context)) in_gpu = CallWithContext(Traits::gpu, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::GpuDevicePtr>(
        in_gpu, context);
    decltype(CallWithContext(Traits::secondary_gpus, input, custom_context)) in_secondary_gpus = CallWithContext(Traits::secondary_gpus, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::gpu::mojom::GpuDevicePtr>>(
        in_secondary_gpus, context);
    decltype(CallWithContext(Traits::driver_vendor, input, custom_context)) in_driver_vendor = CallWithContext(Traits::driver_vendor, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_driver_vendor, context);
    decltype(CallWithContext(Traits::driver_version, input, custom_context)) in_driver_version = CallWithContext(Traits::driver_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_driver_version, context);
    decltype(CallWithContext(Traits::driver_date, input, custom_context)) in_driver_date = CallWithContext(Traits::driver_date, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_driver_date, context);
    decltype(CallWithContext(Traits::pixel_shader_version, input, custom_context)) in_pixel_shader_version = CallWithContext(Traits::pixel_shader_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_pixel_shader_version, context);
    decltype(CallWithContext(Traits::vertex_shader_version, input, custom_context)) in_vertex_shader_version = CallWithContext(Traits::vertex_shader_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_vertex_shader_version, context);
    decltype(CallWithContext(Traits::max_msaa_samples, input, custom_context)) in_max_msaa_samples = CallWithContext(Traits::max_msaa_samples, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_max_msaa_samples, context);
    decltype(CallWithContext(Traits::machine_model_name, input, custom_context)) in_machine_model_name = CallWithContext(Traits::machine_model_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_machine_model_name, context);
    decltype(CallWithContext(Traits::machine_model_version, input, custom_context)) in_machine_model_version = CallWithContext(Traits::machine_model_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_machine_model_version, context);
    decltype(CallWithContext(Traits::gl_version, input, custom_context)) in_gl_version = CallWithContext(Traits::gl_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_version, context);
    decltype(CallWithContext(Traits::gl_vendor, input, custom_context)) in_gl_vendor = CallWithContext(Traits::gl_vendor, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_vendor, context);
    decltype(CallWithContext(Traits::gl_renderer, input, custom_context)) in_gl_renderer = CallWithContext(Traits::gl_renderer, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_renderer, context);
    decltype(CallWithContext(Traits::gl_extensions, input, custom_context)) in_gl_extensions = CallWithContext(Traits::gl_extensions, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_extensions, context);
    decltype(CallWithContext(Traits::gl_ws_vendor, input, custom_context)) in_gl_ws_vendor = CallWithContext(Traits::gl_ws_vendor, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_ws_vendor, context);
    decltype(CallWithContext(Traits::gl_ws_version, input, custom_context)) in_gl_ws_version = CallWithContext(Traits::gl_ws_version, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_ws_version, context);
    decltype(CallWithContext(Traits::gl_ws_extensions, input, custom_context)) in_gl_ws_extensions = CallWithContext(Traits::gl_ws_extensions, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_gl_ws_extensions, context);
    decltype(CallWithContext(Traits::dx_diagnostics, input, custom_context)) in_dx_diagnostics = CallWithContext(Traits::dx_diagnostics, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::DxDiagNodePtr>(
        in_dx_diagnostics, context);
    decltype(CallWithContext(Traits::video_decode_accelerator_capabilities, input, custom_context)) in_video_decode_accelerator_capabilities = CallWithContext(Traits::video_decode_accelerator_capabilities, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr>(
        in_video_decode_accelerator_capabilities, context);
    decltype(CallWithContext(Traits::video_encode_accelerator_supported_profiles, input, custom_context)) in_video_encode_accelerator_supported_profiles = CallWithContext(Traits::video_encode_accelerator_supported_profiles, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr>>(
        in_video_encode_accelerator_supported_profiles, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gpu::mojom::internal::GpuInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::initialization_time, input, custom_context)) in_initialization_time = CallWithContext(Traits::initialization_time, input, custom_context);
      typename decltype(result->initialization_time)::BaseType* initialization_time_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_initialization_time, buffer, &initialization_time_ptr, context);
      result->initialization_time.Set(initialization_time_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->initialization_time.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null initialization_time in GpuInfo struct");
      result->optimus = CallWithContext(Traits::optimus, input, custom_context);
      result->amd_switchable = CallWithContext(Traits::amd_switchable, input, custom_context);
      result->lenovo_dcute = CallWithContext(Traits::lenovo_dcute, input, custom_context);
      decltype(CallWithContext(Traits::display_link_version, input, custom_context)) in_display_link_version = CallWithContext(Traits::display_link_version, input, custom_context);
      typename decltype(result->display_link_version)::BaseType* display_link_version_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::VersionPtr>(
          in_display_link_version, buffer, &display_link_version_ptr, context);
      result->display_link_version.Set(display_link_version_ptr);
      decltype(CallWithContext(Traits::gpu, input, custom_context)) in_gpu = CallWithContext(Traits::gpu, input, custom_context);
      typename decltype(result->gpu)::BaseType* gpu_ptr;
      mojo::internal::Serialize<::gpu::mojom::GpuDevicePtr>(
          in_gpu, buffer, &gpu_ptr, context);
      result->gpu.Set(gpu_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gpu.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gpu in GpuInfo struct");
      decltype(CallWithContext(Traits::secondary_gpus, input, custom_context)) in_secondary_gpus = CallWithContext(Traits::secondary_gpus, input, custom_context);
      typename decltype(result->secondary_gpus)::BaseType* secondary_gpus_ptr;
      const mojo::internal::ContainerValidateParams secondary_gpus_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::gpu::mojom::GpuDevicePtr>>(
          in_secondary_gpus, buffer, &secondary_gpus_ptr, &secondary_gpus_validate_params,
          context);
      result->secondary_gpus.Set(secondary_gpus_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->secondary_gpus.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null secondary_gpus in GpuInfo struct");
      result->adapter_luid = CallWithContext(Traits::adapter_luid, input, custom_context);
      decltype(CallWithContext(Traits::driver_vendor, input, custom_context)) in_driver_vendor = CallWithContext(Traits::driver_vendor, input, custom_context);
      typename decltype(result->driver_vendor)::BaseType* driver_vendor_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_driver_vendor, buffer, &driver_vendor_ptr, context);
      result->driver_vendor.Set(driver_vendor_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->driver_vendor.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null driver_vendor in GpuInfo struct");
      decltype(CallWithContext(Traits::driver_version, input, custom_context)) in_driver_version = CallWithContext(Traits::driver_version, input, custom_context);
      typename decltype(result->driver_version)::BaseType* driver_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_driver_version, buffer, &driver_version_ptr, context);
      result->driver_version.Set(driver_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->driver_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null driver_version in GpuInfo struct");
      decltype(CallWithContext(Traits::driver_date, input, custom_context)) in_driver_date = CallWithContext(Traits::driver_date, input, custom_context);
      typename decltype(result->driver_date)::BaseType* driver_date_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_driver_date, buffer, &driver_date_ptr, context);
      result->driver_date.Set(driver_date_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->driver_date.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null driver_date in GpuInfo struct");
      decltype(CallWithContext(Traits::pixel_shader_version, input, custom_context)) in_pixel_shader_version = CallWithContext(Traits::pixel_shader_version, input, custom_context);
      typename decltype(result->pixel_shader_version)::BaseType* pixel_shader_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_pixel_shader_version, buffer, &pixel_shader_version_ptr, context);
      result->pixel_shader_version.Set(pixel_shader_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->pixel_shader_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null pixel_shader_version in GpuInfo struct");
      decltype(CallWithContext(Traits::vertex_shader_version, input, custom_context)) in_vertex_shader_version = CallWithContext(Traits::vertex_shader_version, input, custom_context);
      typename decltype(result->vertex_shader_version)::BaseType* vertex_shader_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_vertex_shader_version, buffer, &vertex_shader_version_ptr, context);
      result->vertex_shader_version.Set(vertex_shader_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->vertex_shader_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null vertex_shader_version in GpuInfo struct");
      decltype(CallWithContext(Traits::max_msaa_samples, input, custom_context)) in_max_msaa_samples = CallWithContext(Traits::max_msaa_samples, input, custom_context);
      typename decltype(result->max_msaa_samples)::BaseType* max_msaa_samples_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_max_msaa_samples, buffer, &max_msaa_samples_ptr, context);
      result->max_msaa_samples.Set(max_msaa_samples_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->max_msaa_samples.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null max_msaa_samples in GpuInfo struct");
      decltype(CallWithContext(Traits::machine_model_name, input, custom_context)) in_machine_model_name = CallWithContext(Traits::machine_model_name, input, custom_context);
      typename decltype(result->machine_model_name)::BaseType* machine_model_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_machine_model_name, buffer, &machine_model_name_ptr, context);
      result->machine_model_name.Set(machine_model_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->machine_model_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null machine_model_name in GpuInfo struct");
      decltype(CallWithContext(Traits::machine_model_version, input, custom_context)) in_machine_model_version = CallWithContext(Traits::machine_model_version, input, custom_context);
      typename decltype(result->machine_model_version)::BaseType* machine_model_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_machine_model_version, buffer, &machine_model_version_ptr, context);
      result->machine_model_version.Set(machine_model_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->machine_model_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null machine_model_version in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_version, input, custom_context)) in_gl_version = CallWithContext(Traits::gl_version, input, custom_context);
      typename decltype(result->gl_version)::BaseType* gl_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_version, buffer, &gl_version_ptr, context);
      result->gl_version.Set(gl_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_version in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_vendor, input, custom_context)) in_gl_vendor = CallWithContext(Traits::gl_vendor, input, custom_context);
      typename decltype(result->gl_vendor)::BaseType* gl_vendor_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_vendor, buffer, &gl_vendor_ptr, context);
      result->gl_vendor.Set(gl_vendor_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_vendor.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_vendor in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_renderer, input, custom_context)) in_gl_renderer = CallWithContext(Traits::gl_renderer, input, custom_context);
      typename decltype(result->gl_renderer)::BaseType* gl_renderer_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_renderer, buffer, &gl_renderer_ptr, context);
      result->gl_renderer.Set(gl_renderer_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_renderer.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_renderer in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_extensions, input, custom_context)) in_gl_extensions = CallWithContext(Traits::gl_extensions, input, custom_context);
      typename decltype(result->gl_extensions)::BaseType* gl_extensions_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_extensions, buffer, &gl_extensions_ptr, context);
      result->gl_extensions.Set(gl_extensions_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_extensions.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_extensions in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_ws_vendor, input, custom_context)) in_gl_ws_vendor = CallWithContext(Traits::gl_ws_vendor, input, custom_context);
      typename decltype(result->gl_ws_vendor)::BaseType* gl_ws_vendor_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_ws_vendor, buffer, &gl_ws_vendor_ptr, context);
      result->gl_ws_vendor.Set(gl_ws_vendor_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_ws_vendor.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_ws_vendor in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_ws_version, input, custom_context)) in_gl_ws_version = CallWithContext(Traits::gl_ws_version, input, custom_context);
      typename decltype(result->gl_ws_version)::BaseType* gl_ws_version_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_ws_version, buffer, &gl_ws_version_ptr, context);
      result->gl_ws_version.Set(gl_ws_version_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_ws_version.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_ws_version in GpuInfo struct");
      decltype(CallWithContext(Traits::gl_ws_extensions, input, custom_context)) in_gl_ws_extensions = CallWithContext(Traits::gl_ws_extensions, input, custom_context);
      typename decltype(result->gl_ws_extensions)::BaseType* gl_ws_extensions_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_gl_ws_extensions, buffer, &gl_ws_extensions_ptr, context);
      result->gl_ws_extensions.Set(gl_ws_extensions_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->gl_ws_extensions.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null gl_ws_extensions in GpuInfo struct");
      result->gl_reset_notification_strategy = CallWithContext(Traits::gl_reset_notification_strategy, input, custom_context);
      result->software_rendering = CallWithContext(Traits::software_rendering, input, custom_context);
      result->direct_rendering = CallWithContext(Traits::direct_rendering, input, custom_context);
      result->sandboxed = CallWithContext(Traits::sandboxed, input, custom_context);
      result->process_crash_count = CallWithContext(Traits::process_crash_count, input, custom_context);
      result->in_process_gpu = CallWithContext(Traits::in_process_gpu, input, custom_context);
      mojo::internal::Serialize<::gpu::mojom::CollectInfoResult>(
          CallWithContext(Traits::basic_info_state, input, custom_context), &result->basic_info_state);
      mojo::internal::Serialize<::gpu::mojom::CollectInfoResult>(
          CallWithContext(Traits::context_info_state, input, custom_context), &result->context_info_state);
      mojo::internal::Serialize<::gpu::mojom::CollectInfoResult>(
          CallWithContext(Traits::dx_diagnostics_info_state, input, custom_context), &result->dx_diagnostics_info_state);
      decltype(CallWithContext(Traits::dx_diagnostics, input, custom_context)) in_dx_diagnostics = CallWithContext(Traits::dx_diagnostics, input, custom_context);
      typename decltype(result->dx_diagnostics)::BaseType* dx_diagnostics_ptr;
      mojo::internal::Serialize<::gpu::mojom::DxDiagNodePtr>(
          in_dx_diagnostics, buffer, &dx_diagnostics_ptr, context);
      result->dx_diagnostics.Set(dx_diagnostics_ptr);
      decltype(CallWithContext(Traits::video_decode_accelerator_capabilities, input, custom_context)) in_video_decode_accelerator_capabilities = CallWithContext(Traits::video_decode_accelerator_capabilities, input, custom_context);
      typename decltype(result->video_decode_accelerator_capabilities)::BaseType* video_decode_accelerator_capabilities_ptr;
      mojo::internal::Serialize<::gpu::mojom::VideoDecodeAcceleratorCapabilitiesPtr>(
          in_video_decode_accelerator_capabilities, buffer, &video_decode_accelerator_capabilities_ptr, context);
      result->video_decode_accelerator_capabilities.Set(video_decode_accelerator_capabilities_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->video_decode_accelerator_capabilities.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null video_decode_accelerator_capabilities in GpuInfo struct");
      decltype(CallWithContext(Traits::video_encode_accelerator_supported_profiles, input, custom_context)) in_video_encode_accelerator_supported_profiles = CallWithContext(Traits::video_encode_accelerator_supported_profiles, input, custom_context);
      typename decltype(result->video_encode_accelerator_supported_profiles)::BaseType* video_encode_accelerator_supported_profiles_ptr;
      const mojo::internal::ContainerValidateParams video_encode_accelerator_supported_profiles_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::gpu::mojom::VideoEncodeAcceleratorSupportedProfilePtr>>(
          in_video_encode_accelerator_supported_profiles, buffer, &video_encode_accelerator_supported_profiles_ptr, &video_encode_accelerator_supported_profiles_validate_params,
          context);
      result->video_encode_accelerator_supported_profiles.Set(video_encode_accelerator_supported_profiles_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->video_encode_accelerator_supported_profiles.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null video_encode_accelerator_supported_profiles in GpuInfo struct");
      result->jpeg_decode_accelerator_supported = CallWithContext(Traits::jpeg_decode_accelerator_supported, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gpu::mojom::internal::GpuInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_H_