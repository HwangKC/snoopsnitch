/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SIB-Type.h"

int
SIB_Type_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
SIB_Type_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
SIB_Type_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SIB_Type_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SIB_Type_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SIB_Type_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SIB_Type_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SIB_Type_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SIB_Type_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SIB_Type_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SIB_Type_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_SIB_Type_constr_1 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_SIB_Type_value2enum_1[] = {
	{ 0,	22,	"masterInformationBlock" },
	{ 1,	27,	"systemInformationBlockType1" },
	{ 2,	27,	"systemInformationBlockType2" },
	{ 3,	27,	"systemInformationBlockType3" },
	{ 4,	27,	"systemInformationBlockType4" },
	{ 5,	27,	"systemInformationBlockType5" },
	{ 6,	27,	"systemInformationBlockType6" },
	{ 7,	27,	"systemInformationBlockType7" },
	{ 8,	5,	"dummy" },
	{ 9,	6,	"dummy2" },
	{ 10,	6,	"dummy3" },
	{ 11,	28,	"systemInformationBlockType11" },
	{ 12,	28,	"systemInformationBlockType12" },
	{ 13,	28,	"systemInformationBlockType13" },
	{ 14,	30,	"systemInformationBlockType13-1" },
	{ 15,	30,	"systemInformationBlockType13-2" },
	{ 16,	30,	"systemInformationBlockType13-3" },
	{ 17,	30,	"systemInformationBlockType13-4" },
	{ 18,	28,	"systemInformationBlockType14" },
	{ 19,	28,	"systemInformationBlockType15" },
	{ 20,	30,	"systemInformationBlockType15-1" },
	{ 21,	30,	"systemInformationBlockType15-2" },
	{ 22,	30,	"systemInformationBlockType15-3" },
	{ 23,	28,	"systemInformationBlockType16" },
	{ 24,	28,	"systemInformationBlockType17" },
	{ 25,	30,	"systemInformationBlockType15-4" },
	{ 26,	28,	"systemInformationBlockType18" },
	{ 27,	16,	"schedulingBlock1" },
	{ 28,	16,	"schedulingBlock2" },
	{ 29,	30,	"systemInformationBlockType15-5" },
	{ 30,	30,	"systemInformationBlockType5bis" },
	{ 31,	13,	"extensionType" }
};
static unsigned int asn_MAP_SIB_Type_enum2value_1[] = {
	8,	/* dummy(8) */
	9,	/* dummy2(9) */
	10,	/* dummy3(10) */
	31,	/* extensionType(31) */
	0,	/* masterInformationBlock(0) */
	27,	/* schedulingBlock1(27) */
	28,	/* schedulingBlock2(28) */
	1,	/* systemInformationBlockType1(1) */
	11,	/* systemInformationBlockType11(11) */
	12,	/* systemInformationBlockType12(12) */
	13,	/* systemInformationBlockType13(13) */
	14,	/* systemInformationBlockType13-1(14) */
	15,	/* systemInformationBlockType13-2(15) */
	16,	/* systemInformationBlockType13-3(16) */
	17,	/* systemInformationBlockType13-4(17) */
	18,	/* systemInformationBlockType14(18) */
	19,	/* systemInformationBlockType15(19) */
	20,	/* systemInformationBlockType15-1(20) */
	21,	/* systemInformationBlockType15-2(21) */
	22,	/* systemInformationBlockType15-3(22) */
	25,	/* systemInformationBlockType15-4(25) */
	29,	/* systemInformationBlockType15-5(29) */
	23,	/* systemInformationBlockType16(23) */
	24,	/* systemInformationBlockType17(24) */
	26,	/* systemInformationBlockType18(26) */
	2,	/* systemInformationBlockType2(2) */
	3,	/* systemInformationBlockType3(3) */
	4,	/* systemInformationBlockType4(4) */
	5,	/* systemInformationBlockType5(5) */
	30,	/* systemInformationBlockType5bis(30) */
	6,	/* systemInformationBlockType6(6) */
	7	/* systemInformationBlockType7(7) */
};
static asn_INTEGER_specifics_t asn_SPC_SIB_Type_specs_1 = {
	asn_MAP_SIB_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SIB_Type_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_SIB_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SIB_Type = {
	"SIB-Type",
	"SIB-Type",
	SIB_Type_free,
	SIB_Type_print,
	SIB_Type_constraint,
	SIB_Type_decode_ber,
	SIB_Type_encode_der,
	SIB_Type_decode_xer,
	SIB_Type_encode_xer,
	SIB_Type_decode_uper,
	SIB_Type_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SIB_Type_tags_1,
	sizeof(asn_DEF_SIB_Type_tags_1)
		/sizeof(asn_DEF_SIB_Type_tags_1[0]), /* 1 */
	asn_DEF_SIB_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_SIB_Type_tags_1)
		/sizeof(asn_DEF_SIB_Type_tags_1[0]), /* 1 */
	&asn_PER_type_SIB_Type_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SIB_Type_specs_1	/* Additional specs */
};
