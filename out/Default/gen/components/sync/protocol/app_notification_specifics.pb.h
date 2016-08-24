// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_notification_specifics.proto

#ifndef PROTOBUF_app_5fnotification_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_app_5fnotification_5fspecifics_2eproto__INCLUDED

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

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto();
void protobuf_AssignDesc_app_5fnotification_5fspecifics_2eproto();
void protobuf_ShutdownFile_app_5fnotification_5fspecifics_2eproto();

class AppNotification;

// ===================================================================

class AppNotification : public ::google::protobuf::MessageLite {
 public:
  AppNotification();
  virtual ~AppNotification();

  AppNotification(const AppNotification& from);

  inline AppNotification& operator=(const AppNotification& from) {
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

  static const AppNotification& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AppNotification* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(AppNotification* other);

  // implements Message ----------------------------------------------

  inline AppNotification* New() const { return New(NULL); }

  AppNotification* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AppNotification& from);
  void MergeFrom(const AppNotification& from);
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
  void InternalSwap(AppNotification* other);
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

  // optional string guid = 1;
  bool has_guid() const;
  void clear_guid();
  static const int kGuidFieldNumber = 1;
  const ::std::string& guid() const;
  void set_guid(const ::std::string& value);
  void set_guid(const char* value);
  void set_guid(const char* value, size_t size);
  ::std::string* mutable_guid();
  ::std::string* release_guid();
  void set_allocated_guid(::std::string* guid);

  // optional string app_id = 2;
  bool has_app_id() const;
  void clear_app_id();
  static const int kAppIdFieldNumber = 2;
  const ::std::string& app_id() const;
  void set_app_id(const ::std::string& value);
  void set_app_id(const char* value);
  void set_app_id(const char* value, size_t size);
  ::std::string* mutable_app_id();
  ::std::string* release_app_id();
  void set_allocated_app_id(::std::string* app_id);

  // optional int64 creation_timestamp_ms = 3;
  bool has_creation_timestamp_ms() const;
  void clear_creation_timestamp_ms();
  static const int kCreationTimestampMsFieldNumber = 3;
  ::google::protobuf::int64 creation_timestamp_ms() const;
  void set_creation_timestamp_ms(::google::protobuf::int64 value);

  // optional string title = 4;
  bool has_title() const;
  void clear_title();
  static const int kTitleFieldNumber = 4;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // optional string body_text = 5;
  bool has_body_text() const;
  void clear_body_text();
  static const int kBodyTextFieldNumber = 5;
  const ::std::string& body_text() const;
  void set_body_text(const ::std::string& value);
  void set_body_text(const char* value);
  void set_body_text(const char* value, size_t size);
  ::std::string* mutable_body_text();
  ::std::string* release_body_text();
  void set_allocated_body_text(::std::string* body_text);

  // optional string link_url = 6;
  bool has_link_url() const;
  void clear_link_url();
  static const int kLinkUrlFieldNumber = 6;
  const ::std::string& link_url() const;
  void set_link_url(const ::std::string& value);
  void set_link_url(const char* value);
  void set_link_url(const char* value, size_t size);
  ::std::string* mutable_link_url();
  ::std::string* release_link_url();
  void set_allocated_link_url(::std::string* link_url);

  // optional string link_text = 7;
  bool has_link_text() const;
  void clear_link_text();
  static const int kLinkTextFieldNumber = 7;
  const ::std::string& link_text() const;
  void set_link_text(const ::std::string& value);
  void set_link_text(const char* value);
  void set_link_text(const char* value, size_t size);
  ::std::string* mutable_link_text();
  ::std::string* release_link_text();
  void set_allocated_link_text(::std::string* link_text);

  // @@protoc_insertion_point(class_scope:sync_pb.AppNotification)
 private:
  inline void set_has_guid();
  inline void clear_has_guid();
  inline void set_has_app_id();
  inline void clear_has_app_id();
  inline void set_has_creation_timestamp_ms();
  inline void clear_has_creation_timestamp_ms();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_body_text();
  inline void clear_has_body_text();
  inline void set_has_link_url();
  inline void clear_has_link_url();
  inline void set_has_link_text();
  inline void clear_has_link_text();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr guid_;
  ::google::protobuf::internal::ArenaStringPtr app_id_;
  ::google::protobuf::int64 creation_timestamp_ms_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::internal::ArenaStringPtr body_text_;
  ::google::protobuf::internal::ArenaStringPtr link_url_;
  ::google::protobuf::internal::ArenaStringPtr link_text_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_app_5fnotification_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_app_5fnotification_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_app_5fnotification_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static AppNotification* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AppNotification

// optional string guid = 1;
inline bool AppNotification::has_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppNotification::set_has_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppNotification::clear_has_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppNotification::clear_guid() {
  guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_guid();
}
inline const ::std::string& AppNotification::guid() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.guid)
  return guid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_guid(const ::std::string& value) {
  set_has_guid();
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.guid)
}
inline void AppNotification::set_guid(const char* value) {
  set_has_guid();
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.guid)
}
inline void AppNotification::set_guid(const char* value, size_t size) {
  set_has_guid();
  guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.guid)
}
inline ::std::string* AppNotification::mutable_guid() {
  set_has_guid();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.guid)
  return guid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_guid() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.guid)
  clear_has_guid();
  return guid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_guid(::std::string* guid) {
  if (guid != NULL) {
    set_has_guid();
  } else {
    clear_has_guid();
  }
  guid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), guid);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.guid)
}

// optional string app_id = 2;
inline bool AppNotification::has_app_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AppNotification::set_has_app_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AppNotification::clear_has_app_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AppNotification::clear_app_id() {
  app_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_app_id();
}
inline const ::std::string& AppNotification::app_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.app_id)
  return app_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_app_id(const ::std::string& value) {
  set_has_app_id();
  app_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.app_id)
}
inline void AppNotification::set_app_id(const char* value) {
  set_has_app_id();
  app_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.app_id)
}
inline void AppNotification::set_app_id(const char* value, size_t size) {
  set_has_app_id();
  app_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.app_id)
}
inline ::std::string* AppNotification::mutable_app_id() {
  set_has_app_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.app_id)
  return app_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_app_id() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.app_id)
  clear_has_app_id();
  return app_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_app_id(::std::string* app_id) {
  if (app_id != NULL) {
    set_has_app_id();
  } else {
    clear_has_app_id();
  }
  app_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), app_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.app_id)
}

// optional int64 creation_timestamp_ms = 3;
inline bool AppNotification::has_creation_timestamp_ms() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AppNotification::set_has_creation_timestamp_ms() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AppNotification::clear_has_creation_timestamp_ms() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AppNotification::clear_creation_timestamp_ms() {
  creation_timestamp_ms_ = GOOGLE_LONGLONG(0);
  clear_has_creation_timestamp_ms();
}
inline ::google::protobuf::int64 AppNotification::creation_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.creation_timestamp_ms)
  return creation_timestamp_ms_;
}
inline void AppNotification::set_creation_timestamp_ms(::google::protobuf::int64 value) {
  set_has_creation_timestamp_ms();
  creation_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.creation_timestamp_ms)
}

// optional string title = 4;
inline bool AppNotification::has_title() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AppNotification::set_has_title() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AppNotification::clear_has_title() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AppNotification::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
inline const ::std::string& AppNotification::title() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.title)
  return title_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.title)
}
inline void AppNotification::set_title(const char* value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.title)
}
inline void AppNotification::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.title)
}
inline ::std::string* AppNotification::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_title() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.title)
}

// optional string body_text = 5;
inline bool AppNotification::has_body_text() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AppNotification::set_has_body_text() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AppNotification::clear_has_body_text() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AppNotification::clear_body_text() {
  body_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_body_text();
}
inline const ::std::string& AppNotification::body_text() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.body_text)
  return body_text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_body_text(const ::std::string& value) {
  set_has_body_text();
  body_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.body_text)
}
inline void AppNotification::set_body_text(const char* value) {
  set_has_body_text();
  body_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.body_text)
}
inline void AppNotification::set_body_text(const char* value, size_t size) {
  set_has_body_text();
  body_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.body_text)
}
inline ::std::string* AppNotification::mutable_body_text() {
  set_has_body_text();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.body_text)
  return body_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_body_text() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.body_text)
  clear_has_body_text();
  return body_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_body_text(::std::string* body_text) {
  if (body_text != NULL) {
    set_has_body_text();
  } else {
    clear_has_body_text();
  }
  body_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body_text);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.body_text)
}

// optional string link_url = 6;
inline bool AppNotification::has_link_url() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AppNotification::set_has_link_url() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AppNotification::clear_has_link_url() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AppNotification::clear_link_url() {
  link_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_link_url();
}
inline const ::std::string& AppNotification::link_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.link_url)
  return link_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_link_url(const ::std::string& value) {
  set_has_link_url();
  link_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.link_url)
}
inline void AppNotification::set_link_url(const char* value) {
  set_has_link_url();
  link_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.link_url)
}
inline void AppNotification::set_link_url(const char* value, size_t size) {
  set_has_link_url();
  link_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.link_url)
}
inline ::std::string* AppNotification::mutable_link_url() {
  set_has_link_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.link_url)
  return link_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_link_url() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.link_url)
  clear_has_link_url();
  return link_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_link_url(::std::string* link_url) {
  if (link_url != NULL) {
    set_has_link_url();
  } else {
    clear_has_link_url();
  }
  link_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), link_url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.link_url)
}

// optional string link_text = 7;
inline bool AppNotification::has_link_text() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AppNotification::set_has_link_text() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AppNotification::clear_has_link_text() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AppNotification::clear_link_text() {
  link_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_link_text();
}
inline const ::std::string& AppNotification::link_text() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppNotification.link_text)
  return link_text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_link_text(const ::std::string& value) {
  set_has_link_text();
  link_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppNotification.link_text)
}
inline void AppNotification::set_link_text(const char* value) {
  set_has_link_text();
  link_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppNotification.link_text)
}
inline void AppNotification::set_link_text(const char* value, size_t size) {
  set_has_link_text();
  link_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppNotification.link_text)
}
inline ::std::string* AppNotification::mutable_link_text() {
  set_has_link_text();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppNotification.link_text)
  return link_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppNotification::release_link_text() {
  // @@protoc_insertion_point(field_release:sync_pb.AppNotification.link_text)
  clear_has_link_text();
  return link_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppNotification::set_allocated_link_text(::std::string* link_text) {
  if (link_text != NULL) {
    set_has_link_text();
  } else {
    clear_has_link_text();
  }
  link_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), link_text);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppNotification.link_text)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_app_5fnotification_5fspecifics_2eproto__INCLUDED
