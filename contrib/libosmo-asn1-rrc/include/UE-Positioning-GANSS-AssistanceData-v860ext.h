/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GANSS_AssistanceData_v860ext_H_
#define	_UE_Positioning_GANSS_AssistanceData_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_AddIonoModel;
struct UE_Positioning_GANSS_EarthOrientPara;
struct GANSSGenericDataList_v860ext;

/* UE-Positioning-GANSS-AssistanceData-v860ext */
typedef struct UE_Positioning_GANSS_AssistanceData_v860ext {
	struct UE_Positioning_GANSS_AddIonoModel	*uePositioningGanssAddIonoModel	/* OPTIONAL */;
	struct UE_Positioning_GANSS_EarthOrientPara	*uePositioningGanssEarthOrientationPara	/* OPTIONAL */;
	struct GANSSGenericDataList_v860ext	*ganssGenericDataList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AssistanceData_v860ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AssistanceData_v860ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GANSS-AddIonoModel.h"
#include "UE-Positioning-GANSS-EarthOrientPara.h"
#include "GANSSGenericDataList-v860ext.h"

#endif	/* _UE_Positioning_GANSS_AssistanceData_v860ext_H_ */
#include <asn_internal.h>