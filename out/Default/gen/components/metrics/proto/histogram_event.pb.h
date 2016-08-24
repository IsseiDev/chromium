// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: histogram_event.proto

#ifndef PROTOBUF_histogram_5fevent_2eproto__INCLUDED
#define PROTOBUF_histogram_5fevent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace metrics {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_histogram_5fevent_2eproto();
void protobuf_AssignDesc_histogram_5fevent_2eproto();
void protobuf_ShutdownFile_histogram_5fevent_2eproto();

class HistogramEventProto;
class HistogramEventProto_Bucket;

// ===================================================================

class HistogramEventProto_Bucket : public ::google::protobuf::MessageLite {
 public:
  HistogramEventProto_Bucket();
  virtual ~HistogramEventProto_Bucket();

  HistogramEventProto_Bucket(const HistogramEventProto_Bucket& from);

  inline HistogramEventProto_Bucket& operator=(const HistogramEventProto_Bucket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const HistogramEventProto_Bucket& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HistogramEventProto_Bucket* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(HistogramEventProto_Bucket* other);

  // implements Message ----------------------------------------------

  inline HistogramEventProto_Bucket* New() const { return New(NULL); }

  HistogramEventProto_Bucket* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const HistogramEventProto_Bucket& from);
  void MergeFrom(const HistogramEventProto_Bucket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HistogramEventProto_Bucket* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 min = 1;
  bool has_min() const;
  void clear_min();
  static const int kMinFieldNumber = 1;
  ::google::protobuf::int64 min() const;
  void set_min(::google::protobuf::int64 value);

  // optional int64 max = 2;
  bool has_max() const;
  void clear_max();
  static const int kMaxFieldNumber = 2;
  ::google::protobuf::int64 max() const;
  void set_max(::google::protobuf::int64 value);

  // optional int32 bucket_index = 3 [deprecated = true];
  PROTOBUF_DEPRECATED_ATTR bool has_bucket_index() const;
  PROTOBUF_DEPRECATED_ATTR void clear_bucket_index();
  PROTOBUF_DEPRECATED_ATTR static const int kBucketIndexFieldNumber = 3;
  PROTOBUF_DEPRECATED_ATTR ::google::protobuf::int32 bucket_index() const;
  PROTOBUF_DEPRECATED_ATTR void set_bucket_index(::google::protobuf::int32 value);

  // optional int64 count = 4 [default = 1];
  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 4;
  ::google::protobuf::int64 count() const;
  void set_count(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:metrics.HistogramEventProto.Bucket)
 private:
  inline void set_has_min();
  inline void clear_has_min();
  inline void set_has_max();
  inline void clear_has_max();
  inline void set_has_bucket_index();
  inline void clear_has_bucket_index();
  inline void set_has_count();
  inline void clear_has_count();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 min_;
  ::google::protobuf::int64 max_;
  ::google::protobuf::int64 count_;
  ::google::protobuf::int32 bucket_index_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_histogram_5fevent_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_histogram_5fevent_2eproto();
  #endif
  friend void protobuf_AssignDesc_histogram_5fevent_2eproto();
  friend void protobuf_ShutdownFile_histogram_5fevent_2eproto();

  void InitAsDefaultInstance();
  static HistogramEventProto_Bucket* default_instance_;
};
// -------------------------------------------------------------------

class HistogramEventProto : public ::google::protobuf::MessageLite {
 public:
  HistogramEventProto();
  virtual ~HistogramEventProto();

  HistogramEventProto(const HistogramEventProto& from);

  inline HistogramEventProto& operator=(const HistogramEventProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const HistogramEventProto& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HistogramEventProto* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(HistogramEventProto* other);

  // implements Message ----------------------------------------------

  inline HistogramEventProto* New() const { return New(NULL); }

  HistogramEventProto* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const HistogramEventProto& from);
  void MergeFrom(const HistogramEventProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HistogramEventProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef HistogramEventProto_Bucket Bucket;

  // accessors -------------------------------------------------------

  // optional fixed64 name_hash = 1;
  bool has_name_hash() const;
  void clear_name_hash();
  static const int kNameHashFieldNumber = 1;
  ::google::protobuf::uint64 name_hash() const;
  void set_name_hash(::google::protobuf::uint64 value);

  // optional int64 sum = 2;
  bool has_sum() const;
  void clear_sum();
  static const int kSumFieldNumber = 2;
  ::google::protobuf::int64 sum() const;
  void set_sum(::google::protobuf::int64 value);

  // repeated .metrics.HistogramEventProto.Bucket bucket = 3;
  int bucket_size() const;
  void clear_bucket();
  static const int kBucketFieldNumber = 3;
  const ::metrics::HistogramEventProto_Bucket& bucket(int index) const;
  ::metrics::HistogramEventProto_Bucket* mutable_bucket(int index);
  ::metrics::HistogramEventProto_Bucket* add_bucket();
  ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto_Bucket >*
      mutable_bucket();
  const ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto_Bucket >&
      bucket() const;

  // @@protoc_insertion_point(class_scope:metrics.HistogramEventProto)
 private:
  inline void set_has_name_hash();
  inline void clear_has_name_hash();
  inline void set_has_sum();
  inline void clear_has_sum();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 name_hash_;
  ::google::protobuf::int64 sum_;
  ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto_Bucket > bucket_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_histogram_5fevent_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_histogram_5fevent_2eproto();
  #endif
  friend void protobuf_AssignDesc_histogram_5fevent_2eproto();
  friend void protobuf_ShutdownFile_histogram_5fevent_2eproto();

  void InitAsDefaultInstance();
  static HistogramEventProto* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// HistogramEventProto_Bucket

// optional int64 min = 1;
inline bool HistogramEventProto_Bucket::has_min() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HistogramEventProto_Bucket::set_has_min() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HistogramEventProto_Bucket::clear_has_min() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HistogramEventProto_Bucket::clear_min() {
  min_ = GOOGLE_LONGLONG(0);
  clear_has_min();
}
inline ::google::protobuf::int64 HistogramEventProto_Bucket::min() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.Bucket.min)
  return min_;
}
inline void HistogramEventProto_Bucket::set_min(::google::protobuf::int64 value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.Bucket.min)
}

// optional int64 max = 2;
inline bool HistogramEventProto_Bucket::has_max() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HistogramEventProto_Bucket::set_has_max() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HistogramEventProto_Bucket::clear_has_max() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HistogramEventProto_Bucket::clear_max() {
  max_ = GOOGLE_LONGLONG(0);
  clear_has_max();
}
inline ::google::protobuf::int64 HistogramEventProto_Bucket::max() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.Bucket.max)
  return max_;
}
inline void HistogramEventProto_Bucket::set_max(::google::protobuf::int64 value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.Bucket.max)
}

// optional int32 bucket_index = 3 [deprecated = true];
inline bool HistogramEventProto_Bucket::has_bucket_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HistogramEventProto_Bucket::set_has_bucket_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HistogramEventProto_Bucket::clear_has_bucket_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HistogramEventProto_Bucket::clear_bucket_index() {
  bucket_index_ = 0;
  clear_has_bucket_index();
}
inline ::google::protobuf::int32 HistogramEventProto_Bucket::bucket_index() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.Bucket.bucket_index)
  return bucket_index_;
}
inline void HistogramEventProto_Bucket::set_bucket_index(::google::protobuf::int32 value) {
  set_has_bucket_index();
  bucket_index_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.Bucket.bucket_index)
}

// optional int64 count = 4 [default = 1];
inline bool HistogramEventProto_Bucket::has_count() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HistogramEventProto_Bucket::set_has_count() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HistogramEventProto_Bucket::clear_has_count() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HistogramEventProto_Bucket::clear_count() {
  count_ = GOOGLE_LONGLONG(1);
  clear_has_count();
}
inline ::google::protobuf::int64 HistogramEventProto_Bucket::count() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.Bucket.count)
  return count_;
}
inline void HistogramEventProto_Bucket::set_count(::google::protobuf::int64 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.Bucket.count)
}

// -------------------------------------------------------------------

// HistogramEventProto

// optional fixed64 name_hash = 1;
inline bool HistogramEventProto::has_name_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HistogramEventProto::set_has_name_hash() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HistogramEventProto::clear_has_name_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HistogramEventProto::clear_name_hash() {
  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_name_hash();
}
inline ::google::protobuf::uint64 HistogramEventProto::name_hash() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.name_hash)
  return name_hash_;
}
inline void HistogramEventProto::set_name_hash(::google::protobuf::uint64 value) {
  set_has_name_hash();
  name_hash_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.name_hash)
}

// optional int64 sum = 2;
inline bool HistogramEventProto::has_sum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HistogramEventProto::set_has_sum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HistogramEventProto::clear_has_sum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HistogramEventProto::clear_sum() {
  sum_ = GOOGLE_LONGLONG(0);
  clear_has_sum();
}
inline ::google::protobuf::int64 HistogramEventProto::sum() const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.sum)
  return sum_;
}
inline void HistogramEventProto::set_sum(::google::protobuf::int64 value) {
  set_has_sum();
  sum_ = value;
  // @@protoc_insertion_point(field_set:metrics.HistogramEventProto.sum)
}

// repeated .metrics.HistogramEventProto.Bucket bucket = 3;
inline int HistogramEventProto::bucket_size() const {
  return bucket_.size();
}
inline void HistogramEventProto::clear_bucket() {
  bucket_.Clear();
}
inline const ::metrics::HistogramEventProto_Bucket& HistogramEventProto::bucket(int index) const {
  // @@protoc_insertion_point(field_get:metrics.HistogramEventProto.bucket)
  return bucket_.Get(index);
}
inline ::metrics::HistogramEventProto_Bucket* HistogramEventProto::mutable_bucket(int index) {
  // @@protoc_insertion_point(field_mutable:metrics.HistogramEventProto.bucket)
  return bucket_.Mutable(index);
}
inline ::metrics::HistogramEventProto_Bucket* HistogramEventProto::add_bucket() {
  // @@protoc_insertion_point(field_add:metrics.HistogramEventProto.bucket)
  return bucket_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto_Bucket >*
HistogramEventProto::mutable_bucket() {
  // @@protoc_insertion_point(field_mutable_list:metrics.HistogramEventProto.bucket)
  return &bucket_;
}
inline const ::google::protobuf::RepeatedPtrField< ::metrics::HistogramEventProto_Bucket >&
HistogramEventProto::bucket() const {
  // @@protoc_insertion_point(field_list:metrics.HistogramEventProto.bucket)
  return bucket_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_histogram_5fevent_2eproto__INCLUDED