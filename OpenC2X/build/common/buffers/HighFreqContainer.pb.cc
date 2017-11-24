// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HighFreqContainer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HighFreqContainer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace its {

namespace {

const ::google::protobuf::Descriptor* HighFreqContainer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HighFreqContainer_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* HighFreqContainer_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_HighFreqContainer_2eproto() {
  protobuf_AddDesc_HighFreqContainer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "HighFreqContainer.proto");
  GOOGLE_CHECK(file != NULL);
  HighFreqContainer_descriptor_ = file->message_type(0);
  static const int HighFreqContainer_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, basicvehiclehighfreqcontainer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, rsuhighfreqcontainer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, vruhighfreqcontainer_),
  };
  HighFreqContainer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HighFreqContainer_descriptor_,
      HighFreqContainer::default_instance_,
      HighFreqContainer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HighFreqContainer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HighFreqContainer));
  HighFreqContainer_Type_descriptor_ = HighFreqContainer_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_HighFreqContainer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HighFreqContainer_descriptor_, &HighFreqContainer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_HighFreqContainer_2eproto() {
  delete HighFreqContainer::default_instance_;
  delete HighFreqContainer_reflection_;
}

void protobuf_AddDesc_HighFreqContainer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::its::protobuf_AddDesc_BasicVehicleHighFreqContainer_2eproto();
  ::its::protobuf_AddDesc_RsuHighFreqContainer_2eproto();
  ::its::protobuf_AddDesc_VruHighFreqContainer_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027HighFreqContainer.proto\022\003its\032#BasicVeh"
    "icleHighFreqContainer.proto\032\032RsuHighFreq"
    "Container.proto\032\032VruHighFreqContainer.pr"
    "oto\"\334\002\n\021HighFreqContainer\022)\n\004type\030\001 \002(\0162"
    "\033.its.HighFreqContainer.Type\022I\n\035basicVeh"
    "icleHighFreqContainer\030\002 \001(\0132\".its.BasicV"
    "ehicleHighFreqContainer\0227\n\024rsuHighFreqCo"
    "ntainer\030\003 \001(\0132\031.its.RsuHighFreqContainer"
    "\0227\n\024vruHighFreqContainer\030\004 \001(\0132\031.its.Vru"
    "HighFreqContainer\"_\n\004Type\022\035\n\031BASIC_HIGH_"
    "FREQ_CONTAINER\020\001\022\033\n\027RSU_HIGH_FREQ_CONTAI"
    "NER\020\002\022\033\n\027VRU_HIGH_FREQ_CONTAINER\020\003", 474);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HighFreqContainer.proto", &protobuf_RegisterTypes);
  HighFreqContainer::default_instance_ = new HighFreqContainer();
  HighFreqContainer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HighFreqContainer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HighFreqContainer_2eproto {
  StaticDescriptorInitializer_HighFreqContainer_2eproto() {
    protobuf_AddDesc_HighFreqContainer_2eproto();
  }
} static_descriptor_initializer_HighFreqContainer_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* HighFreqContainer_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HighFreqContainer_Type_descriptor_;
}
bool HighFreqContainer_Type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const HighFreqContainer_Type HighFreqContainer::BASIC_HIGH_FREQ_CONTAINER;
const HighFreqContainer_Type HighFreqContainer::RSU_HIGH_FREQ_CONTAINER;
const HighFreqContainer_Type HighFreqContainer::VRU_HIGH_FREQ_CONTAINER;
const HighFreqContainer_Type HighFreqContainer::Type_MIN;
const HighFreqContainer_Type HighFreqContainer::Type_MAX;
const int HighFreqContainer::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int HighFreqContainer::kTypeFieldNumber;
const int HighFreqContainer::kBasicVehicleHighFreqContainerFieldNumber;
const int HighFreqContainer::kRsuHighFreqContainerFieldNumber;
const int HighFreqContainer::kVruHighFreqContainerFieldNumber;
#endif  // !_MSC_VER

HighFreqContainer::HighFreqContainer()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:its.HighFreqContainer)
}

void HighFreqContainer::InitAsDefaultInstance() {
  basicvehiclehighfreqcontainer_ = const_cast< ::its::BasicVehicleHighFreqContainer*>(&::its::BasicVehicleHighFreqContainer::default_instance());
  rsuhighfreqcontainer_ = const_cast< ::its::RsuHighFreqContainer*>(&::its::RsuHighFreqContainer::default_instance());
  vruhighfreqcontainer_ = const_cast< ::its::VruHighFreqContainer*>(&::its::VruHighFreqContainer::default_instance());
}

HighFreqContainer::HighFreqContainer(const HighFreqContainer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:its.HighFreqContainer)
}

void HighFreqContainer::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  basicvehiclehighfreqcontainer_ = NULL;
  rsuhighfreqcontainer_ = NULL;
  vruhighfreqcontainer_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HighFreqContainer::~HighFreqContainer() {
  // @@protoc_insertion_point(destructor:its.HighFreqContainer)
  SharedDtor();
}

void HighFreqContainer::SharedDtor() {
  if (this != default_instance_) {
    delete basicvehiclehighfreqcontainer_;
    delete rsuhighfreqcontainer_;
    delete vruhighfreqcontainer_;
  }
}

void HighFreqContainer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HighFreqContainer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HighFreqContainer_descriptor_;
}

const HighFreqContainer& HighFreqContainer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HighFreqContainer_2eproto();
  return *default_instance_;
}

HighFreqContainer* HighFreqContainer::default_instance_ = NULL;

HighFreqContainer* HighFreqContainer::New() const {
  return new HighFreqContainer;
}

void HighFreqContainer::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    type_ = 1;
    if (has_basicvehiclehighfreqcontainer()) {
      if (basicvehiclehighfreqcontainer_ != NULL) basicvehiclehighfreqcontainer_->::its::BasicVehicleHighFreqContainer::Clear();
    }
    if (has_rsuhighfreqcontainer()) {
      if (rsuhighfreqcontainer_ != NULL) rsuhighfreqcontainer_->::its::RsuHighFreqContainer::Clear();
    }
    if (has_vruhighfreqcontainer()) {
      if (vruhighfreqcontainer_ != NULL) vruhighfreqcontainer_->::its::VruHighFreqContainer::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HighFreqContainer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:its.HighFreqContainer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .its.HighFreqContainer.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::its::HighFreqContainer_Type_IsValid(value)) {
            set_type(static_cast< ::its::HighFreqContainer_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_basicVehicleHighFreqContainer;
        break;
      }

      // optional .its.BasicVehicleHighFreqContainer basicVehicleHighFreqContainer = 2;
      case 2: {
        if (tag == 18) {
         parse_basicVehicleHighFreqContainer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_basicvehiclehighfreqcontainer()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_rsuHighFreqContainer;
        break;
      }

      // optional .its.RsuHighFreqContainer rsuHighFreqContainer = 3;
      case 3: {
        if (tag == 26) {
         parse_rsuHighFreqContainer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rsuhighfreqcontainer()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_vruHighFreqContainer;
        break;
      }

      // optional .its.VruHighFreqContainer vruHighFreqContainer = 4;
      case 4: {
        if (tag == 34) {
         parse_vruHighFreqContainer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_vruhighfreqcontainer()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:its.HighFreqContainer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:its.HighFreqContainer)
  return false;
#undef DO_
}

void HighFreqContainer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:its.HighFreqContainer)
  // required .its.HighFreqContainer.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .its.BasicVehicleHighFreqContainer basicVehicleHighFreqContainer = 2;
  if (has_basicvehiclehighfreqcontainer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->basicvehiclehighfreqcontainer(), output);
  }

  // optional .its.RsuHighFreqContainer rsuHighFreqContainer = 3;
  if (has_rsuhighfreqcontainer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->rsuhighfreqcontainer(), output);
  }

  // optional .its.VruHighFreqContainer vruHighFreqContainer = 4;
  if (has_vruhighfreqcontainer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->vruhighfreqcontainer(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:its.HighFreqContainer)
}

::google::protobuf::uint8* HighFreqContainer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:its.HighFreqContainer)
  // required .its.HighFreqContainer.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .its.BasicVehicleHighFreqContainer basicVehicleHighFreqContainer = 2;
  if (has_basicvehiclehighfreqcontainer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->basicvehiclehighfreqcontainer(), target);
  }

  // optional .its.RsuHighFreqContainer rsuHighFreqContainer = 3;
  if (has_rsuhighfreqcontainer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->rsuhighfreqcontainer(), target);
  }

  // optional .its.VruHighFreqContainer vruHighFreqContainer = 4;
  if (has_vruhighfreqcontainer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->vruhighfreqcontainer(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:its.HighFreqContainer)
  return target;
}

int HighFreqContainer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .its.HighFreqContainer.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .its.BasicVehicleHighFreqContainer basicVehicleHighFreqContainer = 2;
    if (has_basicvehiclehighfreqcontainer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->basicvehiclehighfreqcontainer());
    }

    // optional .its.RsuHighFreqContainer rsuHighFreqContainer = 3;
    if (has_rsuhighfreqcontainer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rsuhighfreqcontainer());
    }

    // optional .its.VruHighFreqContainer vruHighFreqContainer = 4;
    if (has_vruhighfreqcontainer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->vruhighfreqcontainer());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HighFreqContainer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HighFreqContainer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HighFreqContainer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HighFreqContainer::MergeFrom(const HighFreqContainer& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_basicvehiclehighfreqcontainer()) {
      mutable_basicvehiclehighfreqcontainer()->::its::BasicVehicleHighFreqContainer::MergeFrom(from.basicvehiclehighfreqcontainer());
    }
    if (from.has_rsuhighfreqcontainer()) {
      mutable_rsuhighfreqcontainer()->::its::RsuHighFreqContainer::MergeFrom(from.rsuhighfreqcontainer());
    }
    if (from.has_vruhighfreqcontainer()) {
      mutable_vruhighfreqcontainer()->::its::VruHighFreqContainer::MergeFrom(from.vruhighfreqcontainer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HighFreqContainer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HighFreqContainer::CopyFrom(const HighFreqContainer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HighFreqContainer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_basicvehiclehighfreqcontainer()) {
    if (!this->basicvehiclehighfreqcontainer().IsInitialized()) return false;
  }
  if (has_rsuhighfreqcontainer()) {
    if (!this->rsuhighfreqcontainer().IsInitialized()) return false;
  }
  if (has_vruhighfreqcontainer()) {
    if (!this->vruhighfreqcontainer().IsInitialized()) return false;
  }
  return true;
}

void HighFreqContainer::Swap(HighFreqContainer* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(basicvehiclehighfreqcontainer_, other->basicvehiclehighfreqcontainer_);
    std::swap(rsuhighfreqcontainer_, other->rsuhighfreqcontainer_);
    std::swap(vruhighfreqcontainer_, other->vruhighfreqcontainer_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HighFreqContainer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HighFreqContainer_descriptor_;
  metadata.reflection = HighFreqContainer_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace its

// @@protoc_insertion_point(global_scope)
