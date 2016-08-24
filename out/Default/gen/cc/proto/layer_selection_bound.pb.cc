// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layer_selection_bound.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "layer_selection_bound.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cc {
namespace proto {

void protobuf_ShutdownFile_layer_5fselection_5fbound_2eproto() {
  delete LayerSelectionBound::default_instance_;
  delete LayerSelection::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_layer_5fselection_5fbound_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_layer_5fselection_5fbound_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::cc::proto::protobuf_AddDesc_point_2eproto();
  LayerSelectionBound::default_instance_ = new LayerSelectionBound();
  LayerSelection::default_instance_ = new LayerSelection();
  LayerSelectionBound::default_instance_->InitAsDefaultInstance();
  LayerSelection::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_layer_5fselection_5fbound_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_layer_5fselection_5fbound_2eproto_once_);
void protobuf_AddDesc_layer_5fselection_5fbound_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_layer_5fselection_5fbound_2eproto_once_,
                 &protobuf_AddDesc_layer_5fselection_5fbound_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_layer_5fselection_5fbound_2eproto {
  StaticDescriptorInitializer_layer_5fselection_5fbound_2eproto() {
    protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
  }
} static_descriptor_initializer_layer_5fselection_5fbound_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForLayerSelectionBound(
    LayerSelectionBound* ptr) {
  return ptr->mutable_unknown_fields();
}

bool LayerSelectionBound_SelectionBoundType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::UNKNOWN;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::LEFT;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::RIGHT;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::CENTER;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::EMPTY;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::SelectionBoundType_MIN;
const LayerSelectionBound_SelectionBoundType LayerSelectionBound::SelectionBoundType_MAX;
const int LayerSelectionBound::SelectionBoundType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LayerSelectionBound::kTypeFieldNumber;
const int LayerSelectionBound::kEdgeTopFieldNumber;
const int LayerSelectionBound::kEdgeBottomFieldNumber;
const int LayerSelectionBound::kLayerIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LayerSelectionBound::LayerSelectionBound()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cc.proto.LayerSelectionBound)
}

void LayerSelectionBound::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  edge_top_ = const_cast< ::cc::proto::Point*>(
      ::cc::proto::Point::internal_default_instance());
#else
  edge_top_ = const_cast< ::cc::proto::Point*>(&::cc::proto::Point::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  edge_bottom_ = const_cast< ::cc::proto::Point*>(
      ::cc::proto::Point::internal_default_instance());
#else
  edge_bottom_ = const_cast< ::cc::proto::Point*>(&::cc::proto::Point::default_instance());
#endif
}

LayerSelectionBound::LayerSelectionBound(const LayerSelectionBound& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cc.proto.LayerSelectionBound)
}

void LayerSelectionBound::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  edge_top_ = NULL;
  edge_bottom_ = NULL;
  layer_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LayerSelectionBound::~LayerSelectionBound() {
  // @@protoc_insertion_point(destructor:cc.proto.LayerSelectionBound)
  SharedDtor();
}

void LayerSelectionBound::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete edge_top_;
    delete edge_bottom_;
  }
}

void LayerSelectionBound::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LayerSelectionBound& LayerSelectionBound::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#endif
  return *default_instance_;
}

LayerSelectionBound* LayerSelectionBound::default_instance_ = NULL;

LayerSelectionBound* LayerSelectionBound::New(::google::protobuf::Arena* arena) const {
  LayerSelectionBound* n = new LayerSelectionBound;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LayerSelectionBound::Clear() {
// @@protoc_insertion_point(message_clear_start:cc.proto.LayerSelectionBound)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LayerSelectionBound, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LayerSelectionBound*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 15u) {
    ZR_(type_, layer_id_);
    if (has_edge_top()) {
      if (edge_top_ != NULL) edge_top_->::cc::proto::Point::Clear();
    }
    if (has_edge_bottom()) {
      if (edge_bottom_ != NULL) edge_bottom_->::cc::proto::Point::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LayerSelectionBound::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForLayerSelectionBound, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cc.proto.LayerSelectionBound)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::cc::proto::LayerSelectionBound_SelectionBoundType_IsValid(value)) {
            set_type(static_cast< ::cc::proto::LayerSelectionBound_SelectionBoundType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_edge_top;
        break;
      }

      // optional .cc.proto.Point edge_top = 2;
      case 2: {
        if (tag == 18) {
         parse_edge_top:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_edge_top()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_edge_bottom;
        break;
      }

      // optional .cc.proto.Point edge_bottom = 3;
      case 3: {
        if (tag == 26) {
         parse_edge_bottom:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_edge_bottom()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_layer_id;
        break;
      }

      // optional int32 layer_id = 4;
      case 4: {
        if (tag == 32) {
         parse_layer_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &layer_id_)));
          set_has_layer_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cc.proto.LayerSelectionBound)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cc.proto.LayerSelectionBound)
  return false;
#undef DO_
}

void LayerSelectionBound::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cc.proto.LayerSelectionBound)
  // optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .cc.proto.Point edge_top = 2;
  if (has_edge_top()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->edge_top_, output);
  }

  // optional .cc.proto.Point edge_bottom = 3;
  if (has_edge_bottom()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->edge_bottom_, output);
  }

  // optional int32 layer_id = 4;
  if (has_layer_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->layer_id(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cc.proto.LayerSelectionBound)
}

int LayerSelectionBound::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cc.proto.LayerSelectionBound)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .cc.proto.Point edge_top = 2;
    if (has_edge_top()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->edge_top_);
    }

    // optional .cc.proto.Point edge_bottom = 3;
    if (has_edge_bottom()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->edge_bottom_);
    }

    // optional int32 layer_id = 4;
    if (has_layer_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->layer_id());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LayerSelectionBound::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LayerSelectionBound*>(&from));
}

void LayerSelectionBound::MergeFrom(const LayerSelectionBound& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cc.proto.LayerSelectionBound)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_edge_top()) {
      mutable_edge_top()->::cc::proto::Point::MergeFrom(from.edge_top());
    }
    if (from.has_edge_bottom()) {
      mutable_edge_bottom()->::cc::proto::Point::MergeFrom(from.edge_bottom());
    }
    if (from.has_layer_id()) {
      set_layer_id(from.layer_id());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void LayerSelectionBound::CopyFrom(const LayerSelectionBound& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cc.proto.LayerSelectionBound)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerSelectionBound::IsInitialized() const {

  return true;
}

void LayerSelectionBound::Swap(LayerSelectionBound* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LayerSelectionBound::InternalSwap(LayerSelectionBound* other) {
  std::swap(type_, other->type_);
  std::swap(edge_top_, other->edge_top_);
  std::swap(edge_bottom_, other->edge_bottom_);
  std::swap(layer_id_, other->layer_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LayerSelectionBound::GetTypeName() const {
  return "cc.proto.LayerSelectionBound";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LayerSelectionBound

// optional .cc.proto.LayerSelectionBound.SelectionBoundType type = 1;
bool LayerSelectionBound::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LayerSelectionBound::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
void LayerSelectionBound::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void LayerSelectionBound::clear_type() {
  type_ = 0;
  clear_has_type();
}
 ::cc::proto::LayerSelectionBound_SelectionBoundType LayerSelectionBound::type() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.type)
  return static_cast< ::cc::proto::LayerSelectionBound_SelectionBoundType >(type_);
}
 void LayerSelectionBound::set_type(::cc::proto::LayerSelectionBound_SelectionBoundType value) {
  assert(::cc::proto::LayerSelectionBound_SelectionBoundType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerSelectionBound.type)
}

// optional .cc.proto.Point edge_top = 2;
bool LayerSelectionBound::has_edge_top() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LayerSelectionBound::set_has_edge_top() {
  _has_bits_[0] |= 0x00000002u;
}
void LayerSelectionBound::clear_has_edge_top() {
  _has_bits_[0] &= ~0x00000002u;
}
void LayerSelectionBound::clear_edge_top() {
  if (edge_top_ != NULL) edge_top_->::cc::proto::Point::Clear();
  clear_has_edge_top();
}
const ::cc::proto::Point& LayerSelectionBound::edge_top() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.edge_top)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return edge_top_ != NULL ? *edge_top_ : *default_instance().edge_top_;
#else
  return edge_top_ != NULL ? *edge_top_ : *default_instance_->edge_top_;
#endif
}
::cc::proto::Point* LayerSelectionBound::mutable_edge_top() {
  set_has_edge_top();
  if (edge_top_ == NULL) {
    edge_top_ = new ::cc::proto::Point;
  }
  // @@protoc_insertion_point(field_mutable:cc.proto.LayerSelectionBound.edge_top)
  return edge_top_;
}
::cc::proto::Point* LayerSelectionBound::release_edge_top() {
  // @@protoc_insertion_point(field_release:cc.proto.LayerSelectionBound.edge_top)
  clear_has_edge_top();
  ::cc::proto::Point* temp = edge_top_;
  edge_top_ = NULL;
  return temp;
}
void LayerSelectionBound::set_allocated_edge_top(::cc::proto::Point* edge_top) {
  delete edge_top_;
  edge_top_ = edge_top;
  if (edge_top) {
    set_has_edge_top();
  } else {
    clear_has_edge_top();
  }
  // @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelectionBound.edge_top)
}

// optional .cc.proto.Point edge_bottom = 3;
bool LayerSelectionBound::has_edge_bottom() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LayerSelectionBound::set_has_edge_bottom() {
  _has_bits_[0] |= 0x00000004u;
}
void LayerSelectionBound::clear_has_edge_bottom() {
  _has_bits_[0] &= ~0x00000004u;
}
void LayerSelectionBound::clear_edge_bottom() {
  if (edge_bottom_ != NULL) edge_bottom_->::cc::proto::Point::Clear();
  clear_has_edge_bottom();
}
const ::cc::proto::Point& LayerSelectionBound::edge_bottom() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.edge_bottom)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return edge_bottom_ != NULL ? *edge_bottom_ : *default_instance().edge_bottom_;
#else
  return edge_bottom_ != NULL ? *edge_bottom_ : *default_instance_->edge_bottom_;
#endif
}
::cc::proto::Point* LayerSelectionBound::mutable_edge_bottom() {
  set_has_edge_bottom();
  if (edge_bottom_ == NULL) {
    edge_bottom_ = new ::cc::proto::Point;
  }
  // @@protoc_insertion_point(field_mutable:cc.proto.LayerSelectionBound.edge_bottom)
  return edge_bottom_;
}
::cc::proto::Point* LayerSelectionBound::release_edge_bottom() {
  // @@protoc_insertion_point(field_release:cc.proto.LayerSelectionBound.edge_bottom)
  clear_has_edge_bottom();
  ::cc::proto::Point* temp = edge_bottom_;
  edge_bottom_ = NULL;
  return temp;
}
void LayerSelectionBound::set_allocated_edge_bottom(::cc::proto::Point* edge_bottom) {
  delete edge_bottom_;
  edge_bottom_ = edge_bottom;
  if (edge_bottom) {
    set_has_edge_bottom();
  } else {
    clear_has_edge_bottom();
  }
  // @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelectionBound.edge_bottom)
}

// optional int32 layer_id = 4;
bool LayerSelectionBound::has_layer_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void LayerSelectionBound::set_has_layer_id() {
  _has_bits_[0] |= 0x00000008u;
}
void LayerSelectionBound::clear_has_layer_id() {
  _has_bits_[0] &= ~0x00000008u;
}
void LayerSelectionBound::clear_layer_id() {
  layer_id_ = 0;
  clear_has_layer_id();
}
 ::google::protobuf::int32 LayerSelectionBound::layer_id() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelectionBound.layer_id)
  return layer_id_;
}
 void LayerSelectionBound::set_layer_id(::google::protobuf::int32 value) {
  set_has_layer_id();
  layer_id_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerSelectionBound.layer_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

static ::std::string* MutableUnknownFieldsForLayerSelection(
    LayerSelection* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LayerSelection::kStartFieldNumber;
const int LayerSelection::kEndFieldNumber;
const int LayerSelection::kIsEditableFieldNumber;
const int LayerSelection::kIsEmptyTextFormControlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LayerSelection::LayerSelection()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cc.proto.LayerSelection)
}

void LayerSelection::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  start_ = const_cast< ::cc::proto::LayerSelectionBound*>(
      ::cc::proto::LayerSelectionBound::internal_default_instance());
#else
  start_ = const_cast< ::cc::proto::LayerSelectionBound*>(&::cc::proto::LayerSelectionBound::default_instance());
#endif
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  end_ = const_cast< ::cc::proto::LayerSelectionBound*>(
      ::cc::proto::LayerSelectionBound::internal_default_instance());
#else
  end_ = const_cast< ::cc::proto::LayerSelectionBound*>(&::cc::proto::LayerSelectionBound::default_instance());
#endif
}

LayerSelection::LayerSelection(const LayerSelection& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cc.proto.LayerSelection)
}

void LayerSelection::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  start_ = NULL;
  end_ = NULL;
  is_editable_ = false;
  is_empty_text_form_control_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LayerSelection::~LayerSelection() {
  // @@protoc_insertion_point(destructor:cc.proto.LayerSelection)
  SharedDtor();
}

void LayerSelection::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete start_;
    delete end_;
  }
}

void LayerSelection::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LayerSelection& LayerSelection::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_layer_5fselection_5fbound_2eproto();
#endif
  return *default_instance_;
}

LayerSelection* LayerSelection::default_instance_ = NULL;

LayerSelection* LayerSelection::New(::google::protobuf::Arena* arena) const {
  LayerSelection* n = new LayerSelection;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LayerSelection::Clear() {
// @@protoc_insertion_point(message_clear_start:cc.proto.LayerSelection)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LayerSelection, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LayerSelection*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 15u) {
    ZR_(is_editable_, is_empty_text_form_control_);
    if (has_start()) {
      if (start_ != NULL) start_->::cc::proto::LayerSelectionBound::Clear();
    }
    if (has_end()) {
      if (end_ != NULL) end_->::cc::proto::LayerSelectionBound::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LayerSelection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForLayerSelection, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cc.proto.LayerSelection)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cc.proto.LayerSelectionBound start = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_start()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_end;
        break;
      }

      // optional .cc.proto.LayerSelectionBound end = 2;
      case 2: {
        if (tag == 18) {
         parse_end:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_end()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_is_editable;
        break;
      }

      // optional bool is_editable = 3;
      case 3: {
        if (tag == 24) {
         parse_is_editable:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_editable_)));
          set_has_is_editable();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_is_empty_text_form_control;
        break;
      }

      // optional bool is_empty_text_form_control = 4;
      case 4: {
        if (tag == 32) {
         parse_is_empty_text_form_control:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_empty_text_form_control_)));
          set_has_is_empty_text_form_control();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cc.proto.LayerSelection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cc.proto.LayerSelection)
  return false;
#undef DO_
}

void LayerSelection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cc.proto.LayerSelection)
  // optional .cc.proto.LayerSelectionBound start = 1;
  if (has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->start_, output);
  }

  // optional .cc.proto.LayerSelectionBound end = 2;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->end_, output);
  }

  // optional bool is_editable = 3;
  if (has_is_editable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_editable(), output);
  }

  // optional bool is_empty_text_form_control = 4;
  if (has_is_empty_text_form_control()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_empty_text_form_control(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cc.proto.LayerSelection)
}

int LayerSelection::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cc.proto.LayerSelection)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional .cc.proto.LayerSelectionBound start = 1;
    if (has_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->start_);
    }

    // optional .cc.proto.LayerSelectionBound end = 2;
    if (has_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->end_);
    }

    // optional bool is_editable = 3;
    if (has_is_editable()) {
      total_size += 1 + 1;
    }

    // optional bool is_empty_text_form_control = 4;
    if (has_is_empty_text_form_control()) {
      total_size += 1 + 1;
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LayerSelection::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LayerSelection*>(&from));
}

void LayerSelection::MergeFrom(const LayerSelection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cc.proto.LayerSelection)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_start()) {
      mutable_start()->::cc::proto::LayerSelectionBound::MergeFrom(from.start());
    }
    if (from.has_end()) {
      mutable_end()->::cc::proto::LayerSelectionBound::MergeFrom(from.end());
    }
    if (from.has_is_editable()) {
      set_is_editable(from.is_editable());
    }
    if (from.has_is_empty_text_form_control()) {
      set_is_empty_text_form_control(from.is_empty_text_form_control());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void LayerSelection::CopyFrom(const LayerSelection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cc.proto.LayerSelection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerSelection::IsInitialized() const {

  return true;
}

void LayerSelection::Swap(LayerSelection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LayerSelection::InternalSwap(LayerSelection* other) {
  std::swap(start_, other->start_);
  std::swap(end_, other->end_);
  std::swap(is_editable_, other->is_editable_);
  std::swap(is_empty_text_form_control_, other->is_empty_text_form_control_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LayerSelection::GetTypeName() const {
  return "cc.proto.LayerSelection";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LayerSelection

// optional .cc.proto.LayerSelectionBound start = 1;
bool LayerSelection::has_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LayerSelection::set_has_start() {
  _has_bits_[0] |= 0x00000001u;
}
void LayerSelection::clear_has_start() {
  _has_bits_[0] &= ~0x00000001u;
}
void LayerSelection::clear_start() {
  if (start_ != NULL) start_->::cc::proto::LayerSelectionBound::Clear();
  clear_has_start();
}
const ::cc::proto::LayerSelectionBound& LayerSelection::start() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelection.start)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return start_ != NULL ? *start_ : *default_instance().start_;
#else
  return start_ != NULL ? *start_ : *default_instance_->start_;
#endif
}
::cc::proto::LayerSelectionBound* LayerSelection::mutable_start() {
  set_has_start();
  if (start_ == NULL) {
    start_ = new ::cc::proto::LayerSelectionBound;
  }
  // @@protoc_insertion_point(field_mutable:cc.proto.LayerSelection.start)
  return start_;
}
::cc::proto::LayerSelectionBound* LayerSelection::release_start() {
  // @@protoc_insertion_point(field_release:cc.proto.LayerSelection.start)
  clear_has_start();
  ::cc::proto::LayerSelectionBound* temp = start_;
  start_ = NULL;
  return temp;
}
void LayerSelection::set_allocated_start(::cc::proto::LayerSelectionBound* start) {
  delete start_;
  start_ = start;
  if (start) {
    set_has_start();
  } else {
    clear_has_start();
  }
  // @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelection.start)
}

// optional .cc.proto.LayerSelectionBound end = 2;
bool LayerSelection::has_end() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LayerSelection::set_has_end() {
  _has_bits_[0] |= 0x00000002u;
}
void LayerSelection::clear_has_end() {
  _has_bits_[0] &= ~0x00000002u;
}
void LayerSelection::clear_end() {
  if (end_ != NULL) end_->::cc::proto::LayerSelectionBound::Clear();
  clear_has_end();
}
const ::cc::proto::LayerSelectionBound& LayerSelection::end() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelection.end)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return end_ != NULL ? *end_ : *default_instance().end_;
#else
  return end_ != NULL ? *end_ : *default_instance_->end_;
#endif
}
::cc::proto::LayerSelectionBound* LayerSelection::mutable_end() {
  set_has_end();
  if (end_ == NULL) {
    end_ = new ::cc::proto::LayerSelectionBound;
  }
  // @@protoc_insertion_point(field_mutable:cc.proto.LayerSelection.end)
  return end_;
}
::cc::proto::LayerSelectionBound* LayerSelection::release_end() {
  // @@protoc_insertion_point(field_release:cc.proto.LayerSelection.end)
  clear_has_end();
  ::cc::proto::LayerSelectionBound* temp = end_;
  end_ = NULL;
  return temp;
}
void LayerSelection::set_allocated_end(::cc::proto::LayerSelectionBound* end) {
  delete end_;
  end_ = end;
  if (end) {
    set_has_end();
  } else {
    clear_has_end();
  }
  // @@protoc_insertion_point(field_set_allocated:cc.proto.LayerSelection.end)
}

// optional bool is_editable = 3;
bool LayerSelection::has_is_editable() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LayerSelection::set_has_is_editable() {
  _has_bits_[0] |= 0x00000004u;
}
void LayerSelection::clear_has_is_editable() {
  _has_bits_[0] &= ~0x00000004u;
}
void LayerSelection::clear_is_editable() {
  is_editable_ = false;
  clear_has_is_editable();
}
 bool LayerSelection::is_editable() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelection.is_editable)
  return is_editable_;
}
 void LayerSelection::set_is_editable(bool value) {
  set_has_is_editable();
  is_editable_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerSelection.is_editable)
}

// optional bool is_empty_text_form_control = 4;
bool LayerSelection::has_is_empty_text_form_control() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void LayerSelection::set_has_is_empty_text_form_control() {
  _has_bits_[0] |= 0x00000008u;
}
void LayerSelection::clear_has_is_empty_text_form_control() {
  _has_bits_[0] &= ~0x00000008u;
}
void LayerSelection::clear_is_empty_text_form_control() {
  is_empty_text_form_control_ = false;
  clear_has_is_empty_text_form_control();
}
 bool LayerSelection::is_empty_text_form_control() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerSelection.is_empty_text_form_control)
  return is_empty_text_form_control_;
}
 void LayerSelection::set_is_empty_text_form_control(bool value) {
  set_has_is_empty_text_form_control();
  is_empty_text_form_control_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerSelection.is_empty_text_form_control)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
