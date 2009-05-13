/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-enums.m2c,v 1.4 2005/07/15 22:41:16 rstory Exp $
 *
 * $Id:$
 */
#ifndef dot1dStpPortTable_ENUMS_H
#define dot1dStpPortTable_ENUMS_H

#ifdef __cplusplus
extern "C" {
#endif

 /*
 * NOTES on enums
 * ==============
 *
 * Value Mapping
 * -------------
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them
 * below. For example, a boolean flag (1/0) is usually represented
 * as a TruthValue in a MIB, which maps to the values (1/2).
 *
 */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table dot1dStpPortTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * dot1dStpPortState (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef dot1dStpPortState_ENUMS
#define dot1dStpPortState_ENUMS

#define dot1dStpPortState_DISABLED	1
#define dot1dStpPortState_BLOCKING	2
#define dot1dStpPortState_LISTENING	3
#define dot1dStpPortState_LEARNING	4
#define dot1dStpPortState_FORWARDING	5
#define dot1dStpPortState_BROKEN	6

#endif /* dot1dStpPortState_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * dot1dStpPortEnable (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef dot1dStpPortEnable_ENUMS
#define dot1dStpPortEnable_ENUMS

#define dot1dStpPortEnable_ENABLED	1
#define dot1dStpPortEnable_DISABLED	2

#endif /* dot1dStpPortEnable_ENUMS */

#ifdef __cplusplus
}
#endif

#endif /* dot1dStpPortTable_ENUMS_H */