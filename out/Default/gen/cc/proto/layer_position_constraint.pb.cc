// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layer_position_constraint.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "layer_position_constraint.pb.h"

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

void protobuf_ShutdownFile_layer_5fposition_5fconstraint_2eproto() {
  delete LayerPositionConstraint::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  LayerPositionConstraint::default_instance_ = new LayerPositionConstraint();
  LayerPositionConstraint::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_layer_5fposition_5fconstraint_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto_once_);
void protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto_once_,
                 &protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_layer_5fposition_5fconstraint_2eproto {
  StaticDescriptorInitializer_layer_5fposition_5fconstraint_2eproto() {
    protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto();
  }
} static_descriptor_initializer_layer_5fposition_5fconstraint_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForLayerPositionConstraint(
    LayerPositionConstraint* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LayerPositionConstraint::kIsFixedPositionFieldNumber;
const int LayerPositionConstraint::kIsFixedToRightEdgeFieldNumber;
const int LayerPositionConstraint::kIsFixedToBottomEdgeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LayerPositionConstraint::LayerPositionConstraint()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cc.proto.LayerPositionConstraint)
}

void LayerPositionConstraint::InitAsDefaultInstance() {
}

LayerPositionConstraint::LayerPositionConstraint(const LayerPositionConstraint& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cc.proto.LayerPositionConstraint)
}

void LayerPositionConstraint::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  is_fixed_position_ = false;
  is_fixed_to_right_edge_ = false;
  is_fixed_to_bottom_edge_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LayerPositionConstraint::~LayerPositionConstraint() {
  // @@protoc_insertion_point(destructor:cc.proto.LayerPositionConstraint)
  SharedDtor();
}

void LayerPositionConstraint::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void LayerPositionConstraint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LayerPositionConstraint& LayerPositionConstraint::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_layer_5fposition_5fconstraint_2eproto();
#endif
  return *default_instance_;
}

LayerPositionConstraint* LayerPositionConstraint::default_instance_ = NULL;

LayerPositionConstraint* LayerPositionConstraint::New(::google::protobuf::Arena* arena) const {
  LayerPositionConstraint* n = new LayerPositionConstraint;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LayerPositionConstraint::Clear() {
// @@protoc_insertion_point(message_clear_start:cc.proto.LayerPositionConstraint)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LayerPositionConstraint, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LayerPositionConstraint*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(is_fixed_position_, is_fixed_to_bottom_edge_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LayerPositionConstraint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForLayerPositionConstraint, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:cc.proto.LayerPositionConstraint)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool is_fixed_position = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_fixed_position_)));
          set_has_is_fixed_position();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_is_fixed_to_right_edge;
        break;
      }

      // optional bool is_fixed_to_right_edge = 2;
      case 2: {
        if (tag == 16) {
         parse_is_fixed_to_right_edge:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_fixed_to_right_edge_)));
          set_has_is_fixed_to_right_edge();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_is_fixed_to_bottom_edge;
        break;
      }

      // optional bool is_fixed_to_bottom_edge = 3;
      case 3: {
        if (tag == 24) {
         parse_is_fixed_to_bottom_edge:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_fixed_to_bottom_edge_)));
          set_has_is_fixed_to_bottom_edge();
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
  // @@protoc_insertion_point(parse_success:cc.proto.LayerPositionConstraint)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cc.proto.LayerPositionConstraint)
  return false;
#undef DO_
}

void LayerPositionConstraint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cc.proto.LayerPositionConstraint)
  // optional bool is_fixed_position = 1;
  if (has_is_fixed_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_fixed_position(), output);
  }

  // optional bool is_fixed_to_right_edge = 2;
  if (has_is_fixed_to_right_edge()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_fixed_to_right_edge(), output);
  }

  // optional bool is_fixed_to_bottom_edge = 3;
  if (has_is_fixed_to_bottom_edge()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_fixed_to_bottom_edge(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:cc.proto.LayerPositionConstraint)
}

int LayerPositionConstraint::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cc.proto.LayerPositionConstraint)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional bool is_fixed_position = 1;
    if (has_is_fixed_position()) {
      total_size += 1 + 1;
    }

    // optional bool is_fixed_to_right_edge = 2;
    if (has_is_fixed_to_right_edge()) {
      total_size += 1 + 1;
    }

    // optional bool is_fixed_to_bottom_edge = 3;
    if (has_is_fixed_to_bottom_edge()) {
      total_size += 1 + 1;
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LayerPositionConstraint::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LayerPositionConstraint*>(&from));
}

void LayerPositionConstraint::MergeFrom(const LayerPositionConstraint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cc.proto.LayerPositionConstraint)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_is_fixed_position()) {
      set_is_fixed_position(from.is_fixed_position());
    }
    if (from.has_is_fixed_to_right_edge()) {
      set_is_fixed_to_right_edge(from.is_fixed_to_right_edge());
    }
    if (from.has_is_fixed_to_bottom_edge()) {
      set_is_fixed_to_bottom_edge(from.is_fixed_to_bottom_edge());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void LayerPositionConstraint::CopyFrom(const LayerPositionConstraint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cc.proto.LayerPositionConstraint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerPositionConstraint::IsInitialized() const {

  return true;
}

void LayerPositionConstraint::Swap(LayerPositionConstraint* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LayerPositionConstraint::InternalSwap(LayerPositionConstraint* other) {
  std::swap(is_fixed_position_, other->is_fixed_position_);
  std::swap(is_fixed_to_right_edge_, other->is_fixed_to_right_edge_);
  std::swap(is_fixed_to_bottom_edge_, other->is_fixed_to_bottom_edge_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LayerPositionConstraint::GetTypeName() const {
  return "cc.proto.LayerPositionConstraint";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LayerPositionConstraint

// optional bool is_fixed_position = 1;
bool LayerPositionConstraint::has_is_fixed_position() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LayerPositionConstraint::set_has_is_fixed_position() {
  _has_bits_[0] |= 0x00000001u;
}
void LayerPositionConstraint::clear_has_is_fixed_position() {
  _has_bits_[0] &= ~0x00000001u;
}
void LayerPositionConstraint::clear_is_fixed_position() {
  is_fixed_position_ = false;
  clear_has_is_fixed_position();
}
 bool LayerPositionConstraint::is_fixed_position() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerPositionConstraint.is_fixed_position)
  return is_fixed_position_;
}
 void LayerPositionConstraint::set_is_fixed_position(bool value) {
  set_has_is_fixed_position();
  is_fixed_position_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerPositionConstraint.is_fixed_position)
}

// optional bool is_fixed_to_right_edge = 2;
bool LayerPositionConstraint::has_is_fixed_to_right_edge() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LayerPositionConstraint::set_has_is_fixed_to_right_edge() {
  _has_bits_[0] |= 0x00000002u;
}
void LayerPositionConstraint::clear_has_is_fixed_to_right_edge() {
  _has_bits_[0] &= ~0x00000002u;
}
void LayerPositionConstraint::clear_is_fixed_to_right_edge() {
  is_fixed_to_right_edge_ = false;
  clear_has_is_fixed_to_right_edge();
}
 bool LayerPositionConstraint::is_fixed_to_right_edge() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerPositionConstraint.is_fixed_to_right_edge)
  return is_fixed_to_right_edge_;
}
 void LayerPositionConstraint::set_is_fixed_to_right_edge(bool value) {
  set_has_is_fixed_to_right_edge();
  is_fixed_to_right_edge_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerPositionConstraint.is_fixed_to_right_edge)
}

// optional bool is_fixed_to_bottom_edge = 3;
bool LayerPositionConstraint::has_is_fixed_to_bottom_edge() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LayerPositionConstraint::set_has_is_fixed_to_bottom_edge() {
  _has_bits_[0] |= 0x00000004u;
}
void LayerPositionConstraint::clear_has_is_fixed_to_bottom_edge() {
  _has_bits_[0] &= ~0x00000004u;
}
void LayerPositionConstraint::clear_is_fixed_to_bottom_edge() {
  is_fixed_to_bottom_edge_ = false;
  clear_has_is_fixed_to_bottom_edge();
}
 bool LayerPositionConstraint::is_fixed_to_bottom_edge() const {
  // @@protoc_insertion_point(field_get:cc.proto.LayerPositionConstraint.is_fixed_to_bottom_edge)
  return is_fixed_to_bottom_edge_;
}
 void LayerPositionConstraint::set_is_fixed_to_bottom_edge(bool value) {
  set_has_is_fixed_to_bottom_edge();
  is_fixed_to_bottom_edge_ = value;
  // @@protoc_insertion_point(field_set:cc.proto.LayerPositionConstraint.is_fixed_to_bottom_edge)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cc

// @@protoc_insertion_point(global_scope)
