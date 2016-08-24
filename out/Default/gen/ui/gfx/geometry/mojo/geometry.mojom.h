// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_

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
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace gfx {
namespace mojom {
class Point;
class PointDataView;
using PointPtr = mojo::InlinedStructPtr<Point>;

class PointF;
class PointFDataView;
using PointFPtr = mojo::InlinedStructPtr<PointF>;

class Size;
class SizeDataView;
using SizePtr = mojo::InlinedStructPtr<Size>;

class SizeF;
class SizeFDataView;
using SizeFPtr = mojo::InlinedStructPtr<SizeF>;

class Rect;
class RectDataView;
using RectPtr = mojo::InlinedStructPtr<Rect>;

class RectF;
class RectFDataView;
using RectFPtr = mojo::InlinedStructPtr<RectF>;

class Insets;
class InsetsDataView;
using InsetsPtr = mojo::InlinedStructPtr<Insets>;

class InsetsF;
class InsetsFDataView;
using InsetsFPtr = mojo::InlinedStructPtr<InsetsF>;

class Vector2d;
class Vector2dDataView;
using Vector2dPtr = mojo::InlinedStructPtr<Vector2d>;

class Vector2dF;
class Vector2dFDataView;
using Vector2dFPtr = mojo::InlinedStructPtr<Vector2dF>;



class  Point {
 public:
  using DataView = PointDataView;
  using Data_ = internal::Point_Data;

  static PointPtr New();

  template <typename U>
  static PointPtr From(const U& u) {
    return mojo::TypeConverter<PointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point>::Convert(*this);
  }

  Point();
  ~Point();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointPtr>
  PointPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Point>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PointPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PointPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t x;
  int32_t y;
};

class PointDataView {
 public:
  PointDataView() {}

  PointDataView(
      internal::Point_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
 private:
  internal::Point_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::PointDataView> {
  using MojomType = ::gfx::mojom::PointPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  PointF {
 public:
  using DataView = PointFDataView;
  using Data_ = internal::PointF_Data;

  static PointFPtr New();

  template <typename U>
  static PointFPtr From(const U& u) {
    return mojo::TypeConverter<PointFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointF>::Convert(*this);
  }

  PointF();
  ~PointF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointFPtr>
  PointFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PointFPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PointFPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float x;
  float y;
};

class PointFDataView {
 public:
  PointFDataView() {}

  PointFDataView(
      internal::PointF_Data* data,
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
  internal::PointF_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::PointFDataView> {
  using MojomType = ::gfx::mojom::PointFPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  Size {
 public:
  using DataView = SizeDataView;
  using Data_ = internal::Size_Data;

  static SizePtr New();

  template <typename U>
  static SizePtr From(const U& u) {
    return mojo::TypeConverter<SizePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Size>::Convert(*this);
  }

  Size();
  ~Size();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SizePtr>
  SizePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Size>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SizePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SizePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t width;
  int32_t height;
};

class SizeDataView {
 public:
  SizeDataView() {}

  SizeDataView(
      internal::Size_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Size_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::SizeDataView> {
  using MojomType = ::gfx::mojom::SizePtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  SizeF {
 public:
  using DataView = SizeFDataView;
  using Data_ = internal::SizeF_Data;

  static SizeFPtr New();

  template <typename U>
  static SizeFPtr From(const U& u) {
    return mojo::TypeConverter<SizeFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SizeF>::Convert(*this);
  }

  SizeF();
  ~SizeF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SizeFPtr>
  SizeFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SizeF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SizeFPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SizeFPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float width;
  float height;
};

class SizeFDataView {
 public:
  SizeFDataView() {}

  SizeFDataView(
      internal::SizeF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
 private:
  internal::SizeF_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::SizeFDataView> {
  using MojomType = ::gfx::mojom::SizeFPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  Rect {
 public:
  using DataView = RectDataView;
  using Data_ = internal::Rect_Data;

  static RectPtr New();

  template <typename U>
  static RectPtr From(const U& u) {
    return mojo::TypeConverter<RectPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Rect>::Convert(*this);
  }

  Rect();
  ~Rect();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectPtr>
  RectPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Rect>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RectPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RectPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
};

class RectDataView {
 public:
  RectDataView() {}

  RectDataView(
      internal::Rect_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Rect_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::RectDataView> {
  using MojomType = ::gfx::mojom::RectPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  RectF {
 public:
  using DataView = RectFDataView;
  using Data_ = internal::RectF_Data;

  static RectFPtr New();

  template <typename U>
  static RectFPtr From(const U& u) {
    return mojo::TypeConverter<RectFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RectF>::Convert(*this);
  }

  RectF();
  ~RectF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RectFPtr>
  RectFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RectF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RectFPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RectFPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float x;
  float y;
  float width;
  float height;
};

class RectFDataView {
 public:
  RectFDataView() {}

  RectFDataView(
      internal::RectF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
 private:
  internal::RectF_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::RectFDataView> {
  using MojomType = ::gfx::mojom::RectFPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  Insets {
 public:
  using DataView = InsetsDataView;
  using Data_ = internal::Insets_Data;

  static InsetsPtr New();

  template <typename U>
  static InsetsPtr From(const U& u) {
    return mojo::TypeConverter<InsetsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Insets>::Convert(*this);
  }

  Insets();
  ~Insets();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InsetsPtr>
  InsetsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Insets>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        InsetsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        InsetsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t top;
  int32_t left;
  int32_t bottom;
  int32_t right;
};

class InsetsDataView {
 public:
  InsetsDataView() {}

  InsetsDataView(
      internal::Insets_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t top() const {
    return data_->top;
  }
  int32_t left() const {
    return data_->left;
  }
  int32_t bottom() const {
    return data_->bottom;
  }
  int32_t right() const {
    return data_->right;
  }
 private:
  internal::Insets_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::InsetsDataView> {
  using MojomType = ::gfx::mojom::InsetsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  InsetsF {
 public:
  using DataView = InsetsFDataView;
  using Data_ = internal::InsetsF_Data;

  static InsetsFPtr New();

  template <typename U>
  static InsetsFPtr From(const U& u) {
    return mojo::TypeConverter<InsetsFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InsetsF>::Convert(*this);
  }

  InsetsF();
  ~InsetsF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InsetsFPtr>
  InsetsFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InsetsF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        InsetsFPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        InsetsFPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float top;
  float left;
  float bottom;
  float right;
};

class InsetsFDataView {
 public:
  InsetsFDataView() {}

  InsetsFDataView(
      internal::InsetsF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float top() const {
    return data_->top;
  }
  float left() const {
    return data_->left;
  }
  float bottom() const {
    return data_->bottom;
  }
  float right() const {
    return data_->right;
  }
 private:
  internal::InsetsF_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::InsetsFDataView> {
  using MojomType = ::gfx::mojom::InsetsFPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  Vector2d {
 public:
  using DataView = Vector2dDataView;
  using Data_ = internal::Vector2d_Data;

  static Vector2dPtr New();

  template <typename U>
  static Vector2dPtr From(const U& u) {
    return mojo::TypeConverter<Vector2dPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vector2d>::Convert(*this);
  }

  Vector2d();
  ~Vector2d();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Vector2dPtr>
  Vector2dPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vector2d>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        Vector2dPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        Vector2dPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t x;
  int32_t y;
};

class Vector2dDataView {
 public:
  Vector2dDataView() {}

  Vector2dDataView(
      internal::Vector2d_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
 private:
  internal::Vector2d_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::Vector2dDataView> {
  using MojomType = ::gfx::mojom::Vector2dPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {



class  Vector2dF {
 public:
  using DataView = Vector2dFDataView;
  using Data_ = internal::Vector2dF_Data;

  static Vector2dFPtr New();

  template <typename U>
  static Vector2dFPtr From(const U& u) {
    return mojo::TypeConverter<Vector2dFPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vector2dF>::Convert(*this);
  }

  Vector2dF();
  ~Vector2dF();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Vector2dFPtr>
  Vector2dFPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vector2dF>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        Vector2dFPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        Vector2dFPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float x;
  float y;
};

class Vector2dFDataView {
 public:
  Vector2dFDataView() {}

  Vector2dFDataView(
      internal::Vector2dF_Data* data,
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
  internal::Vector2dF_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::gfx::mojom::Vector2dFDataView> {
  using MojomType = ::gfx::mojom::Vector2dFPtr;
};
}  // namespace internal
}  // namespace mojo

namespace gfx {
namespace mojom {














template <typename StructPtrType>
PointPtr Point::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Point>::value>::type*>
bool Point::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  return true;
}


template <typename StructPtrType>
PointFPtr PointF::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointF>::value>::type*>
bool PointF::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  return true;
}


template <typename StructPtrType>
SizePtr Size::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Size>::value>::type*>
bool Size::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  return true;
}


template <typename StructPtrType>
SizeFPtr SizeF::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SizeF>::value>::type*>
bool SizeF::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  return true;
}


template <typename StructPtrType>
RectPtr Rect::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Rect>::value>::type*>
bool Rect::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  return true;
}


template <typename StructPtrType>
RectFPtr RectF::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RectF>::value>::type*>
bool RectF::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  return true;
}


template <typename StructPtrType>
InsetsPtr Insets::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->top = mojo::internal::Clone(top);
  rv->left = mojo::internal::Clone(left);
  rv->bottom = mojo::internal::Clone(bottom);
  rv->right = mojo::internal::Clone(right);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Insets>::value>::type*>
bool Insets::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->top, other.top))
    return false;
  if (!mojo::internal::Equals(this->left, other.left))
    return false;
  if (!mojo::internal::Equals(this->bottom, other.bottom))
    return false;
  if (!mojo::internal::Equals(this->right, other.right))
    return false;
  return true;
}


template <typename StructPtrType>
InsetsFPtr InsetsF::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->top = mojo::internal::Clone(top);
  rv->left = mojo::internal::Clone(left);
  rv->bottom = mojo::internal::Clone(bottom);
  rv->right = mojo::internal::Clone(right);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InsetsF>::value>::type*>
bool InsetsF::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->top, other.top))
    return false;
  if (!mojo::internal::Equals(this->left, other.left))
    return false;
  if (!mojo::internal::Equals(this->bottom, other.bottom))
    return false;
  if (!mojo::internal::Equals(this->right, other.right))
    return false;
  return true;
}


template <typename StructPtrType>
Vector2dPtr Vector2d::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vector2d>::value>::type*>
bool Vector2d::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  return true;
}


template <typename StructPtrType>
Vector2dFPtr Vector2dF::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vector2dF>::value>::type*>
bool Vector2dF::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::Point, ::gfx::mojom::PointPtr> {
  static bool IsNull(const ::gfx::mojom::PointPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::PointPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Point::x) x(
      const ::gfx::mojom::PointPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::Point::y) y(
      const ::gfx::mojom::PointPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::PointDataView input, ::gfx::mojom::PointPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::PointPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Point, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Point_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Point_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Point_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Point_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::PointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::PointF, ::gfx::mojom::PointFPtr> {
  static bool IsNull(const ::gfx::mojom::PointFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::PointFPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::PointF::x) x(
      const ::gfx::mojom::PointFPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::PointF::y) y(
      const ::gfx::mojom::PointFPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::PointFDataView input, ::gfx::mojom::PointFPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::PointFPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::PointF, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::PointF_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::PointF_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::PointF_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::PointF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::PointFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::Size, ::gfx::mojom::SizePtr> {
  static bool IsNull(const ::gfx::mojom::SizePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SizePtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Size::width) width(
      const ::gfx::mojom::SizePtr& input) {
    return input->width;
  }
  static decltype(::gfx::mojom::Size::height) height(
      const ::gfx::mojom::SizePtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::SizeDataView input, ::gfx::mojom::SizePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SizePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Size, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Size_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Size_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Size_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Size_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::SizeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::SizeF, ::gfx::mojom::SizeFPtr> {
  static bool IsNull(const ::gfx::mojom::SizeFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::SizeFPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::SizeF::width) width(
      const ::gfx::mojom::SizeFPtr& input) {
    return input->width;
  }
  static decltype(::gfx::mojom::SizeF::height) height(
      const ::gfx::mojom::SizeFPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::SizeFDataView input, ::gfx::mojom::SizeFPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SizeFPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::SizeF, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::SizeF_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::SizeF_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::SizeF_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::SizeF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::SizeFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::Rect, ::gfx::mojom::RectPtr> {
  static bool IsNull(const ::gfx::mojom::RectPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::RectPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Rect::x) x(
      const ::gfx::mojom::RectPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::Rect::y) y(
      const ::gfx::mojom::RectPtr& input) {
    return input->y;
  }
  static decltype(::gfx::mojom::Rect::width) width(
      const ::gfx::mojom::RectPtr& input) {
    return input->width;
  }
  static decltype(::gfx::mojom::Rect::height) height(
      const ::gfx::mojom::RectPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::RectDataView input, ::gfx::mojom::RectPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RectPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Rect, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Rect_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Rect_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Rect_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Rect_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::RectDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::RectF, ::gfx::mojom::RectFPtr> {
  static bool IsNull(const ::gfx::mojom::RectFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::RectFPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::RectF::x) x(
      const ::gfx::mojom::RectFPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::RectF::y) y(
      const ::gfx::mojom::RectFPtr& input) {
    return input->y;
  }
  static decltype(::gfx::mojom::RectF::width) width(
      const ::gfx::mojom::RectFPtr& input) {
    return input->width;
  }
  static decltype(::gfx::mojom::RectF::height) height(
      const ::gfx::mojom::RectFPtr& input) {
    return input->height;
  }

  static bool Read(::gfx::mojom::RectFDataView input, ::gfx::mojom::RectFPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::RectFPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::RectF, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::RectF_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::RectF_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::RectF_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::RectF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::RectFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::Insets, ::gfx::mojom::InsetsPtr> {
  static bool IsNull(const ::gfx::mojom::InsetsPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::InsetsPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Insets::top) top(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->top;
  }
  static decltype(::gfx::mojom::Insets::left) left(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->left;
  }
  static decltype(::gfx::mojom::Insets::bottom) bottom(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->bottom;
  }
  static decltype(::gfx::mojom::Insets::right) right(
      const ::gfx::mojom::InsetsPtr& input) {
    return input->right;
  }

  static bool Read(::gfx::mojom::InsetsDataView input, ::gfx::mojom::InsetsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::InsetsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Insets, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Insets_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Insets_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Insets_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->top = CallWithContext(Traits::top, input, custom_context);
      result->left = CallWithContext(Traits::left, input, custom_context);
      result->bottom = CallWithContext(Traits::bottom, input, custom_context);
      result->right = CallWithContext(Traits::right, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Insets_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::InsetsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::InsetsF, ::gfx::mojom::InsetsFPtr> {
  static bool IsNull(const ::gfx::mojom::InsetsFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::InsetsFPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::InsetsF::top) top(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->top;
  }
  static decltype(::gfx::mojom::InsetsF::left) left(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->left;
  }
  static decltype(::gfx::mojom::InsetsF::bottom) bottom(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->bottom;
  }
  static decltype(::gfx::mojom::InsetsF::right) right(
      const ::gfx::mojom::InsetsFPtr& input) {
    return input->right;
  }

  static bool Read(::gfx::mojom::InsetsFDataView input, ::gfx::mojom::InsetsFPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::InsetsFPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::InsetsF, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::InsetsF_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::InsetsF_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::InsetsF_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->top = CallWithContext(Traits::top, input, custom_context);
      result->left = CallWithContext(Traits::left, input, custom_context);
      result->bottom = CallWithContext(Traits::bottom, input, custom_context);
      result->right = CallWithContext(Traits::right, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::InsetsF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::InsetsFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::Vector2d, ::gfx::mojom::Vector2dPtr> {
  static bool IsNull(const ::gfx::mojom::Vector2dPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Vector2dPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Vector2d::x) x(
      const ::gfx::mojom::Vector2dPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::Vector2d::y) y(
      const ::gfx::mojom::Vector2dPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::Vector2dDataView input, ::gfx::mojom::Vector2dPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Vector2dPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Vector2d, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Vector2d_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Vector2d_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Vector2d_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Vector2d_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Vector2dDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::gfx::mojom::Vector2dF, ::gfx::mojom::Vector2dFPtr> {
  static bool IsNull(const ::gfx::mojom::Vector2dFPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::Vector2dFPtr* output) { output->reset(); }
  static decltype(::gfx::mojom::Vector2dF::x) x(
      const ::gfx::mojom::Vector2dFPtr& input) {
    return input->x;
  }
  static decltype(::gfx::mojom::Vector2dF::y) y(
      const ::gfx::mojom::Vector2dFPtr& input) {
    return input->y;
  }

  static bool Read(::gfx::mojom::Vector2dFDataView input, ::gfx::mojom::Vector2dFPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::Vector2dFPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::Vector2dF, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::gfx::mojom::internal::Vector2dF_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Vector2dF_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::gfx::mojom::internal::Vector2dF_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::gfx::mojom::internal::Vector2dF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::Vector2dFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_H_