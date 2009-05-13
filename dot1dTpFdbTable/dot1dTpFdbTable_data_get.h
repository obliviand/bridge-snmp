/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.20 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot1dTpFdbTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT1DTPFDBTABLE_DATA_GET_H
#define DOT1DTPFDBTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot1dTpFdbTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * BRIDGE-MIB::dot1dTpFdbTable is subid 3 of dot1dTp.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.17.4.3, length: 9
 */
/*
 * indexes
 */

int dot1dTpFdbPort_get( dot1dTpFdbTable_rowreq_ctx *rowreq_ctx, long * dot1dTpFdbPort_val_ptr );
int dot1dTpFdbStatus_get( dot1dTpFdbTable_rowreq_ctx *rowreq_ctx, u_long * dot1dTpFdbStatus_val_ptr );

int dot1dTpFdbTable_indexes_set_tbl_idx(dot1dTpFdbTable_mib_index *tbl_idx, char *dot1dTpFdbAddress_val_ptr,  size_t dot1dTpFdbAddress_val_ptr_len);
int dot1dTpFdbTable_indexes_set(dot1dTpFdbTable_rowreq_ctx *rowreq_ctx, char *dot1dTpFdbAddress_val_ptr,  size_t dot1dTpFdbAddress_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT1DTPFDBTABLE_DATA_GET_H */
/** @} */