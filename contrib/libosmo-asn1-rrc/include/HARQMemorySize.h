/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HARQMemorySize_H_
#define	_HARQMemorySize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HARQMemorySize {
	HARQMemorySize_hms800	= 0,
	HARQMemorySize_hms1600	= 1,
	HARQMemorySize_hms2400	= 2,
	HARQMemorySize_hms3200	= 3,
	HARQMemorySize_hms4000	= 4,
	HARQMemorySize_hms4800	= 5,
	HARQMemorySize_hms5600	= 6,
	HARQMemorySize_hms6400	= 7,
	HARQMemorySize_hms7200	= 8,
	HARQMemorySize_hms8000	= 9,
	HARQMemorySize_hms8800	= 10,
	HARQMemorySize_hms9600	= 11,
	HARQMemorySize_hms10400	= 12,
	HARQMemorySize_hms11200	= 13,
	HARQMemorySize_hms12000	= 14,
	HARQMemorySize_hms12800	= 15,
	HARQMemorySize_hms13600	= 16,
	HARQMemorySize_hms14400	= 17,
	HARQMemorySize_hms15200	= 18,
	HARQMemorySize_hms16000	= 19,
	HARQMemorySize_hms17600	= 20,
	HARQMemorySize_hms19200	= 21,
	HARQMemorySize_hms20800	= 22,
	HARQMemorySize_hms22400	= 23,
	HARQMemorySize_hms24000	= 24,
	HARQMemorySize_hms25600	= 25,
	HARQMemorySize_hms27200	= 26,
	HARQMemorySize_hms28800	= 27,
	HARQMemorySize_hms30400	= 28,
	HARQMemorySize_hms32000	= 29,
	HARQMemorySize_hms36000	= 30,
	HARQMemorySize_hms40000	= 31,
	HARQMemorySize_hms44000	= 32,
	HARQMemorySize_hms48000	= 33,
	HARQMemorySize_hms52000	= 34,
	HARQMemorySize_hms56000	= 35,
	HARQMemorySize_hms60000	= 36,
	HARQMemorySize_hms64000	= 37,
	HARQMemorySize_hms68000	= 38,
	HARQMemorySize_hms72000	= 39,
	HARQMemorySize_hms76000	= 40,
	HARQMemorySize_hms80000	= 41,
	HARQMemorySize_hms88000	= 42,
	HARQMemorySize_hms96000	= 43,
	HARQMemorySize_hms104000	= 44,
	HARQMemorySize_hms112000	= 45,
	HARQMemorySize_hms120000	= 46,
	HARQMemorySize_hms128000	= 47,
	HARQMemorySize_hms136000	= 48,
	HARQMemorySize_hms144000	= 49,
	HARQMemorySize_hms152000	= 50,
	HARQMemorySize_hms160000	= 51,
	HARQMemorySize_hms176000	= 52,
	HARQMemorySize_hms192000	= 53,
	HARQMemorySize_hms208000	= 54,
	HARQMemorySize_hms224000	= 55,
	HARQMemorySize_hms240000	= 56,
	HARQMemorySize_hms256000	= 57,
	HARQMemorySize_hms272000	= 58,
	HARQMemorySize_hms288000	= 59,
	HARQMemorySize_hms304000	= 60
} e_HARQMemorySize;

/* HARQMemorySize */
typedef long	 HARQMemorySize_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HARQMemorySize;
asn_struct_free_f HARQMemorySize_free;
asn_struct_print_f HARQMemorySize_print;
asn_constr_check_f HARQMemorySize_constraint;
ber_type_decoder_f HARQMemorySize_decode_ber;
der_type_encoder_f HARQMemorySize_encode_der;
xer_type_decoder_f HARQMemorySize_decode_xer;
xer_type_encoder_f HARQMemorySize_encode_xer;
per_type_decoder_f HARQMemorySize_decode_uper;
per_type_encoder_f HARQMemorySize_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HARQMemorySize_H_ */
#include <asn_internal.h>