/*
 * Copyright 2021 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.7 */

#include "target.nanopb.h"

#include "Firestore/core/src/nanopb/pretty_printing.h"

namespace firebase {
namespace firestore {

using nanopb::PrintEnumField;
using nanopb::PrintHeader;
using nanopb::PrintMessageField;
using nanopb::PrintPrimitiveField;
using nanopb::PrintTail;

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t firestore_client_Target_fields[8] = {
    PB_FIELD(  1, INT32   , SINGULAR, STATIC  , FIRST, firestore_client_Target, target_id, target_id, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, firestore_client_Target, snapshot_version, target_id, &google_protobuf_Timestamp_fields),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, firestore_client_Target, resume_token, snapshot_version, 0),
    PB_FIELD(  4, INT64   , SINGULAR, STATIC  , OTHER, firestore_client_Target, last_listen_sequence_number, resume_token, 0),
    PB_ANONYMOUS_ONEOF_FIELD(target_type,   5, MESSAGE , ONEOF, STATIC  , OTHER, firestore_client_Target, query, last_listen_sequence_number, &google_firestore_v1_Target_QueryTarget_fields),
    PB_ANONYMOUS_ONEOF_FIELD(target_type,   6, MESSAGE , ONEOF, STATIC  , UNION, firestore_client_Target, documents, last_listen_sequence_number, &google_firestore_v1_Target_DocumentsTarget_fields),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, firestore_client_Target, last_limbo_free_snapshot_version, documents, &google_protobuf_Timestamp_fields),
    PB_LAST_FIELD
};

const pb_field_t firestore_client_TargetGlobal_fields[5] = {
    PB_FIELD(  1, INT32   , SINGULAR, STATIC  , FIRST, firestore_client_TargetGlobal, highest_target_id, highest_target_id, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, firestore_client_TargetGlobal, highest_listen_sequence_number, highest_target_id, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, firestore_client_TargetGlobal, last_remote_snapshot_version, highest_listen_sequence_number, &google_protobuf_Timestamp_fields),
    PB_FIELD(  4, INT32   , SINGULAR, STATIC  , OTHER, firestore_client_TargetGlobal, target_count, last_remote_snapshot_version, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(firestore_client_Target, query) < 65536 && pb_membersize(firestore_client_Target, documents) < 65536 && pb_membersize(firestore_client_Target, snapshot_version) < 65536 && pb_membersize(firestore_client_Target, last_limbo_free_snapshot_version) < 65536 && pb_membersize(firestore_client_TargetGlobal, last_remote_snapshot_version) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_firestore_client_Target_firestore_client_TargetGlobal)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(firestore_client_Target, query) < 256 && pb_membersize(firestore_client_Target, documents) < 256 && pb_membersize(firestore_client_Target, snapshot_version) < 256 && pb_membersize(firestore_client_Target, last_limbo_free_snapshot_version) < 256 && pb_membersize(firestore_client_TargetGlobal, last_remote_snapshot_version) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_firestore_client_Target_firestore_client_TargetGlobal)
#endif


std::string firestore_client_Target::ToString(int indent) const {
    std::string header = PrintHeader(indent, "Target", this);
    std::string result;

    result += PrintPrimitiveField("target_id: ", target_id, indent + 1, false);
    result += PrintMessageField("snapshot_version ",
        snapshot_version, indent + 1, false);
    result += PrintPrimitiveField("resume_token: ",
        resume_token, indent + 1, false);
    result += PrintPrimitiveField("last_listen_sequence_number: ",
        last_listen_sequence_number, indent + 1, false);
    switch (which_target_type) {
    case firestore_client_Target_query_tag:
        result += PrintMessageField("query ", query, indent + 1, true);
        break;
    case firestore_client_Target_documents_tag:
        result += PrintMessageField("documents ", documents, indent + 1, true);
        break;
    }
    result += PrintMessageField("last_limbo_free_snapshot_version ",
        last_limbo_free_snapshot_version, indent + 1, false);

    std::string tail = PrintTail(indent);
    return header + result + tail;
}

std::string firestore_client_TargetGlobal::ToString(int indent) const {
    std::string header = PrintHeader(indent, "TargetGlobal", this);
    std::string result;

    result += PrintPrimitiveField("highest_target_id: ",
        highest_target_id, indent + 1, false);
    result += PrintPrimitiveField("highest_listen_sequence_number: ",
        highest_listen_sequence_number, indent + 1, false);
    result += PrintMessageField("last_remote_snapshot_version ",
        last_remote_snapshot_version, indent + 1, false);
    result += PrintPrimitiveField("target_count: ",
        target_count, indent + 1, false);

    std::string tail = PrintTail(indent);
    return header + result + tail;
}

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
