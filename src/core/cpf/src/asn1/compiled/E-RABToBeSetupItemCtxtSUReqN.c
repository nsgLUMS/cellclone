/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Structures"
 * 	found in "../asn1_schema/structures.asn"
 */

#include "E-RABToBeSetupItemCtxtSUReqN.h"

asn_TYPE_member_t asn_MBR_E_RABToBeSetupItemCtxtSUReqN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemCtxtSUReqN, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemCtxtSUReqN, e_RABlevelQoSParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABLevelQoSParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RABlevelQoSParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemCtxtSUReqN, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemCtxtSUReqN, gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTP_TEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gTP-TEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemCtxtSUReqN, nas_pdu),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_PDU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nas-pdu"
		},
};
static const ber_tlv_tag_t asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABToBeSetupItemCtxtSUReqN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RABlevelQoSParameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nas-pdu */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABToBeSetupItemCtxtSUReqN_specs_1 = {
	sizeof(struct E_RABToBeSetupItemCtxtSUReqN),
	offsetof(struct E_RABToBeSetupItemCtxtSUReqN, _asn_ctx),
	asn_MAP_E_RABToBeSetupItemCtxtSUReqN_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABToBeSetupItemCtxtSUReqN = {
	"E-RABToBeSetupItemCtxtSUReqN",
	"E-RABToBeSetupItemCtxtSUReqN",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1,
	sizeof(asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1[0]), /* 1 */
	asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemCtxtSUReqN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABToBeSetupItemCtxtSUReqN_1,
	5,	/* Elements count */
	&asn_SPC_E_RABToBeSetupItemCtxtSUReqN_specs_1	/* Additional specs */
};
