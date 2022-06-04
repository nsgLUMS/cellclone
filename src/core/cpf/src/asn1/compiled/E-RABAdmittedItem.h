/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Structures"
 * 	found in "../asn1_schema/structures.asn"
 */

#ifndef	_E_RABAdmittedItem_H_
#define	_E_RABAdmittedItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "TransportLayerAddress.h"
#include "GTP-TEID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-RABAdmittedItem */
typedef struct E_RABAdmittedItem {
	E_RAB_ID_t	 e_RAB_ID;
	TransportLayerAddress_t	 transportLayerAddress;
	GTP_TEID_t	 gTP_TEID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABAdmittedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABAdmittedItem;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABAdmittedItem_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABAdmittedItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABAdmittedItem_H_ */
#include <asn_internal.h>
