/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.19 $ of : mfd-data-set.m2c,v $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot1dStpExtPortTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot1dStpExtPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * RSTP-MIB::dot1dStpExtPortTable is subid 19 of dot1dStp.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.17.2.19, length: 9
*/
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * dot1dStpExtPortTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * dot1dStpExtPortTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot1dStpExtPortTable_undo_setup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpExtPortTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup dot1dStpExtPortTable undo.
     * set up dot1dStpExtPortTable undo information, in preparation for a set.
     * Undo storage is in (* dot1dStpPortAdminPathCost_val_ptr )*
     */

    return rc;
} /* dot1dStpExtPortTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot1dStpExtPortTable_undo( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpExtPortTable_undo","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> dot1dStpExtPortTable undo.
     * dot1dStpExtPortTable undo information, in response to a failed set.
     * Undo storage is in (* dot1dStpPortAdminPathCost_val_ptr )*
     */

    return rc;
} /* dot1dStpExtPortTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot1dStpExtPortTable_undo_cleanup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpExtPortTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup dot1dStpExtPortTable undo.
     * Undo storage is in (* dot1dStpPortAdminPathCost_val_ptr )*
     */

    return rc;
} /* dot1dStpExtPortTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot1dStpExtPortTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot1dStpExtPortTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot1dStpExtPortTable_commit( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpExtPortTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit dot1dStpExtPortTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION_FLAG) {
       save_flags &= ~COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION_FLAG; /* clear dot1dStpPortProtocolMigration */
       /*
        * TODO:482:o: |-> commit column dot1dStpPortProtocolMigration.
        */
       rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot1dStpExtPortTable column dot1dStpPortProtocolMigration commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo dot1dStpPortProtocolMigration
             */
            rowreq_ctx->column_set_flags |= COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION_FLAG;
       }
    }

    if (save_flags & COLUMN_DOT1DSTPPORTADMINEDGEPORT_FLAG) {
       save_flags &= ~COLUMN_DOT1DSTPPORTADMINEDGEPORT_FLAG; /* clear dot1dStpPortAdminEdgePort */
       /*
        * TODO:482:o: |-> commit column dot1dStpPortAdminEdgePort.
        */
       rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot1dStpExtPortTable column dot1dStpPortAdminEdgePort commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo dot1dStpPortAdminEdgePort
             */
            rowreq_ctx->column_set_flags |= COLUMN_DOT1DSTPPORTADMINEDGEPORT_FLAG;
       }
    }

    if (save_flags & COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT_FLAG) {
       save_flags &= ~COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT_FLAG; /* clear dot1dStpPortAdminPointToPoint */
       /*
        * TODO:482:o: |-> commit column dot1dStpPortAdminPointToPoint.
        */
       rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot1dStpExtPortTable column dot1dStpPortAdminPointToPoint commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo dot1dStpPortAdminPointToPoint
             */
            rowreq_ctx->column_set_flags |= COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT_FLAG;
       }
    }

    if (save_flags & COLUMN_DOT1DSTPPORTADMINPATHCOST_FLAG) {
       save_flags &= ~COLUMN_DOT1DSTPPORTADMINPATHCOST_FLAG; /* clear dot1dStpPortAdminPathCost */
       /*
        * TODO:482:o: |-> commit column dot1dStpPortAdminPathCost.
        */
       rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot1dStpExtPortTable column dot1dStpPortAdminPathCost commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo dot1dStpPortAdminPathCost
             */
            rowreq_ctx->column_set_flags |= COLUMN_DOT1DSTPPORTADMINPATHCOST_FLAG;
       }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* dot1dStpExtPortTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot1dStpExtPortTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot1dStpExtPortTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot1dStpExtPortTable_undo_commit( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpExtPortTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo dot1dStpExtPortTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */

    
    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
} /* dot1dStpExtPortTable_undo_commit */

/*
 * TODO:440:M: Implement dot1dStpExtPortTable node value checks.
 * TODO:450:M: Implement dot1dStpExtPortTable undo functions.
 * TODO:460:M: Implement dot1dStpExtPortTable set functions.
 * TODO:480:M: Implement dot1dStpExtPortTable commit functions.
 */
/*---------------------------------------------------------------------
 * RSTP-MIB::dot1dStpExtPortEntry.dot1dStpPortProtocolMigration
 * dot1dStpPortProtocolMigration is subid 1 of dot1dStpExtPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.17.2.19.1.1
 * Description:
When operating in RSTP (version 2) mode, writing true(1)
         to this object forces this port to transmit RSTP BPDUs.
         Any other operation on this object has no effect and
         it always returns false(2) when read.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dStpPortProtocolMigration_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot1dStpExtPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  true(1), false(2)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
dot1dStpPortProtocolMigration_check_value( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortProtocolMigration_val)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortProtocolMigration_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid dot1dStpPortProtocolMigration value.
     */

    return MFD_SUCCESS; /* dot1dStpPortProtocolMigration value not illegal */
} /* dot1dStpPortProtocolMigration_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot1dStpExtPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
dot1dStpPortProtocolMigration_undo_setup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortProtocolMigration_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup dot1dStpPortProtocolMigration undo.
     */
    /*
     * copy dot1dStpPortProtocolMigration data
     * set rowreq_ctx->undo->dot1dStpPortProtocolMigration from rowreq_ctx->data.dot1dStpPortProtocolMigration
     */
    rowreq_ctx->undo->dot1dStpPortProtocolMigration = rowreq_ctx->data.dot1dStpPortProtocolMigration;


    return MFD_SUCCESS;
} /* dot1dStpPortProtocolMigration_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param dot1dStpPortProtocolMigration_val
 *        A long containing the new value.
 */
int
dot1dStpPortProtocolMigration_set( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortProtocolMigration_val )
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortProtocolMigration_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set dot1dStpPortProtocolMigration value.
     * set dot1dStpPortProtocolMigration value in rowreq_ctx->data
     */
    rowreq_ctx->data.dot1dStpPortProtocolMigration = dot1dStpPortProtocolMigration_val;

    return MFD_SUCCESS;
} /* dot1dStpPortProtocolMigration_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
dot1dStpPortProtocolMigration_undo( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortProtocolMigration_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up dot1dStpPortProtocolMigration undo.
     */
    /*
     * copy dot1dStpPortProtocolMigration data
     * set rowreq_ctx->data.dot1dStpPortProtocolMigration from rowreq_ctx->undo->dot1dStpPortProtocolMigration
     */
    rowreq_ctx->data.dot1dStpPortProtocolMigration = rowreq_ctx->undo->dot1dStpPortProtocolMigration;

    
    return MFD_SUCCESS;
} /* dot1dStpPortProtocolMigration_undo */

/*---------------------------------------------------------------------
 * RSTP-MIB::dot1dStpExtPortEntry.dot1dStpPortAdminEdgePort
 * dot1dStpPortAdminEdgePort is subid 2 of dot1dStpExtPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.17.2.19.1.2
 * Description:
The administrative value of the Edge Port parameter.  A
         value of true(1) indicates that this port should be
         assumed as an edge-port, and a value of false(2) indicates
         that this port should be assumed as a non-edge-port.

         Setting this object will also cause the corresponding
         instance of dot1dStpPortOperEdgePort to change to the
         same value.  Note that even when this object's value
         is true, the value of the corresponding instance of
         dot1dStpPortOperEdgePort can be false if a BPDU has
         been received.

         The value of this object MUST be retained across
         reinitializations of the management system.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dStpPortAdminEdgePort_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot1dStpExtPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  true(1), false(2)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
dot1dStpPortAdminEdgePort_check_value( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortAdminEdgePort_val)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminEdgePort_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid dot1dStpPortAdminEdgePort value.
     */

    return MFD_SUCCESS; /* dot1dStpPortAdminEdgePort value not illegal */
} /* dot1dStpPortAdminEdgePort_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot1dStpExtPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
dot1dStpPortAdminEdgePort_undo_setup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminEdgePort_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup dot1dStpPortAdminEdgePort undo.
     */
    /*
     * copy dot1dStpPortAdminEdgePort data
     * set rowreq_ctx->undo->dot1dStpPortAdminEdgePort from rowreq_ctx->data.dot1dStpPortAdminEdgePort
     */
    rowreq_ctx->undo->dot1dStpPortAdminEdgePort = rowreq_ctx->data.dot1dStpPortAdminEdgePort;


    return MFD_SUCCESS;
} /* dot1dStpPortAdminEdgePort_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param dot1dStpPortAdminEdgePort_val
 *        A long containing the new value.
 */
int
dot1dStpPortAdminEdgePort_set( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortAdminEdgePort_val )
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminEdgePort_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set dot1dStpPortAdminEdgePort value.
     * set dot1dStpPortAdminEdgePort value in rowreq_ctx->data
     */
    rowreq_ctx->data.dot1dStpPortAdminEdgePort = dot1dStpPortAdminEdgePort_val;

    return MFD_SUCCESS;
} /* dot1dStpPortAdminEdgePort_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
dot1dStpPortAdminEdgePort_undo( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminEdgePort_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up dot1dStpPortAdminEdgePort undo.
     */
    /*
     * copy dot1dStpPortAdminEdgePort data
     * set rowreq_ctx->data.dot1dStpPortAdminEdgePort from rowreq_ctx->undo->dot1dStpPortAdminEdgePort
     */
    rowreq_ctx->data.dot1dStpPortAdminEdgePort = rowreq_ctx->undo->dot1dStpPortAdminEdgePort;

    
    return MFD_SUCCESS;
} /* dot1dStpPortAdminEdgePort_undo */

/*---------------------------------------------------------------------
 * RSTP-MIB::dot1dStpExtPortEntry.dot1dStpPortAdminPointToPoint
 * dot1dStpPortAdminPointToPoint is subid 4 of dot1dStpExtPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.17.2.19.1.4
 * Description:
The administrative point-to-point status of the LAN segment
         attached to this port, using the enumeration values of the
         IEEE 802.1w clause.  A value of forceTrue(0) indicates
         that this port should always be treated as if it is
         connected to a point-to-point link.  A value of
         forceFalse(1) indicates that this port should be treated as
         having a shared media connection.  A value of auto(2)
         indicates that this port is considered to have a
         point-to-point link if it is an Aggregator and all of its
         members are aggregatable, or if the MAC entity
         is configured for full duplex operation, either through
         auto-negotiation or by management means.  Manipulating this
         object changes the underlying adminPortToPortMAC.

         The value of this object MUST be retained across
         reinitializations of the management system.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  forceTrue(0), forceFalse(1), auto(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dStpPortAdminPointToPoint_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot1dStpExtPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is one of  forceTrue(0), forceFalse(1), auto(2)
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
dot1dStpPortAdminPointToPoint_check_value( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortAdminPointToPoint_val)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPointToPoint_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid dot1dStpPortAdminPointToPoint value.
     */

    return MFD_SUCCESS; /* dot1dStpPortAdminPointToPoint value not illegal */
} /* dot1dStpPortAdminPointToPoint_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot1dStpExtPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
dot1dStpPortAdminPointToPoint_undo_setup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPointToPoint_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup dot1dStpPortAdminPointToPoint undo.
     */
    /*
     * copy dot1dStpPortAdminPointToPoint data
     * set rowreq_ctx->undo->dot1dStpPortAdminPointToPoint from rowreq_ctx->data.dot1dStpPortAdminPointToPoint
     */
    rowreq_ctx->undo->dot1dStpPortAdminPointToPoint = rowreq_ctx->data.dot1dStpPortAdminPointToPoint;


    return MFD_SUCCESS;
} /* dot1dStpPortAdminPointToPoint_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param dot1dStpPortAdminPointToPoint_val
 *        A long containing the new value.
 */
int
dot1dStpPortAdminPointToPoint_set( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, u_long dot1dStpPortAdminPointToPoint_val )
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPointToPoint_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set dot1dStpPortAdminPointToPoint value.
     * set dot1dStpPortAdminPointToPoint value in rowreq_ctx->data
     */
    rowreq_ctx->data.dot1dStpPortAdminPointToPoint = dot1dStpPortAdminPointToPoint_val;

    return MFD_SUCCESS;
} /* dot1dStpPortAdminPointToPoint_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
dot1dStpPortAdminPointToPoint_undo( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPointToPoint_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up dot1dStpPortAdminPointToPoint undo.
     */
    /*
     * copy dot1dStpPortAdminPointToPoint data
     * set rowreq_ctx->data.dot1dStpPortAdminPointToPoint from rowreq_ctx->undo->dot1dStpPortAdminPointToPoint
     */
    rowreq_ctx->data.dot1dStpPortAdminPointToPoint = rowreq_ctx->undo->dot1dStpPortAdminPointToPoint;

    
    return MFD_SUCCESS;
} /* dot1dStpPortAdminPointToPoint_undo */

/*---------------------------------------------------------------------
 * RSTP-MIB::dot1dStpExtPortEntry.dot1dStpPortAdminPathCost
 * dot1dStpPortAdminPathCost is subid 6 of dot1dStpExtPortEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.2.1.17.2.19.1.6
 * Description:
The administratively assigned value for the contribution
         of this port to the path cost of paths toward the spanning
         tree root.

         Writing a value of '0' assigns the automatically calculated
         default Path Cost value to the port.  If the default Path
         Cost is being used, this object returns '0' when read.

         This complements the object dot1dStpPortPathCost or
         dot1dStpPortPathCost32, which returns the operational value
         of the path cost.

         The value of this object MUST be retained across
         reinitializations of the management system.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  0 - 200000000;
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param dot1dStpPortAdminPathCost_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot1dStpExtPortTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *    The value is in (one of) the range set(s):  0 - 200000000
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
dot1dStpPortAdminPathCost_check_value( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, long dot1dStpPortAdminPathCost_val)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPathCost_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid dot1dStpPortAdminPathCost value.
     */

    return MFD_SUCCESS; /* dot1dStpPortAdminPathCost value not illegal */
} /* dot1dStpPortAdminPathCost_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot1dStpExtPortTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot1dStpExtPortTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
dot1dStpPortAdminPathCost_undo_setup( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPathCost_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup dot1dStpPortAdminPathCost undo.
     */
    /*
     * copy dot1dStpPortAdminPathCost data
     * set rowreq_ctx->undo->dot1dStpPortAdminPathCost from rowreq_ctx->data.dot1dStpPortAdminPathCost
     */
    rowreq_ctx->undo->dot1dStpPortAdminPathCost = rowreq_ctx->data.dot1dStpPortAdminPathCost;


    return MFD_SUCCESS;
} /* dot1dStpPortAdminPathCost_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param dot1dStpPortAdminPathCost_val
 *        A long containing the new value.
 */
int
dot1dStpPortAdminPathCost_set( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx, long dot1dStpPortAdminPathCost_val )
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPathCost_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set dot1dStpPortAdminPathCost value.
     * set dot1dStpPortAdminPathCost value in rowreq_ctx->data
     */
    rowreq_ctx->data.dot1dStpPortAdminPathCost = dot1dStpPortAdminPathCost_val;

    return MFD_SUCCESS;
} /* dot1dStpPortAdminPathCost_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
dot1dStpPortAdminPathCost_undo( dot1dStpExtPortTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot1dStpExtPortTable:dot1dStpPortAdminPathCost_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up dot1dStpPortAdminPathCost undo.
     */
    /*
     * copy dot1dStpPortAdminPathCost data
     * set rowreq_ctx->data.dot1dStpPortAdminPathCost from rowreq_ctx->undo->dot1dStpPortAdminPathCost
     */
    rowreq_ctx->data.dot1dStpPortAdminPathCost = rowreq_ctx->undo->dot1dStpPortAdminPathCost;

    
    return MFD_SUCCESS;
} /* dot1dStpPortAdminPathCost_undo */

/** @} */
