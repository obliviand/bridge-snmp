/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.50 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT1DSTPPORTTABLE_H
#define DOT1DSTPPORTTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_add_mib(BRIDGE-MIB)
config_require(BRIDGE-MIB/dot1dStpPortTable/dot1dStpPortTable_interface)
config_require(BRIDGE-MIB/dot1dStpPortTable/dot1dStpPortTable_data_access)
config_require(BRIDGE-MIB/dot1dStpPortTable/dot1dStpPortTable_data_get)
config_require(BRIDGE-MIB/dot1dStpPortTable/dot1dStpPortTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for dot1dStpPortTable */
#include "dot1dStpPortTable_oids.h"

/* enum definions */
#include "dot1dStpPortTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_dot1dStpPortTable(void);
void shutdown_dot1dStpPortTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot1dStpPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * BRIDGE-MIB::dot1dStpPortTable is subid 15 of dot1dStp.
 * Its status is Current.
 * OID: .1.3.6.1.2.1.17.2.15, length: 9
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot1dStpPortTable registration context.
     */
typedef netsnmp_data_list dot1dStpPortTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot1dStpPortTable data context structure.
 * This structure is used to represent the data for dot1dStpPortTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot1dStpPortTable.
 */
typedef struct dot1dStpPortTable_data_s {
	/*
	 * dot1dStpPortPriority(2)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
	 */
	long dot1dStpPortPriority;
    
	/*
	 * dot1dStpPortState(3)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
	 */
	u_long dot1dStpPortState;
    
	/*
	 * dot1dStpPortEnable(4)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
	 */
	u_long dot1dStpPortEnable;
    
	/*
	 * dot1dStpPortPathCost(5)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
	 */
	long dot1dStpPortPathCost;
    
	/*
	 * dot1dStpPortDesignatedRoot(6)/BridgeId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/h
	 */
	char dot1dStpPortDesignatedRoot[8];
	size_t dot1dStpPortDesignatedRoot_len; /* # of char elements, not bytes */
    
	/*
	 * dot1dStpPortDesignatedCost(7)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
	 */
	long dot1dStpPortDesignatedCost;
    
	/*
	 * dot1dStpPortDesignatedBridge(8)/BridgeId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/h
	 */
	char dot1dStpPortDesignatedBridge[8];
	size_t dot1dStpPortDesignatedBridge_len; /* # of char elements, not bytes */
    
	/*
	 * dot1dStpPortDesignatedPort(9)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/h
	 */
	char dot1dStpPortDesignatedPort[2];
	size_t dot1dStpPortDesignatedPort_len; /* # of char elements, not bytes */
    
	/*
	 * dot1dStpPortForwardTransitions(10)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
	 */
	u_long dot1dStpPortForwardTransitions;
    
	/*
	 * dot1dStpPortPathCost32(11)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
	 */
	long dot1dStpPortPathCost32;
    
} dot1dStpPortTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot1dStpPortTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot1dStpPortTable_data dot1dStpPortTable_undo_data;

/*
 * TODO:120:r: |-> Review dot1dStpPortTable mib index.
 * This structure is used to represent the index for dot1dStpPortTable.
 */
typedef struct dot1dStpPortTable_mib_index_s {

        /*
         * dot1dStpPort(1)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/R/d/h
         */
   long   dot1dStpPort;


} dot1dStpPortTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot1dStpPortTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_dot1dStpPortTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review dot1dStpPortTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot1dStpPortTable_rowreq_ctx pointer.
 */
typedef struct dot1dStpPortTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot1dStpPortTable_IDX_LEN];
    
    dot1dStpPortTable_mib_index        tbl_idx;
    
    dot1dStpPortTable_data              data;
    dot1dStpPortTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to dot1dStpPortTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot1dStpPortTable_data_list;

} dot1dStpPortTable_rowreq_ctx;

typedef struct dot1dStpPortTable_ref_rowreq_ctx_s {
    dot1dStpPortTable_rowreq_ctx *rowreq_ctx;
} dot1dStpPortTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot1dStpPortTable_pre_request(dot1dStpPortTable_registration * user_context);
    int dot1dStpPortTable_post_request(dot1dStpPortTable_registration * user_context,
        int rc);

    int dot1dStpPortTable_rowreq_ctx_init(dot1dStpPortTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void dot1dStpPortTable_rowreq_ctx_cleanup(dot1dStpPortTable_rowreq_ctx *rowreq_ctx);

    int dot1dStpPortTable_commit(dot1dStpPortTable_rowreq_ctx * rowreq_ctx);

    dot1dStpPortTable_rowreq_ctx *
                  dot1dStpPortTable_row_find_by_mib_index(dot1dStpPortTable_mib_index *mib_idx);

extern oid dot1dStpPortTable_oid[];
extern int dot1dStpPortTable_oid_size;


#include "dot1dStpPortTable_interface.h"
#include "dot1dStpPortTable_data_access.h"
#include "dot1dStpPortTable_data_get.h"
#include "dot1dStpPortTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* DOT1DSTPPORTTABLE_H */
/** @} */