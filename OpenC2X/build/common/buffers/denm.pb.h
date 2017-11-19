// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: denm.proto

#ifndef PROTOBUF_denm_2eproto__INCLUDED
#define PROTOBUF_denm_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ItsPduHeader.pb.h"
#include "DENMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace denmPackage {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_denm_2eproto();
void protobuf_AssignDesc_denm_2eproto();
void protobuf_ShutdownFile_denm_2eproto();

class DENM;

// ===================================================================

class DENM : public ::google::protobuf::Message {
 public:
  DENM();
  virtual ~DENM();

  DENM(const DENM& from);

  inline DENM& operator=(const DENM& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DENM& default_instance();

  void Swap(DENM* other);

  // implements Message ----------------------------------------------

  DENM* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DENM& from);
  void MergeFrom(const DENM& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .its.ItsPduHeader header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::its::ItsPduHeader& header() const;
  inline ::its::ItsPduHeader* mutable_header();
  inline ::its::ItsPduHeader* release_header();
  inline void set_allocated_header(::its::ItsPduHeader* header);

  // required .its.DENMessage msg = 2;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 2;
  inline const ::its::DENMessage& msg() const;
  inline ::its::DENMessage* mutable_msg();
  inline ::its::DENMessage* release_msg();
  inline void set_allocated_msg(::its::DENMessage* msg);

  // @@protoc_insertion_point(class_scope:denmPackage.DENM)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::its::ItsPduHeader* header_;
  ::its::DENMessage* msg_;
  friend void  protobuf_AddDesc_denm_2eproto();
  friend void protobuf_AssignDesc_denm_2eproto();
  friend void protobuf_ShutdownFile_denm_2eproto();

  void InitAsDefaultInstance();
  static DENM* default_instance_;
};
// ===================================================================


// ===================================================================

// DENM

// required .its.ItsPduHeader header = 1;
inline bool DENM::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DENM::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DENM::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DENM::clear_header() {
  if (header_ != NULL) header_->::its::ItsPduHeader::Clear();
  clear_has_header();
}
inline const ::its::ItsPduHeader& DENM::header() const {
  // @@protoc_insertion_point(field_get:denmPackage.DENM.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::its::ItsPduHeader* DENM::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::its::ItsPduHeader;
  // @@protoc_insertion_point(field_mutable:denmPackage.DENM.header)
  return header_;
}
inline ::its::ItsPduHeader* DENM::release_header() {
  clear_has_header();
  ::its::ItsPduHeader* temp = header_;
  header_ = NULL;
  return temp;
}
inline void DENM::set_allocated_header(::its::ItsPduHeader* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:denmPackage.DENM.header)
}

// required .its.DENMessage msg = 2;
inline bool DENM::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DENM::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DENM::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DENM::clear_msg() {
  if (msg_ != NULL) msg_->::its::DENMessage::Clear();
  clear_has_msg();
}
inline const ::its::DENMessage& DENM::msg() const {
  // @@protoc_insertion_point(field_get:denmPackage.DENM.msg)
  return msg_ != NULL ? *msg_ : *default_instance_->msg_;
}
inline ::its::DENMessage* DENM::mutable_msg() {
  set_has_msg();
  if (msg_ == NULL) msg_ = new ::its::DENMessage;
  // @@protoc_insertion_point(field_mutable:denmPackage.DENM.msg)
  return msg_;
}
inline ::its::DENMessage* DENM::release_msg() {
  clear_has_msg();
  ::its::DENMessage* temp = msg_;
  msg_ = NULL;
  return temp;
}
inline void DENM::set_allocated_msg(::its::DENMessage* msg) {
  delete msg_;
  msg_ = msg;
  if (msg) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  // @@protoc_insertion_point(field_set_allocated:denmPackage.DENM.msg)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace denmPackage

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_denm_2eproto__INCLUDED
