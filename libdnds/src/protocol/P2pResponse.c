/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#include "P2pResponse.h"

static int
memb_macAddrDst_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_P2pResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct P2pResponse, macAddrDst),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_macAddrDst_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"macAddrDst"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct P2pResponse, result),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DNDSResult,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"result"
		},
};
static ber_tlv_tag_t asn_DEF_P2pResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_P2pResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* macAddrDst at 139 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* result at 140 */
};
static asn_SEQUENCE_specifics_t asn_SPC_P2pResponse_specs_1 = {
	sizeof(struct P2pResponse),
	offsetof(struct P2pResponse, _asn_ctx),
	asn_MAP_P2pResponse_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_P2pResponse = {
	"P2pResponse",
	"P2pResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_P2pResponse_tags_1,
	sizeof(asn_DEF_P2pResponse_tags_1)
		/sizeof(asn_DEF_P2pResponse_tags_1[0]), /* 1 */
	asn_DEF_P2pResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_P2pResponse_tags_1)
		/sizeof(asn_DEF_P2pResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_P2pResponse_1,
	2,	/* Elements count */
	&asn_SPC_P2pResponse_specs_1	/* Additional specs */
};

