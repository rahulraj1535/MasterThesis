// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LowFreqContainer.proto

#ifndef PROTOBUF_LowFreqContainer_2eproto__INCLUDED
#define PROTOBUF_LowFreqContainer_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "BasicVehicleLowFreqContainer.pb.h"
// @@protoc_insertion_point(includes)

namespace its {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LowFreqContainer_2eproto();
void protobuf_AssignDesc_LowFreqContainer_2eproto();
void protobuf_ShutdownFile_LowFreqContainer_2eproto();

class LowFreqContainer;

enum LowFreqContainer_Type {
  LowFreqContainer_Type_BASIC_VEHICLE_LOW_FREQ_CONTAINER = 1
};
bool LowFreqContainer_Type_IsValid(int value);
const LowFreqContainer_Type LowFreqContainer_Type_Type_MIN = LowFreqContainer_Type_BASIC_VEHICLE_LOW_FREQ_CONTAINER;
const LowFreqContainer_Type LowFreqContainer_Type_Type_MAX = LowFreqContainer_Type_BASIC_VEHICLE_LOW_FREQ_CONTAINER;
const int LowFreqContainer_Type_Type_ARRAYSIZE = LowFreqContainer_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* LowFreqContainer_Type_descriptor();
inline const ::std::string& LowFreqContainer_Type_Name(LowFreqContainer_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    LowFreqContainer_Type_descriptor(), value);
}
inline bool LowFreqContainer_Type_Parse(
    const ::std::string& name, LowFreqContainer_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LowFreqContainer_Type>(
    LowFreqContainer_Type_descriptor(), name, value);
}
// ===================================================================

class LowFreqContainer : public ::google::protobuf::Message {
 public:
  LowFreqContainer();
  virtual ~LowFreqContainer();

  LowFreqContainer(const LowFreqContainer& from);

  inline LowFreqContainer& operator=(const LowFreqContainer& from) {
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
  static const LowFreqContainer& default_instance();

  void Swap(LowFreqContainer* other);

  // implements Message ----------------------------------------------

  LowFreqContainer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LowFreqContainer& from);
  void MergeFrom(const LowFreqContainer& from);
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

  typedef LowFreqContainer_Type Type;
  static const Type BASIC_VEHICLE_LOW_FREQ_CONTAINER = LowFreqContainer_Type_BASIC_VEHICLE_LOW_FREQ_CONTAINER;
  static inline bool Type_IsValid(int value) {
    return LowFreqContainer_Type_IsValid(value);
  }
  static const Type Type_MIN =
    LowFreqContainer_Type_Type_MIN;
  static const Type Type_MAX =
    LowFreqContainer_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    LowFreqContainer_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return LowFreqContainer_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return LowFreqContainer_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return LowFreqContainer_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .its.LowFreqContainer.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::its::LowFreqContainer_Type type() const;
  inline void set_type(::its::LowFreqContainer_Type value);

  // optional .its.BasicVehicleLowFreqContainer basicVehicleLowFreqContainer = 2;
  inline bool has_basicvehiclelowfreqcontainer() const;
  inline void clear_basicvehiclelowfreqcontainer();
  static const int kBasicVehicleLowFreqContainerFieldNumber = 2;
  inline const ::its::BasicVehicleLowFreqContainer& basicvehiclelowfreqcontainer() const;
  inline ::its::BasicVehicleLowFreqContainer* mutable_basicvehiclelowfreqcontainer();
  inline ::its::BasicVehicleLowFreqContainer* release_basicvehiclelowfreqcontainer();
  inline void set_allocated_basicvehiclelowfreqcontainer(::its::BasicVehicleLowFreqContainer* basicvehiclelowfreqcontainer);

  // @@protoc_insertion_point(class_scope:its.LowFreqContainer)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_basicvehiclelowfreqcontainer();
  inline void clear_has_basicvehiclelowfreqcontainer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::its::BasicVehicleLowFreqContainer* basicvehiclelowfreqcontainer_;
  int type_;
  friend void  protobuf_AddDesc_LowFreqContainer_2eproto();
  friend void protobuf_AssignDesc_LowFreqContainer_2eproto();
  friend void protobuf_ShutdownFile_LowFreqContainer_2eproto();

  void InitAsDefaultInstance();
  static LowFreqContainer* default_instance_;
};
// ===================================================================


// ===================================================================

// LowFreqContainer

// required .its.LowFreqContainer.Type type = 1;
inline bool LowFreqContainer::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LowFreqContainer::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LowFreqContainer::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LowFreqContainer::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::its::LowFreqContainer_Type LowFreqContainer::type() const {
  // @@protoc_insertion_point(field_get:its.LowFreqContainer.type)
  return static_cast< ::its::LowFreqContainer_Type >(type_);
}
inline void LowFreqContainer::set_type(::its::LowFreqContainer_Type value) {
  assert(::its::LowFreqContainer_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:its.LowFreqContainer.type)
}

// optional .its.BasicVehicleLowFreqContainer basicVehicleLowFreqContainer = 2;
inline bool LowFreqContainer::has_basicvehiclelowfreqcontainer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LowFreqContainer::set_has_basicvehiclelowfreqcontainer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LowFreqContainer::clear_has_basicvehiclelowfreqcontainer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LowFreqContainer::clear_basicvehiclelowfreqcontainer() {
  if (basicvehiclelowfreqcontainer_ != NULL) basicvehiclelowfreqcontainer_->::its::BasicVehicleLowFreqContainer::Clear();
  clear_has_basicvehiclelowfreqcontainer();
}
inline const ::its::BasicVehicleLowFreqContainer& LowFreqContainer::basicvehiclelowfreqcontainer() const {
  // @@protoc_insertion_point(field_get:its.LowFreqContainer.basicVehicleLowFreqContainer)
  return basicvehiclelowfreqcontainer_ != NULL ? *basicvehiclelowfreqcontainer_ : *default_instance_->basicvehiclelowfreqcontainer_;
}
inline ::its::BasicVehicleLowFreqContainer* LowFreqContainer::mutable_basicvehiclelowfreqcontainer() {
  set_has_basicvehiclelowfreqcontainer();
  if (basicvehiclelowfreqcontainer_ == NULL) basicvehiclelowfreqcontainer_ = new ::its::BasicVehicleLowFreqContainer;
  // @@protoc_insertion_point(field_mutable:its.LowFreqContainer.basicVehicleLowFreqContainer)
  return basicvehiclelowfreqcontainer_;
}
inline ::its::BasicVehicleLowFreqContainer* LowFreqContainer::release_basicvehiclelowfreqcontainer() {
  clear_has_basicvehiclelowfreqcontainer();
  ::its::BasicVehicleLowFreqContainer* temp = basicvehiclelowfreqcontainer_;
  basicvehiclelowfreqcontainer_ = NULL;
  return temp;
}
inline void LowFreqContainer::set_allocated_basicvehiclelowfreqcontainer(::its::BasicVehicleLowFreqContainer* basicvehiclelowfreqcontainer) {
  delete basicvehiclelowfreqcontainer_;
  basicvehiclelowfreqcontainer_ = basicvehiclelowfreqcontainer;
  if (basicvehiclelowfreqcontainer) {
    set_has_basicvehiclelowfreqcontainer();
  } else {
    clear_has_basicvehiclelowfreqcontainer();
  }
  // @@protoc_insertion_point(field_set_allocated:its.LowFreqContainer.basicVehicleLowFreqContainer)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace its

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::its::LowFreqContainer_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::its::LowFreqContainer_Type>() {
  return ::its::LowFreqContainer_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LowFreqContainer_2eproto__INCLUDED
