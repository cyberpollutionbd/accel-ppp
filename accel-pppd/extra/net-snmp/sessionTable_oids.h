/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c 12855 2005-09-27 15:56:08Z rstory $
 *
 * $Id:$
 */
#ifndef SESSIONTABLE_OIDS_H
#define SESSIONTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table sessionTable */
#define SESSIONTABLE_OID              1,3,6,1,4,1,8072,100,2,1

#define COLUMN_SESSID         1
    
#define COLUMN_SESIFNAME         2
    
#define COLUMN_SESUSERNAME         3
    
#define COLUMN_SESIP         4
    
#define COLUMN_SESTYPE         5
    
#define COLUMN_SESSTATE         6
    
#define COLUMN_SESUPTIME         7
    
#define COLUMN_SESCALLINGSID         8
    
#define COLUMN_SESCALLEDSID         9
    

#define SESSIONTABLE_MIN_COL   COLUMN_SESSID
#define SESSIONTABLE_MAX_COL   COLUMN_SESCALLEDSID
    


#ifdef __cplusplus
}
#endif

#endif /* SESSIONTABLE_OIDS_H */