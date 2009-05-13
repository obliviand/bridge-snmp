/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.14 2005/09/27 15:56:08 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT1DSTPEXTPORTTABLE_OIDS_H
#define DOT1DSTPEXTPORTTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot1dStpExtPortTable */
#define DOT1DSTPEXTPORTTABLE_OID              1,3,6,1,2,1,17,2,19

#define COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION         1
#define COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION_FLAG    (0x1 << 0)
    
#define COLUMN_DOT1DSTPPORTADMINEDGEPORT         2
#define COLUMN_DOT1DSTPPORTADMINEDGEPORT_FLAG    (0x1 << 1)
    
#define COLUMN_DOT1DSTPPORTOPEREDGEPORT         3
    
#define COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT         4
#define COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT_FLAG    (0x1 << 3)
    
#define COLUMN_DOT1DSTPPORTOPERPOINTTOPOINT         5
    
#define COLUMN_DOT1DSTPPORTADMINPATHCOST         6
#define COLUMN_DOT1DSTPPORTADMINPATHCOST_FLAG    (0x1 << 5)
    

#define DOT1DSTPEXTPORTTABLE_MIN_COL   COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION
#define DOT1DSTPEXTPORTTABLE_MAX_COL   COLUMN_DOT1DSTPPORTADMINPATHCOST
    

    /*
     * TODO:405:r: Review DOT1DSTPEXTPORTTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define DOT1DSTPEXTPORTTABLE_SETTABLE_COLS (COLUMN_DOT1DSTPPORTPROTOCOLMIGRATION_FLAG | COLUMN_DOT1DSTPPORTADMINEDGEPORT_FLAG | COLUMN_DOT1DSTPPORTADMINPOINTTOPOINT_FLAG | COLUMN_DOT1DSTPPORTADMINPATHCOST_FLAG)

#ifdef __cplusplus
}
#endif

#endif /* DOT1DSTPEXTPORTTABLE_OIDS_H */
