/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TriggeringCondition1_H_
#define	_TriggeringCondition1_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggeringCondition1 {
	TriggeringCondition1_activeSetCellsOnly	= 0,
	TriggeringCondition1_monitoredSetCellsOnly	= 1,
	TriggeringCondition1_activeSetAndMonitoredSetCells	= 2
} e_TriggeringCondition1;

/* TriggeringCondition1 */
typedef long	 TriggeringCondition1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TriggeringCondition1;
asn_struct_free_f TriggeringCondition1_free;
asn_struct_print_f TriggeringCondition1_print;
asn_constr_check_f TriggeringCondition1_constraint;
ber_type_decoder_f TriggeringCondition1_decode_ber;
der_type_encoder_f TriggeringCondition1_encode_der;
xer_type_decoder_f TriggeringCondition1_decode_xer;
xer_type_encoder_f TriggeringCondition1_encode_xer;
per_type_decoder_f TriggeringCondition1_decode_uper;
per_type_encoder_f TriggeringCondition1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggeringCondition1_H_ */
#include <asn_internal.h>