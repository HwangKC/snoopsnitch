/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MaxPDCP_SN_WindowSize_H_
#define	_MaxPDCP_SN_WindowSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxPDCP_SN_WindowSize {
	MaxPDCP_SN_WindowSize_sn255	= 0,
	MaxPDCP_SN_WindowSize_sn65535	= 1
} e_MaxPDCP_SN_WindowSize;

/* MaxPDCP-SN-WindowSize */
typedef long	 MaxPDCP_SN_WindowSize_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxPDCP_SN_WindowSize;
asn_struct_free_f MaxPDCP_SN_WindowSize_free;
asn_struct_print_f MaxPDCP_SN_WindowSize_print;
asn_constr_check_f MaxPDCP_SN_WindowSize_constraint;
ber_type_decoder_f MaxPDCP_SN_WindowSize_decode_ber;
der_type_encoder_f MaxPDCP_SN_WindowSize_encode_der;
xer_type_decoder_f MaxPDCP_SN_WindowSize_decode_xer;
xer_type_encoder_f MaxPDCP_SN_WindowSize_encode_xer;
per_type_decoder_f MaxPDCP_SN_WindowSize_decode_uper;
per_type_encoder_f MaxPDCP_SN_WindowSize_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxPDCP_SN_WindowSize_H_ */
#include <asn_internal.h>
