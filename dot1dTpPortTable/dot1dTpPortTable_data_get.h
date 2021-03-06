/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.20 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot1dTpPortTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT1DTPPORTTABLE_DATA_GET_H
#define DOT1DTPPORTTABLE_DATA_GET_H

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
 *** Table dot1dTpPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * BRIDGE-MIB::dot1dTpPortTable is subid 4 of dot1dTp.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.17.4.4, length: 9
*/
    /*
     * indexes
     */

    int dot1dTpPortMaxInfo_get( dot1dTpPortTable_rowreq_ctx *rowreq_ctx, long * dot1dTpPortMaxInfo_val_ptr );
    int dot1dTpPortInFrames_get( dot1dTpPortTable_rowreq_ctx *rowreq_ctx, u_long * dot1dTpPortInFrames_val_ptr );
    int dot1dTpPortOutFrames_get( dot1dTpPortTable_rowreq_ctx *rowreq_ctx, u_long * dot1dTpPortOutFrames_val_ptr );
    int dot1dTpPortInDiscards_get( dot1dTpPortTable_rowreq_ctx *rowreq_ctx, u_long * dot1dTpPortInDiscards_val_ptr );


int dot1dTpPortTable_indexes_set_tbl_idx(dot1dTpPortTable_mib_index *tbl_idx, long dot1dTpPort_val);
int dot1dTpPortTable_indexes_set(dot1dTpPortTable_rowreq_ctx *rowreq_ctx, long dot1dTpPort_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT1DTPPORTTABLE_DATA_GET_H */
/** @} */
