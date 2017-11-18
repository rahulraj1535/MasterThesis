/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#ifndef	_InformationQuality_H_
#define	_InformationQuality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InformationQuality {
	InformationQuality_unavailable	= 0,
	InformationQuality_lowest	= 1,
	InformationQuality_highest	= 7
} e_InformationQuality;

/* InformationQuality */
typedef long	 InformationQuality_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InformationQuality;
asn_struct_free_f InformationQuality_free;
asn_struct_print_f InformationQuality_print;
asn_constr_check_f InformationQuality_constraint;
ber_type_decoder_f InformationQuality_decode_ber;
der_type_encoder_f InformationQuality_encode_der;
xer_type_decoder_f InformationQuality_decode_xer;
xer_type_encoder_f InformationQuality_encode_xer;
per_type_decoder_f InformationQuality_decode_uper;
per_type_encoder_f InformationQuality_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _InformationQuality_H_ */
#include <asn_internal.h>
