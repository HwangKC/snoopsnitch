/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Ganss_Sat_Info_NavList_H_
#define	_Ganss_Sat_Info_NavList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ganss_Sat_Info_Nav;

/* Ganss-Sat-Info-NavList */
typedef struct Ganss_Sat_Info_NavList {
	A_SEQUENCE_OF(struct Ganss_Sat_Info_Nav) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ganss_Sat_Info_NavList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ganss_Sat_Info_NavList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ganss-Sat-Info-Nav.h"

#endif	/* _Ganss_Sat_Info_NavList_H_ */
#include <asn_internal.h>