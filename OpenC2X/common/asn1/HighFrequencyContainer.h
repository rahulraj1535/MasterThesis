/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons -fwide-types`
 */

#ifndef	_HighFrequencyContainer_H_
#define	_HighFrequencyContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BasicVehicleContainerHighFrequency.h"
#include "RSUContainerHighFrequency.h"
#include "VRUContainerHighFrequency.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HighFrequencyContainer_PR {
	HighFrequencyContainer_PR_NOTHING,	/* No components present */
	HighFrequencyContainer_PR_basicVehicleContainerHighFrequency,
	HighFrequencyContainer_PR_rsuContainerHighFrequency,
	HighFrequencyContainer_PR_vruContainerHighFrequency,
	/* Extensions may appear below */
	
} HighFrequencyContainer_PR;

/* HighFrequencyContainer */
typedef struct HighFrequencyContainer {
	HighFrequencyContainer_PR present;
	union HighFrequencyContainer_u {
		BasicVehicleContainerHighFrequency_t	 basicVehicleContainerHighFrequency;
		RSUContainerHighFrequency_t	 rsuContainerHighFrequency;
		VRUContainerHighFrequency_t	 vruContainerHighFrequency;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HighFrequencyContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HighFrequencyContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _HighFrequencyContainer_H_ */
#include <asn_internal.h>
