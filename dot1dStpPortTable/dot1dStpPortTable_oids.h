/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.14 2005/09/27 15:56:08 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT1DSTPPORTTABLE_OIDS_H
#define DOT1DSTPPORTTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot1dStpPortTable */
#define DOT1DSTPPORTTABLE_OID			1,3,6,1,2,1,17,2,15

#define COLUMN_DOT1DSTPPORT			1
    
#define COLUMN_DOT1DSTPPORTPRIORITY		2
#define COLUMN_DOT1DSTPPORTPRIORITY_FLAG	(0x1 << 1)
    
#define COLUMN_DOT1DSTPPORTSTATE		3
    
#define COLUMN_DOT1DSTPPORTENABLE		4
#define COLUMN_DOT1DSTPPORTENABLE_FLAG		(0x1 << 3)
    
#define COLUMN_DOT1DSTPPORTPATHCOST		5
#define COLUMN_DOT1DSTPPORTPATHCOST_FLAG	(0x1 << 4)
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDROOT	6
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDCOST	7
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDBRIDGE	8
    
#define COLUMN_DOT1DSTPPORTDESIGNATEDPORT	9
    
#define COLUMN_DOT1DSTPPORTFORWARDTRANSITIONS	10
    
#define COLUMN_DOT1DSTPPORTPATHCOST32		11
#define COLUMN_DOT1DSTPPORTPATHCOST32_FLAG	(0x1 << 10)
    

#define DOT1DSTPPORTTABLE_MIN_COL		COLUMN_DOT1DSTPPORT
#define DOT1DSTPPORTTABLE_MAX_COL		COLUMN_DOT1DSTPPORTPATHCOST32
    

/*
 * TODO:405:r: Review DOT1DSTPPORTTABLE_SETTABLE_COLS macro.
 * OR together all the writable cols.
 */
#define DOT1DSTPPORTTABLE_SETTABLE_COLS (COLUMN_DOT1DSTPPORTPRIORITY_FLAG | COLUMN_DOT1DSTPPORTENABLE_FLAG | COLUMN_DOT1DSTPPORTPATHCOST_FLAG | COLUMN_DOT1DSTPPORTPATHCOST32_FLAG)

#ifdef __cplusplus
}
#endif

#endif /* DOT1DSTPPORTTABLE_OIDS_H */