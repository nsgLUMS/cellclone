/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Structures"
 * 	found in "../asn1_schema/structures.asn"
 */

#ifndef	_HandoverType_H_
#define	_HandoverType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverType {
	HandoverType_intralte	= 0,
	HandoverType_ltetoutran	= 1,
	HandoverType_ltetogeran	= 2,
	HandoverType_utrantolte	= 3,
	HandoverType_gerantolte	= 4
} e_HandoverType;

/* HandoverType */
typedef long	 HandoverType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HandoverType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HandoverType;
extern const asn_INTEGER_specifics_t asn_SPC_HandoverType_specs_1;
asn_struct_free_f HandoverType_free;
asn_struct_print_f HandoverType_print;
asn_constr_check_f HandoverType_constraint;
ber_type_decoder_f HandoverType_decode_ber;
der_type_encoder_f HandoverType_encode_der;
xer_type_decoder_f HandoverType_decode_xer;
xer_type_encoder_f HandoverType_encode_xer;
oer_type_decoder_f HandoverType_decode_oer;
oer_type_encoder_f HandoverType_encode_oer;
per_type_decoder_f HandoverType_decode_uper;
per_type_encoder_f HandoverType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverType_H_ */
#include <asn_internal.h>
