// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_arena_import.proto

#include "google/protobuf/unittest_no_arena_import.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace proto2_arena_unittest {
class ImportNoArenaNestedMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ImportNoArenaNestedMessage> _instance;
} _ImportNoArenaNestedMessage_default_instance_;
}  // namespace proto2_arena_unittest
static void InitDefaultsscc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto2_arena_unittest::_ImportNoArenaNestedMessage_default_instance_;
    new (ptr) ::proto2_arena_unittest::ImportNoArenaNestedMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto2_arena_unittest::ImportNoArenaNestedMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ImportNoArenaNestedMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ImportNoArenaNestedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ImportNoArenaNestedMessage, d_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::proto2_arena_unittest::ImportNoArenaNestedMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto2_arena_unittest::_ImportNoArenaNestedMessage_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.google/protobuf/unittest_no_arena_impo"
  "rt.proto\022\025proto2_arena_unittest\"\'\n\032Impor"
  "tNoArenaNestedMessage\022\t\n\001d\030\001 \001(\005"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_sccs[1] = {
  &scc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_once;
static bool descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto = {
  &descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_initialized, descriptor_table_protodef_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto, "google/protobuf/unittest_no_arena_import.proto", 112,
  &descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_once, descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_sccs, descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto, file_level_service_descriptors_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto), true);
namespace proto2_arena_unittest {

// ===================================================================

void ImportNoArenaNestedMessage::InitAsDefaultInstance() {
}
class ImportNoArenaNestedMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<ImportNoArenaNestedMessage>()._has_bits_);
  static void set_has_d(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ImportNoArenaNestedMessage::ImportNoArenaNestedMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
}
ImportNoArenaNestedMessage::ImportNoArenaNestedMessage(const ImportNoArenaNestedMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  d_ = from.d_;
  // @@protoc_insertion_point(copy_constructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
}

void ImportNoArenaNestedMessage::SharedCtor() {
  d_ = 0;
}

ImportNoArenaNestedMessage::~ImportNoArenaNestedMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
  SharedDtor();
}

void ImportNoArenaNestedMessage::SharedDtor() {
}

void ImportNoArenaNestedMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ImportNoArenaNestedMessage& ImportNoArenaNestedMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ImportNoArenaNestedMessage_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto.base);
  return *internal_default_instance();
}


void ImportNoArenaNestedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  d_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ImportNoArenaNestedMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 d = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_d(&has_bits);
          d_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ImportNoArenaNestedMessage::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 d = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_d(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.ImportNoArenaNestedMessage)
  return target;
}

size_t ImportNoArenaNestedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 d = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_d());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ImportNoArenaNestedMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ImportNoArenaNestedMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ImportNoArenaNestedMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_arena_unittest.ImportNoArenaNestedMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_arena_unittest.ImportNoArenaNestedMessage)
    MergeFrom(*source);
  }
}

void ImportNoArenaNestedMessage::MergeFrom(const ImportNoArenaNestedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_d()) {
    _internal_set_d(from._internal_d());
  }
}

void ImportNoArenaNestedMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportNoArenaNestedMessage::CopyFrom(const ImportNoArenaNestedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportNoArenaNestedMessage::IsInitialized() const {
  return true;
}

void ImportNoArenaNestedMessage::InternalSwap(ImportNoArenaNestedMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(d_, other->d_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ImportNoArenaNestedMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto2_arena_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::proto2_arena_unittest::ImportNoArenaNestedMessage* Arena::CreateMaybeMessage< ::proto2_arena_unittest::ImportNoArenaNestedMessage >(Arena* arena) {
  return Arena::CreateInternal< ::proto2_arena_unittest::ImportNoArenaNestedMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>