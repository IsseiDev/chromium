// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_H_

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
#include "media/mojo/interfaces/image_capture.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace media {
namespace mojom {
class ImageCapture;
using ImageCapturePtr = mojo::InterfacePtr<ImageCapture>;
using ImageCapturePtrInfo = mojo::InterfacePtrInfo<ImageCapture>;
using ImageCaptureRequest = mojo::InterfaceRequest<ImageCapture>;
using ImageCaptureAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageCapture>;
using ImageCaptureAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageCapture>;
using ImageCaptureAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageCapture>;

class Range;
class RangeDataView;
using RangePtr = mojo::InlinedStructPtr<Range>;

class PhotoCapabilities;
class PhotoCapabilitiesDataView;
using PhotoCapabilitiesPtr = mojo::StructPtr<PhotoCapabilities>;

class Point2D;
class Point2DDataView;
using Point2DPtr = mojo::InlinedStructPtr<Point2D>;

class PhotoSettings;
class PhotoSettingsDataView;
using PhotoSettingsPtr = mojo::StructPtr<PhotoSettings>;

class Blob;
class BlobDataView;
using BlobPtr = mojo::StructPtr<Blob>;


class ImageCaptureProxy;
class ImageCaptureStub;

class ImageCaptureRequestValidator;
class ImageCaptureResponseValidator;

class  ImageCapture {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ImageCaptureProxy;
  using Stub_ = ImageCaptureStub;

  using RequestValidator_ = ImageCaptureRequestValidator;
  using ResponseValidator_ = ImageCaptureResponseValidator;
  virtual ~ImageCapture() {}


  using GetCapabilitiesCallback = base::Callback<void(PhotoCapabilitiesPtr)>;
  virtual void GetCapabilities(const std::string& source_id, const GetCapabilitiesCallback& callback) = 0;


  using SetOptionsCallback = base::Callback<void(bool)>;
  virtual void SetOptions(const std::string& source_id, PhotoSettingsPtr settings, const SetOptionsCallback& callback) = 0;


  using TakePhotoCallback = base::Callback<void(BlobPtr)>;
  virtual void TakePhoto(const std::string& source_id, const TakePhotoCallback& callback) = 0;
};

class  ImageCaptureProxy
    : public ImageCapture,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ImageCaptureProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetCapabilities(const std::string& source_id, const GetCapabilitiesCallback& callback) override;
  void SetOptions(const std::string& source_id, PhotoSettingsPtr settings, const SetOptionsCallback& callback) override;
  void TakePhoto(const std::string& source_id, const TakePhotoCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ImageCaptureStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ImageCaptureStub();
  ~ImageCaptureStub() override;
  void set_sink(ImageCapture* sink) { sink_ = sink; }
  ImageCapture* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ImageCapture* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ImageCaptureRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageCaptureRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ImageCaptureResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ImageCaptureResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  Range {
 public:
  using DataView = RangeDataView;
  using Data_ = internal::Range_Data;

  static RangePtr New();

  template <typename U>
  static RangePtr From(const U& u) {
    return mojo::TypeConverter<RangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Range>::Convert(*this);
  }

  Range();
  ~Range();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RangePtr>
  RangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Range>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RangePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RangePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t max;
  uint32_t min;
  uint32_t current;
};

class RangeDataView {
 public:
  RangeDataView() {}

  RangeDataView(
      internal::Range_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t max() const {
    return data_->max;
  }
  uint32_t min() const {
    return data_->min;
  }
  uint32_t current() const {
    return data_->current;
  }
 private:
  internal::Range_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::RangeDataView> {
  using MojomType = ::media::mojom::RangePtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {




class  Point2D {
 public:
  using DataView = Point2DDataView;
  using Data_ = internal::Point2D_Data;

  static Point2DPtr New();

  template <typename U>
  static Point2DPtr From(const U& u) {
    return mojo::TypeConverter<Point2DPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point2D>::Convert(*this);
  }

  Point2D();
  ~Point2D();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Point2DPtr>
  Point2DPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Point2D>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        Point2DPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        Point2DPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float x;
  float y;
};

class Point2DDataView {
 public:
  Point2DDataView() {}

  Point2DDataView(
      internal::Point2D_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
 private:
  internal::Point2D_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::Point2DDataView> {
  using MojomType = ::media::mojom::Point2DPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {








class  PhotoCapabilities {
 public:
  using DataView = PhotoCapabilitiesDataView;
  using Data_ = internal::PhotoCapabilities_Data;

  static PhotoCapabilitiesPtr New();

  template <typename U>
  static PhotoCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<PhotoCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PhotoCapabilities>::Convert(*this);
  }

  PhotoCapabilities();
  ~PhotoCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PhotoCapabilitiesPtr>
  PhotoCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PhotoCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PhotoCapabilitiesPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PhotoCapabilitiesPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  RangePtr iso;
  RangePtr height;
  RangePtr width;
  RangePtr zoom;
  FocusMode focus_mode;
 private:
  DISALLOW_COPY_AND_ASSIGN(PhotoCapabilities);
};

class PhotoCapabilitiesDataView {
 public:
  PhotoCapabilitiesDataView() {}

  PhotoCapabilitiesDataView(
      internal::PhotoCapabilities_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIsoDataView(
      RangeDataView* output);

  template <typename UserType>
  bool ReadIso(UserType* output) {
    auto pointer = data_->iso.Get();
    return mojo::internal::Deserialize<::media::mojom::RangePtr>(
        pointer, output, context_);
  }
  inline void GetHeightDataView(
      RangeDataView* output);

  template <typename UserType>
  bool ReadHeight(UserType* output) {
    auto pointer = data_->height.Get();
    return mojo::internal::Deserialize<::media::mojom::RangePtr>(
        pointer, output, context_);
  }
  inline void GetWidthDataView(
      RangeDataView* output);

  template <typename UserType>
  bool ReadWidth(UserType* output) {
    auto pointer = data_->width.Get();
    return mojo::internal::Deserialize<::media::mojom::RangePtr>(
        pointer, output, context_);
  }
  inline void GetZoomDataView(
      RangeDataView* output);

  template <typename UserType>
  bool ReadZoom(UserType* output) {
    auto pointer = data_->zoom.Get();
    return mojo::internal::Deserialize<::media::mojom::RangePtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadFocusMode(UserType* output) const {
    auto data_value = data_->focus_mode;
    return mojo::internal::Deserialize<::media::mojom::FocusMode>(
        data_value, output);
  }

  ::media::mojom::FocusMode focus_mode() const {
    return static_cast<::media::mojom::FocusMode>(data_->focus_mode);
  }
 private:
  internal::PhotoCapabilities_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::PhotoCapabilitiesDataView> {
  using MojomType = ::media::mojom::PhotoCapabilitiesPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {




class  PhotoSettings {
 public:
  using DataView = PhotoSettingsDataView;
  using Data_ = internal::PhotoSettings_Data;

  static PhotoSettingsPtr New();

  template <typename U>
  static PhotoSettingsPtr From(const U& u) {
    return mojo::TypeConverter<PhotoSettingsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PhotoSettings>::Convert(*this);
  }

  PhotoSettings();
  ~PhotoSettings();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PhotoSettingsPtr>
  PhotoSettingsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PhotoSettings>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PhotoSettingsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PhotoSettingsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool has_zoom;
  uint32_t zoom;
  bool has_width;
  uint32_t width;
  bool has_height;
  uint32_t height;
  bool has_focus_mode;
  FocusMode focus_mode;
  std::vector<Point2DPtr> points_of_interest;
 private:
  DISALLOW_COPY_AND_ASSIGN(PhotoSettings);
};

class PhotoSettingsDataView {
 public:
  PhotoSettingsDataView() {}

  PhotoSettingsDataView(
      internal::PhotoSettings_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool has_zoom() const {
    return data_->has_zoom;
  }
  uint32_t zoom() const {
    return data_->zoom;
  }
  bool has_width() const {
    return data_->has_width;
  }
  uint32_t width() const {
    return data_->width;
  }
  bool has_height() const {
    return data_->has_height;
  }
  uint32_t height() const {
    return data_->height;
  }
  bool has_focus_mode() const {
    return data_->has_focus_mode;
  }
  template <typename UserType>
  bool ReadFocusMode(UserType* output) const {
    auto data_value = data_->focus_mode;
    return mojo::internal::Deserialize<::media::mojom::FocusMode>(
        data_value, output);
  }

  ::media::mojom::FocusMode focus_mode() const {
    return static_cast<::media::mojom::FocusMode>(data_->focus_mode);
  }
  inline void GetPointsOfInterestDataView(
      mojo::ArrayDataView<Point2DDataView>* output);

  template <typename UserType>
  bool ReadPointsOfInterest(UserType* output) {
    auto pointer = data_->points_of_interest.Get();
    return mojo::internal::Deserialize<mojo::Array<::media::mojom::Point2DPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PhotoSettings_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::PhotoSettingsDataView> {
  using MojomType = ::media::mojom::PhotoSettingsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  Blob {
 public:
  using DataView = BlobDataView;
  using Data_ = internal::Blob_Data;

  static BlobPtr New();

  template <typename U>
  static BlobPtr From(const U& u) {
    return mojo::TypeConverter<BlobPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Blob>::Convert(*this);
  }

  Blob();
  ~Blob();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BlobPtr>
  BlobPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Blob>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BlobPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BlobPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string mime_type;
  std::vector<uint8_t> data;
};

class BlobDataView {
 public:
  BlobDataView() {}

  BlobDataView(
      internal::Blob_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMimeType(UserType* output) {
    auto pointer = data_->mime_type.Get();
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
  internal::Blob_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::BlobDataView> {
  using MojomType = ::media::mojom::BlobPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {


template <typename StructPtrType>
RangePtr Range::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->max = mojo::internal::Clone(max);
  rv->min = mojo::internal::Clone(min);
  rv->current = mojo::internal::Clone(current);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Range>::value>::type*>
bool Range::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->max, other.max))
    return false;
  if (!mojo::internal::Equals(this->min, other.min))
    return false;
  if (!mojo::internal::Equals(this->current, other.current))
    return false;
  return true;
}


template <typename StructPtrType>
PhotoCapabilitiesPtr PhotoCapabilities::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->iso = mojo::internal::Clone(iso);
  rv->height = mojo::internal::Clone(height);
  rv->width = mojo::internal::Clone(width);
  rv->zoom = mojo::internal::Clone(zoom);
  rv->focus_mode = mojo::internal::Clone(focus_mode);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PhotoCapabilities>::value>::type*>
bool PhotoCapabilities::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->iso, other.iso))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->zoom, other.zoom))
    return false;
  if (!mojo::internal::Equals(this->focus_mode, other.focus_mode))
    return false;
  return true;
}

inline void PhotoCapabilitiesDataView::GetIsoDataView(
    RangeDataView* output) {
  auto pointer = data_->iso.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoCapabilitiesDataView::GetHeightDataView(
    RangeDataView* output) {
  auto pointer = data_->height.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoCapabilitiesDataView::GetWidthDataView(
    RangeDataView* output) {
  auto pointer = data_->width.Get();
  *output = RangeDataView(pointer, context_);
}
inline void PhotoCapabilitiesDataView::GetZoomDataView(
    RangeDataView* output) {
  auto pointer = data_->zoom.Get();
  *output = RangeDataView(pointer, context_);
}

template <typename StructPtrType>
Point2DPtr Point2D::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Point2D>::value>::type*>
bool Point2D::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  return true;
}


template <typename StructPtrType>
PhotoSettingsPtr PhotoSettings::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->has_zoom = mojo::internal::Clone(has_zoom);
  rv->zoom = mojo::internal::Clone(zoom);
  rv->has_width = mojo::internal::Clone(has_width);
  rv->width = mojo::internal::Clone(width);
  rv->has_height = mojo::internal::Clone(has_height);
  rv->height = mojo::internal::Clone(height);
  rv->has_focus_mode = mojo::internal::Clone(has_focus_mode);
  rv->focus_mode = mojo::internal::Clone(focus_mode);
  rv->points_of_interest = mojo::internal::Clone(points_of_interest);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PhotoSettings>::value>::type*>
bool PhotoSettings::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->has_zoom, other.has_zoom))
    return false;
  if (!mojo::internal::Equals(this->zoom, other.zoom))
    return false;
  if (!mojo::internal::Equals(this->has_width, other.has_width))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->has_height, other.has_height))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  if (!mojo::internal::Equals(this->has_focus_mode, other.has_focus_mode))
    return false;
  if (!mojo::internal::Equals(this->focus_mode, other.focus_mode))
    return false;
  if (!mojo::internal::Equals(this->points_of_interest, other.points_of_interest))
    return false;
  return true;
}

inline void PhotoSettingsDataView::GetPointsOfInterestDataView(
    mojo::ArrayDataView<Point2DDataView>* output) {
  auto pointer = data_->points_of_interest.Get();
  *output = mojo::ArrayDataView<Point2DDataView>(pointer, context_);
}

template <typename StructPtrType>
BlobPtr Blob::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->mime_type = mojo::internal::Clone(mime_type);
  rv->data = mojo::internal::Clone(data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Blob>::value>::type*>
bool Blob::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->mime_type, other.mime_type))
    return false;
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  return true;
}

inline void BlobDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::Range, ::media::mojom::RangePtr> {
  static bool IsNull(const ::media::mojom::RangePtr& input) { return !input; }
  static void SetToNull(::media::mojom::RangePtr* output) { output->reset(); }
  static decltype(::media::mojom::Range::max) max(
      const ::media::mojom::RangePtr& input) {
    return input->max;
  }
  static decltype(::media::mojom::Range::min) min(
      const ::media::mojom::RangePtr& input) {
    return input->min;
  }
  static decltype(::media::mojom::Range::current) current(
      const ::media::mojom::RangePtr& input) {
    return input->current;
  }

  static bool Read(::media::mojom::RangeDataView input, ::media::mojom::RangePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::RangePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Range, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::Range_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Range_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::Range_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->max = CallWithContext(Traits::max, input, custom_context);
      result->min = CallWithContext(Traits::min, input, custom_context);
      result->current = CallWithContext(Traits::current, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::Range_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::RangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::PhotoCapabilities, ::media::mojom::PhotoCapabilitiesPtr> {
  static bool IsNull(const ::media::mojom::PhotoCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PhotoCapabilitiesPtr* output) { output->reset(); }
  static decltype(::media::mojom::PhotoCapabilities::iso)& iso(
      ::media::mojom::PhotoCapabilitiesPtr& input) {
    return input->iso;
  }
  static decltype(::media::mojom::PhotoCapabilities::height)& height(
      ::media::mojom::PhotoCapabilitiesPtr& input) {
    return input->height;
  }
  static decltype(::media::mojom::PhotoCapabilities::width)& width(
      ::media::mojom::PhotoCapabilitiesPtr& input) {
    return input->width;
  }
  static decltype(::media::mojom::PhotoCapabilities::zoom)& zoom(
      ::media::mojom::PhotoCapabilitiesPtr& input) {
    return input->zoom;
  }
  static decltype(::media::mojom::PhotoCapabilities::focus_mode) focus_mode(
      const ::media::mojom::PhotoCapabilitiesPtr& input) {
    return input->focus_mode;
  }

  static bool Read(::media::mojom::PhotoCapabilitiesDataView input, ::media::mojom::PhotoCapabilitiesPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PhotoCapabilitiesPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PhotoCapabilities, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::PhotoCapabilities_Data);
    decltype(CallWithContext(Traits::iso, input, custom_context)) in_iso = CallWithContext(Traits::iso, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::RangePtr>(
        in_iso, context);
    decltype(CallWithContext(Traits::height, input, custom_context)) in_height = CallWithContext(Traits::height, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::RangePtr>(
        in_height, context);
    decltype(CallWithContext(Traits::width, input, custom_context)) in_width = CallWithContext(Traits::width, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::RangePtr>(
        in_width, context);
    decltype(CallWithContext(Traits::zoom, input, custom_context)) in_zoom = CallWithContext(Traits::zoom, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::RangePtr>(
        in_zoom, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PhotoCapabilities_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::PhotoCapabilities_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::iso, input, custom_context)) in_iso = CallWithContext(Traits::iso, input, custom_context);
      typename decltype(result->iso)::BaseType* iso_ptr;
      mojo::internal::Serialize<::media::mojom::RangePtr>(
          in_iso, buffer, &iso_ptr, context);
      result->iso.Set(iso_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->iso.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null iso in PhotoCapabilities struct");
      decltype(CallWithContext(Traits::height, input, custom_context)) in_height = CallWithContext(Traits::height, input, custom_context);
      typename decltype(result->height)::BaseType* height_ptr;
      mojo::internal::Serialize<::media::mojom::RangePtr>(
          in_height, buffer, &height_ptr, context);
      result->height.Set(height_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->height.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null height in PhotoCapabilities struct");
      decltype(CallWithContext(Traits::width, input, custom_context)) in_width = CallWithContext(Traits::width, input, custom_context);
      typename decltype(result->width)::BaseType* width_ptr;
      mojo::internal::Serialize<::media::mojom::RangePtr>(
          in_width, buffer, &width_ptr, context);
      result->width.Set(width_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->width.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null width in PhotoCapabilities struct");
      decltype(CallWithContext(Traits::zoom, input, custom_context)) in_zoom = CallWithContext(Traits::zoom, input, custom_context);
      typename decltype(result->zoom)::BaseType* zoom_ptr;
      mojo::internal::Serialize<::media::mojom::RangePtr>(
          in_zoom, buffer, &zoom_ptr, context);
      result->zoom.Set(zoom_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->zoom.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null zoom in PhotoCapabilities struct");
      mojo::internal::Serialize<::media::mojom::FocusMode>(
          CallWithContext(Traits::focus_mode, input, custom_context), &result->focus_mode);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::PhotoCapabilities_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PhotoCapabilitiesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::Point2D, ::media::mojom::Point2DPtr> {
  static bool IsNull(const ::media::mojom::Point2DPtr& input) { return !input; }
  static void SetToNull(::media::mojom::Point2DPtr* output) { output->reset(); }
  static decltype(::media::mojom::Point2D::x) x(
      const ::media::mojom::Point2DPtr& input) {
    return input->x;
  }
  static decltype(::media::mojom::Point2D::y) y(
      const ::media::mojom::Point2DPtr& input) {
    return input->y;
  }

  static bool Read(::media::mojom::Point2DDataView input, ::media::mojom::Point2DPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::Point2DPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Point2D, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::Point2D_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Point2D_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::Point2D_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::Point2D_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::Point2DDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::PhotoSettings, ::media::mojom::PhotoSettingsPtr> {
  static bool IsNull(const ::media::mojom::PhotoSettingsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PhotoSettingsPtr* output) { output->reset(); }
  static decltype(::media::mojom::PhotoSettings::has_zoom) has_zoom(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->has_zoom;
  }
  static decltype(::media::mojom::PhotoSettings::zoom) zoom(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->zoom;
  }
  static decltype(::media::mojom::PhotoSettings::has_width) has_width(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->has_width;
  }
  static decltype(::media::mojom::PhotoSettings::width) width(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->width;
  }
  static decltype(::media::mojom::PhotoSettings::has_height) has_height(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->has_height;
  }
  static decltype(::media::mojom::PhotoSettings::height) height(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->height;
  }
  static decltype(::media::mojom::PhotoSettings::has_focus_mode) has_focus_mode(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->has_focus_mode;
  }
  static decltype(::media::mojom::PhotoSettings::focus_mode) focus_mode(
      const ::media::mojom::PhotoSettingsPtr& input) {
    return input->focus_mode;
  }
  static decltype(::media::mojom::PhotoSettings::points_of_interest)& points_of_interest(
      ::media::mojom::PhotoSettingsPtr& input) {
    return input->points_of_interest;
  }

  static bool Read(::media::mojom::PhotoSettingsDataView input, ::media::mojom::PhotoSettingsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PhotoSettingsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PhotoSettings, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::PhotoSettings_Data);
    decltype(CallWithContext(Traits::points_of_interest, input, custom_context)) in_points_of_interest = CallWithContext(Traits::points_of_interest, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::media::mojom::Point2DPtr>>(
        in_points_of_interest, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PhotoSettings_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::PhotoSettings_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->has_zoom = CallWithContext(Traits::has_zoom, input, custom_context);
      result->zoom = CallWithContext(Traits::zoom, input, custom_context);
      result->has_width = CallWithContext(Traits::has_width, input, custom_context);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->has_height = CallWithContext(Traits::has_height, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
      result->has_focus_mode = CallWithContext(Traits::has_focus_mode, input, custom_context);
      mojo::internal::Serialize<::media::mojom::FocusMode>(
          CallWithContext(Traits::focus_mode, input, custom_context), &result->focus_mode);
      decltype(CallWithContext(Traits::points_of_interest, input, custom_context)) in_points_of_interest = CallWithContext(Traits::points_of_interest, input, custom_context);
      typename decltype(result->points_of_interest)::BaseType* points_of_interest_ptr;
      const mojo::internal::ContainerValidateParams points_of_interest_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::media::mojom::Point2DPtr>>(
          in_points_of_interest, buffer, &points_of_interest_ptr, &points_of_interest_validate_params,
          context);
      result->points_of_interest.Set(points_of_interest_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->points_of_interest.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null points_of_interest in PhotoSettings struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::PhotoSettings_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PhotoSettingsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::Blob, ::media::mojom::BlobPtr> {
  static bool IsNull(const ::media::mojom::BlobPtr& input) { return !input; }
  static void SetToNull(::media::mojom::BlobPtr* output) { output->reset(); }
  static decltype(::media::mojom::Blob::mime_type)& mime_type(
      ::media::mojom::BlobPtr& input) {
    return input->mime_type;
  }
  static decltype(::media::mojom::Blob::data)& data(
      ::media::mojom::BlobPtr& input) {
    return input->data;
  }

  static bool Read(::media::mojom::BlobDataView input, ::media::mojom::BlobPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::BlobPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Blob, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::Blob_Data);
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_mime_type, context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Blob_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::Blob_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
      typename decltype(result->mime_type)::BaseType* mime_type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_mime_type, buffer, &mime_type_ptr, context);
      result->mime_type.Set(mime_type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mime_type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mime_type in Blob struct");
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
          "null data in Blob struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::Blob_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::BlobDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_H_