/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NeighbourList_v390ext_H_
#define	_NeighbourList_v390ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Neighbour_v390ext;

/* NeighbourList-v390ext */
typedef struct NeighbourList_v390ext {
	A_SEQUENCE_OF(struct Neighbour_v390ext) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighbourList_v390ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighbourList_v390ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Neighbour-v390ext.h"

#endif	/* _NeighbourList_v390ext_H_ */
#include <asn_internal.h>
