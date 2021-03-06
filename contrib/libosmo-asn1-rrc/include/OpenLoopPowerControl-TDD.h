/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_OpenLoopPowerControl_TDD_H_
#define	_OpenLoopPowerControl_TDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCCPCH-TX-Power.h"
#include "Alpha.h"
#include "ConstantValueTdd.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OpenLoopPowerControl-TDD */
typedef struct OpenLoopPowerControl_TDD {
	PrimaryCCPCH_TX_Power_t	 primaryCCPCH_TX_Power;
	Alpha_t	*alpha	/* OPTIONAL */;
	ConstantValueTdd_t	 prach_ConstantValue;
	ConstantValueTdd_t	 dpch_ConstantValue;
	ConstantValueTdd_t	*pusch_ConstantValue	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OpenLoopPowerControl_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OpenLoopPowerControl_TDD;

#ifdef __cplusplus
}
#endif

#endif	/* _OpenLoopPowerControl_TDD_H_ */
#include <asn_internal.h>
