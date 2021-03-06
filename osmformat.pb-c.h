/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_src_2fosmformat_2eproto__INCLUDED
#define PROTOBUF_C_src_2fosmformat_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _OSMPBF__HeaderBlock OSMPBF__HeaderBlock;
typedef struct _OSMPBF__HeaderBBox OSMPBF__HeaderBBox;
typedef struct _OSMPBF__PrimitiveBlock OSMPBF__PrimitiveBlock;
typedef struct _OSMPBF__PrimitiveGroup OSMPBF__PrimitiveGroup;
typedef struct _OSMPBF__StringTable OSMPBF__StringTable;
typedef struct _OSMPBF__Info OSMPBF__Info;
typedef struct _OSMPBF__DenseInfo OSMPBF__DenseInfo;
typedef struct _OSMPBF__ChangeSet OSMPBF__ChangeSet;
typedef struct _OSMPBF__Node OSMPBF__Node;
typedef struct _OSMPBF__DenseNodes OSMPBF__DenseNodes;
typedef struct _OSMPBF__Way OSMPBF__Way;
typedef struct _OSMPBF__Relation OSMPBF__Relation;


/* --- enums --- */

typedef enum _OSMPBF__Relation__MemberType {
  OSMPBF__RELATION__MEMBER_TYPE__NODE = 0,
  OSMPBF__RELATION__MEMBER_TYPE__WAY = 1,
  OSMPBF__RELATION__MEMBER_TYPE__RELATION = 2
} OSMPBF__Relation__MemberType;

/* --- messages --- */

struct  _OSMPBF__HeaderBlock
{
  ProtobufCMessage base;
  OSMPBF__HeaderBBox *bbox;
  size_t n_required_features;
  char **required_features;
  size_t n_optional_features;
  char **optional_features;
  char *writingprogram;
  char *source;
};
#define OSMPBF__HEADER_BLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__header_block__descriptor) \
    , NULL, 0,NULL, 0,NULL, NULL, NULL }


struct  _OSMPBF__HeaderBBox
{
  ProtobufCMessage base;
  int64_t left;
  int64_t right;
  int64_t top;
  int64_t bottom;
};
#define OSMPBF__HEADER_BBOX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__header_bbox__descriptor) \
    , 0, 0, 0, 0 }


struct  _OSMPBF__PrimitiveBlock
{
  ProtobufCMessage base;
  OSMPBF__StringTable *stringtable;
  size_t n_primitivegroup;
  OSMPBF__PrimitiveGroup **primitivegroup;
  protobuf_c_boolean has_granularity;
  int32_t granularity;
  protobuf_c_boolean has_lat_offset;
  int64_t lat_offset;
  protobuf_c_boolean has_lon_offset;
  int64_t lon_offset;
  protobuf_c_boolean has_date_granularity;
  int32_t date_granularity;
};
#define OSMPBF__PRIMITIVE_BLOCK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__primitive_block__descriptor) \
    , NULL, 0,NULL, 0,100, 0,0, 0,0, 0,1000 }


struct  _OSMPBF__PrimitiveGroup
{
  ProtobufCMessage base;
  size_t n_nodes;
  OSMPBF__Node **nodes;
  OSMPBF__DenseNodes *dense;
  size_t n_ways;
  OSMPBF__Way **ways;
  size_t n_relations;
  OSMPBF__Relation **relations;
  size_t n_changesets;
  OSMPBF__ChangeSet **changesets;
};
#define OSMPBF__PRIMITIVE_GROUP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__primitive_group__descriptor) \
    , 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _OSMPBF__StringTable
{
  ProtobufCMessage base;
  size_t n_s;
  ProtobufCBinaryData *s;
};
#define OSMPBF__STRING_TABLE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__string_table__descriptor) \
    , 0,NULL }


struct  _OSMPBF__Info
{
  ProtobufCMessage base;
  protobuf_c_boolean has_version;
  int32_t version;
  protobuf_c_boolean has_timestamp;
  int64_t timestamp;
  protobuf_c_boolean has_changeset;
  int64_t changeset;
  protobuf_c_boolean has_uid;
  int32_t uid;
  protobuf_c_boolean has_user_sid;
  uint32_t user_sid;
};
#define OSMPBF__INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__info__descriptor) \
    , 0,-1, 0,0, 0,0, 0,0, 0,0 }


struct  _OSMPBF__DenseInfo
{
  ProtobufCMessage base;
  size_t n_version;
  int32_t *version;
  size_t n_timestamp;
  int64_t *timestamp;
  size_t n_changeset;
  int64_t *changeset;
  size_t n_uid;
  int32_t *uid;
  size_t n_user_sid;
  int32_t *user_sid;
};
#define OSMPBF__DENSE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__dense_info__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _OSMPBF__ChangeSet
{
  ProtobufCMessage base;
  int64_t id;
};
#define OSMPBF__CHANGE_SET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__change_set__descriptor) \
    , 0 }


struct  _OSMPBF__Node
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  OSMPBF__Info *info;
  int64_t lat;
  int64_t lon;
};
#define OSMPBF__NODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__node__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0, 0 }


struct  _OSMPBF__DenseNodes
{
  ProtobufCMessage base;
  size_t n_id;
  int64_t *id;
  OSMPBF__DenseInfo *denseinfo;
  size_t n_lat;
  int64_t *lat;
  size_t n_lon;
  int64_t *lon;
  size_t n_keys_vals;
  int32_t *keys_vals;
};
#define OSMPBF__DENSE_NODES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__dense_nodes__descriptor) \
    , 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _OSMPBF__Way
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  OSMPBF__Info *info;
  size_t n_refs;
  int64_t *refs;
};
#define OSMPBF__WAY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__way__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0,NULL }


struct  _OSMPBF__Relation
{
  ProtobufCMessage base;
  int64_t id;
  size_t n_keys;
  uint32_t *keys;
  size_t n_vals;
  uint32_t *vals;
  OSMPBF__Info *info;
  size_t n_roles_sid;
  int32_t *roles_sid;
  size_t n_memids;
  int64_t *memids;
  size_t n_types;
  OSMPBF__Relation__MemberType *types;
};
#define OSMPBF__RELATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&osmpbf__relation__descriptor) \
    , 0, 0,NULL, 0,NULL, NULL, 0,NULL, 0,NULL, 0,NULL }


/* OSMPBF__HeaderBlock methods */
void   osmpbf__header_block__init
                     (OSMPBF__HeaderBlock         *message);
size_t osmpbf__header_block__get_packed_size
                     (const OSMPBF__HeaderBlock   *message);
size_t osmpbf__header_block__pack
                     (const OSMPBF__HeaderBlock   *message,
                      uint8_t             *out);
size_t osmpbf__header_block__pack_to_buffer
                     (const OSMPBF__HeaderBlock   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__HeaderBlock *
       osmpbf__header_block__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__header_block__free_unpacked
                     (OSMPBF__HeaderBlock *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__HeaderBBox methods */
void   osmpbf__header_bbox__init
                     (OSMPBF__HeaderBBox         *message);
size_t osmpbf__header_bbox__get_packed_size
                     (const OSMPBF__HeaderBBox   *message);
size_t osmpbf__header_bbox__pack
                     (const OSMPBF__HeaderBBox   *message,
                      uint8_t             *out);
size_t osmpbf__header_bbox__pack_to_buffer
                     (const OSMPBF__HeaderBBox   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__HeaderBBox *
       osmpbf__header_bbox__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__header_bbox__free_unpacked
                     (OSMPBF__HeaderBBox *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__PrimitiveBlock methods */
void   osmpbf__primitive_block__init
                     (OSMPBF__PrimitiveBlock         *message);
size_t osmpbf__primitive_block__get_packed_size
                     (const OSMPBF__PrimitiveBlock   *message);
size_t osmpbf__primitive_block__pack
                     (const OSMPBF__PrimitiveBlock   *message,
                      uint8_t             *out);
size_t osmpbf__primitive_block__pack_to_buffer
                     (const OSMPBF__PrimitiveBlock   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__PrimitiveBlock *
       osmpbf__primitive_block__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__primitive_block__free_unpacked
                     (OSMPBF__PrimitiveBlock *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__PrimitiveGroup methods */
void   osmpbf__primitive_group__init
                     (OSMPBF__PrimitiveGroup         *message);
size_t osmpbf__primitive_group__get_packed_size
                     (const OSMPBF__PrimitiveGroup   *message);
size_t osmpbf__primitive_group__pack
                     (const OSMPBF__PrimitiveGroup   *message,
                      uint8_t             *out);
size_t osmpbf__primitive_group__pack_to_buffer
                     (const OSMPBF__PrimitiveGroup   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__PrimitiveGroup *
       osmpbf__primitive_group__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__primitive_group__free_unpacked
                     (OSMPBF__PrimitiveGroup *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__StringTable methods */
void   osmpbf__string_table__init
                     (OSMPBF__StringTable         *message);
size_t osmpbf__string_table__get_packed_size
                     (const OSMPBF__StringTable   *message);
size_t osmpbf__string_table__pack
                     (const OSMPBF__StringTable   *message,
                      uint8_t             *out);
size_t osmpbf__string_table__pack_to_buffer
                     (const OSMPBF__StringTable   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__StringTable *
       osmpbf__string_table__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__string_table__free_unpacked
                     (OSMPBF__StringTable *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__Info methods */
void   osmpbf__info__init
                     (OSMPBF__Info         *message);
size_t osmpbf__info__get_packed_size
                     (const OSMPBF__Info   *message);
size_t osmpbf__info__pack
                     (const OSMPBF__Info   *message,
                      uint8_t             *out);
size_t osmpbf__info__pack_to_buffer
                     (const OSMPBF__Info   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__Info *
       osmpbf__info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__info__free_unpacked
                     (OSMPBF__Info *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__DenseInfo methods */
void   osmpbf__dense_info__init
                     (OSMPBF__DenseInfo         *message);
size_t osmpbf__dense_info__get_packed_size
                     (const OSMPBF__DenseInfo   *message);
size_t osmpbf__dense_info__pack
                     (const OSMPBF__DenseInfo   *message,
                      uint8_t             *out);
size_t osmpbf__dense_info__pack_to_buffer
                     (const OSMPBF__DenseInfo   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__DenseInfo *
       osmpbf__dense_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__dense_info__free_unpacked
                     (OSMPBF__DenseInfo *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__ChangeSet methods */
void   osmpbf__change_set__init
                     (OSMPBF__ChangeSet         *message);
size_t osmpbf__change_set__get_packed_size
                     (const OSMPBF__ChangeSet   *message);
size_t osmpbf__change_set__pack
                     (const OSMPBF__ChangeSet   *message,
                      uint8_t             *out);
size_t osmpbf__change_set__pack_to_buffer
                     (const OSMPBF__ChangeSet   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__ChangeSet *
       osmpbf__change_set__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__change_set__free_unpacked
                     (OSMPBF__ChangeSet *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__Node methods */
void   osmpbf__node__init
                     (OSMPBF__Node         *message);
size_t osmpbf__node__get_packed_size
                     (const OSMPBF__Node   *message);
size_t osmpbf__node__pack
                     (const OSMPBF__Node   *message,
                      uint8_t             *out);
size_t osmpbf__node__pack_to_buffer
                     (const OSMPBF__Node   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__Node *
       osmpbf__node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__node__free_unpacked
                     (OSMPBF__Node *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__DenseNodes methods */
void   osmpbf__dense_nodes__init
                     (OSMPBF__DenseNodes         *message);
size_t osmpbf__dense_nodes__get_packed_size
                     (const OSMPBF__DenseNodes   *message);
size_t osmpbf__dense_nodes__pack
                     (const OSMPBF__DenseNodes   *message,
                      uint8_t             *out);
size_t osmpbf__dense_nodes__pack_to_buffer
                     (const OSMPBF__DenseNodes   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__DenseNodes *
       osmpbf__dense_nodes__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__dense_nodes__free_unpacked
                     (OSMPBF__DenseNodes *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__Way methods */
void   osmpbf__way__init
                     (OSMPBF__Way         *message);
size_t osmpbf__way__get_packed_size
                     (const OSMPBF__Way   *message);
size_t osmpbf__way__pack
                     (const OSMPBF__Way   *message,
                      uint8_t             *out);
size_t osmpbf__way__pack_to_buffer
                     (const OSMPBF__Way   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__Way *
       osmpbf__way__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__way__free_unpacked
                     (OSMPBF__Way *message,
                      ProtobufCAllocator *allocator);
/* OSMPBF__Relation methods */
void   osmpbf__relation__init
                     (OSMPBF__Relation         *message);
size_t osmpbf__relation__get_packed_size
                     (const OSMPBF__Relation   *message);
size_t osmpbf__relation__pack
                     (const OSMPBF__Relation   *message,
                      uint8_t             *out);
size_t osmpbf__relation__pack_to_buffer
                     (const OSMPBF__Relation   *message,
                      ProtobufCBuffer     *buffer);
OSMPBF__Relation *
       osmpbf__relation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   osmpbf__relation__free_unpacked
                     (OSMPBF__Relation *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*OSMPBF__HeaderBlock_Closure)
                 (const OSMPBF__HeaderBlock *message,
                  void *closure_data);
typedef void (*OSMPBF__HeaderBBox_Closure)
                 (const OSMPBF__HeaderBBox *message,
                  void *closure_data);
typedef void (*OSMPBF__PrimitiveBlock_Closure)
                 (const OSMPBF__PrimitiveBlock *message,
                  void *closure_data);
typedef void (*OSMPBF__PrimitiveGroup_Closure)
                 (const OSMPBF__PrimitiveGroup *message,
                  void *closure_data);
typedef void (*OSMPBF__StringTable_Closure)
                 (const OSMPBF__StringTable *message,
                  void *closure_data);
typedef void (*OSMPBF__Info_Closure)
                 (const OSMPBF__Info *message,
                  void *closure_data);
typedef void (*OSMPBF__DenseInfo_Closure)
                 (const OSMPBF__DenseInfo *message,
                  void *closure_data);
typedef void (*OSMPBF__ChangeSet_Closure)
                 (const OSMPBF__ChangeSet *message,
                  void *closure_data);
typedef void (*OSMPBF__Node_Closure)
                 (const OSMPBF__Node *message,
                  void *closure_data);
typedef void (*OSMPBF__DenseNodes_Closure)
                 (const OSMPBF__DenseNodes *message,
                  void *closure_data);
typedef void (*OSMPBF__Way_Closure)
                 (const OSMPBF__Way *message,
                  void *closure_data);
typedef void (*OSMPBF__Relation_Closure)
                 (const OSMPBF__Relation *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor osmpbf__header_block__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__header_bbox__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__primitive_block__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__primitive_group__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__string_table__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__info__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__dense_info__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__change_set__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__node__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__dense_nodes__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__way__descriptor;
extern const ProtobufCMessageDescriptor osmpbf__relation__descriptor;
extern const ProtobufCEnumDescriptor    osmpbf__relation__member_type__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_src_2fosmformat_2eproto__INCLUDED */
