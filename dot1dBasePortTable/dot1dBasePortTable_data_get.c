/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.20 $ of : mfd-data-get.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot1dBasePortTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot1dBasePortTable get routines.
 * TODO:240:M: Implement dot1dBasePortTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot1dBasePortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * BRIDGE-MIB::dot1dBasePortTable is subid 4 of dot1dBase.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.17.1.4, length: 9
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot1dBasePortTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param dot1dBasePort_val
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
dot1dBasePortTable_indexes_set_tbl_idx(dot1dBasePortTable_mib_index *tbl_idx, long dot1dBasePort_val)
{
    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortTable_indexes_set_tbl_idx","called\n"));

    /* dot1dBasePort(1)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/R/d/h */
    tbl_idx->dot1dBasePort = dot1dBasePort_val;
    

    return MFD_SUCCESS;
} /* dot1dBasePortTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
dot1dBasePortTable_indexes_set(dot1dBasePortTable_rowreq_ctx *rowreq_ctx, long dot1dBasePort_val)
{
    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot1dBasePortTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , dot1dBasePort_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot1dBasePortTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot1dBasePortTable_indexes_set */


/*---------------------------------------------------------------------
 * BRIDGE-MIB::dot1dBasePortEntry.dot1dBasePortIfIndex
 * dot1dBasePortIfIndex is subid 2 of dot1dBasePortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.17.1.4.1.2
 * Description:
The value of the instance of the ifIndex object,
        defined in IF-MIB, for the interface corresponding
        to this port.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: d
 *
 * Ranges:  1 - 2147483647;
 *
 * Its syntax is InterfaceIndex (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the dot1dBasePortIfIndex data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dBasePortIfIndex_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
dot1dBasePortIfIndex_get( dot1dBasePortTable_rowreq_ctx *rowreq_ctx, long * dot1dBasePortIfIndex_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != dot1dBasePortIfIndex_val_ptr );


    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortIfIndex_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the dot1dBasePortIfIndex data.
 * copy (* dot1dBasePortIfIndex_val_ptr ) from rowreq_ctx->data
 */
    (* dot1dBasePortIfIndex_val_ptr ) = rowreq_ctx->data.dot1dBasePortIfIndex;

    return MFD_SUCCESS;
} /* dot1dBasePortIfIndex_get */

/*---------------------------------------------------------------------
 * BRIDGE-MIB::dot1dBasePortEntry.dot1dBasePortCircuit
 * dot1dBasePortCircuit is subid 3 of dot1dBasePortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.17.1.4.1.3
 * Description:
For a port that (potentially) has the same value of
        dot1dBasePortIfIndex as another port on the same bridge.
        This object contains the name of an object instance
        unique to this port.  For example, in the case where
        multiple ports correspond one-to-one with multiple X.25
        virtual circuits, this value might identify an (e.g.,
        the first) object instance associated with the X.25
        virtual circuit corresponding to this port.

        For a port which has a unique value of
        dot1dBasePortIfIndex, this object can have the value
        { 0 0 }.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is OBJECTID (based on perltype OBJECTID)
 * The net-snmp type is ASN_OBJECT_ID. The C type decl is oid (oid)
 * This data type requires a length.
 */
/**
 * Extract the current value of the dot1dBasePortCircuit data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dBasePortCircuit_val_ptr_ptr
 *        Pointer to storage for a oid variable
 * @param dot1dBasePortCircuit_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by dot1dBasePortCircuit.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*dot1dBasePortCircuit_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update dot1dBasePortCircuit_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
dot1dBasePortCircuit_get( dot1dBasePortTable_rowreq_ctx *rowreq_ctx, oid **dot1dBasePortCircuit_val_ptr_ptr, size_t *dot1dBasePortCircuit_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != dot1dBasePortCircuit_val_ptr_ptr) && (NULL != *dot1dBasePortCircuit_val_ptr_ptr));
   netsnmp_assert( NULL != dot1dBasePortCircuit_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortCircuit_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the dot1dBasePortCircuit data.
 * copy (* dot1dBasePortCircuit_val_ptr_ptr ) data and (* dot1dBasePortCircuit_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for dot1dBasePortCircuit data
     */
    if ((NULL == (* dot1dBasePortCircuit_val_ptr_ptr )) ||
        ((* dot1dBasePortCircuit_val_ptr_len_ptr ) <
         (rowreq_ctx->data.dot1dBasePortCircuit_len* sizeof(rowreq_ctx->data.dot1dBasePortCircuit[0])))) {
        /*
         * allocate space for dot1dBasePortCircuit data
         */
        (* dot1dBasePortCircuit_val_ptr_ptr ) = malloc(rowreq_ctx->data.dot1dBasePortCircuit_len* sizeof(rowreq_ctx->data.dot1dBasePortCircuit[0]));
        if(NULL == (* dot1dBasePortCircuit_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* dot1dBasePortCircuit_val_ptr_len_ptr ) = rowreq_ctx->data.dot1dBasePortCircuit_len* sizeof(rowreq_ctx->data.dot1dBasePortCircuit[0]);
    memcpy( (* dot1dBasePortCircuit_val_ptr_ptr ), rowreq_ctx->data.dot1dBasePortCircuit, rowreq_ctx->data.dot1dBasePortCircuit_len* sizeof(rowreq_ctx->data.dot1dBasePortCircuit[0]) );

    return MFD_SUCCESS;
} /* dot1dBasePortCircuit_get */

/*---------------------------------------------------------------------
 * BRIDGE-MIB::dot1dBasePortEntry.dot1dBasePortDelayExceededDiscards
 * dot1dBasePortDelayExceededDiscards is subid 4 of dot1dBasePortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.17.1.4.1.4
 * Description:
The number of frames discarded by this port due
        to excessive transit delay through the bridge.  It
        is incremented by both transparent and source
        route bridges.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the dot1dBasePortDelayExceededDiscards data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dBasePortDelayExceededDiscards_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
dot1dBasePortDelayExceededDiscards_get( dot1dBasePortTable_rowreq_ctx *rowreq_ctx, u_long * dot1dBasePortDelayExceededDiscards_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != dot1dBasePortDelayExceededDiscards_val_ptr );


    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortDelayExceededDiscards_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the dot1dBasePortDelayExceededDiscards data.
 * copy (* dot1dBasePortDelayExceededDiscards_val_ptr ) from rowreq_ctx->data
 */
    (* dot1dBasePortDelayExceededDiscards_val_ptr ) = rowreq_ctx->data.dot1dBasePortDelayExceededDiscards;

    return MFD_SUCCESS;
} /* dot1dBasePortDelayExceededDiscards_get */

/*---------------------------------------------------------------------
 * BRIDGE-MIB::dot1dBasePortEntry.dot1dBasePortMtuExceededDiscards
 * dot1dBasePortMtuExceededDiscards is subid 5 of dot1dBasePortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.2.1.17.1.4.1.5
 * Description:
The number of frames discarded by this port due
        to an excessive size.  It is incremented by both
        transparent and source route bridges.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the dot1dBasePortMtuExceededDiscards data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dBasePortMtuExceededDiscards_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
dot1dBasePortMtuExceededDiscards_get( dot1dBasePortTable_rowreq_ctx *rowreq_ctx, u_long * dot1dBasePortMtuExceededDiscards_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != dot1dBasePortMtuExceededDiscards_val_ptr );


    DEBUGMSGTL(("verbose:dot1dBasePortTable:dot1dBasePortMtuExceededDiscards_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the dot1dBasePortMtuExceededDiscards data.
 * copy (* dot1dBasePortMtuExceededDiscards_val_ptr ) from rowreq_ctx->data
 */
    (* dot1dBasePortMtuExceededDiscards_val_ptr ) = rowreq_ctx->data.dot1dBasePortMtuExceededDiscards;

    return MFD_SUCCESS;
} /* dot1dBasePortMtuExceededDiscards_get */



/** @} */