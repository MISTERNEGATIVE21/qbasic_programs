/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __ODBCSS
#define __ODBCSS

#include <_mingw_unicode.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SQL_MAX_SQLSERVERNAME 128

#define SQL_COPT_SS_BASE 1200
#define SQL_COPT_SS_REMOTE_PWD (SQL_COPT_SS_BASE+1)
#define SQL_COPT_SS_USE_PROC_FOR_PREP (SQL_COPT_SS_BASE+2)
#define SQL_COPT_SS_INTEGRATED_SECURITY (SQL_COPT_SS_BASE+3)
#define SQL_COPT_SS_PRESERVE_CURSORS (SQL_COPT_SS_BASE+4)
#define SQL_COPT_SS_USER_DATA (SQL_COPT_SS_BASE+5)
#define SQL_COPT_SS_ENLIST_IN_DTC SQL_ATTR_ENLIST_IN_DTC
#define SQL_COPT_SS_ENLIST_IN_XA SQL_ATTR_ENLIST_IN_XA

#define SQL_COPT_SS_FALLBACK_CONNECT (SQL_COPT_SS_BASE+10)
#define SQL_COPT_SS_PERF_DATA (SQL_COPT_SS_BASE+11)
#define SQL_COPT_SS_PERF_DATA_LOG (SQL_COPT_SS_BASE+12)
#define SQL_COPT_SS_PERF_QUERY_INTERVAL (SQL_COPT_SS_BASE+13)
#define SQL_COPT_SS_PERF_QUERY_LOG (SQL_COPT_SS_BASE+14)
#define SQL_COPT_SS_PERF_QUERY (SQL_COPT_SS_BASE+15)
#define SQL_COPT_SS_PERF_DATA_LOG_NOW (SQL_COPT_SS_BASE+16)
#define SQL_COPT_SS_QUOTED_IDENT (SQL_COPT_SS_BASE+17)
#define SQL_COPT_SS_ANSI_NPW (SQL_COPT_SS_BASE+18)
#define SQL_COPT_SS_BCP (SQL_COPT_SS_BASE+19)
#define SQL_COPT_SS_TRANSLATE (SQL_COPT_SS_BASE+20)
#define SQL_COPT_SS_ATTACHDBFILENAME (SQL_COPT_SS_BASE+21)
#define SQL_COPT_SS_CONCAT_NULL (SQL_COPT_SS_BASE+22)
#define SQL_COPT_SS_ENCRYPT (SQL_COPT_SS_BASE+23)

#define SQL_COPT_SS_MAX_USED SQL_COPT_SS_ENCRYPT

#define SQL_SOPT_SS_BASE 1225
#define SQL_SOPT_SS_TEXTPTR_LOGGING (SQL_SOPT_SS_BASE+0)
#define SQL_SOPT_SS_CURRENT_COMMAND (SQL_SOPT_SS_BASE+1)
#define SQL_SOPT_SS_HIDDEN_COLUMNS (SQL_SOPT_SS_BASE+2)
#define SQL_SOPT_SS_NOBROWSETABLE (SQL_SOPT_SS_BASE+3)
#define SQL_SOPT_SS_REGIONALIZE (SQL_SOPT_SS_BASE+4)
#define SQL_SOPT_SS_CURSOR_OPTIONS (SQL_SOPT_SS_BASE+5)
#define SQL_SOPT_SS_NOCOUNT_STATUS (SQL_SOPT_SS_BASE+6)
#define SQL_SOPT_SS_DEFER_PREPARE (SQL_SOPT_SS_BASE+7)

#define SQL_SOPT_SS_MAX_USED SQL_SOPT_SS_DEFER_PREPARE

#define SQL_COPT_SS_BASE_EX 1240
#define SQL_COPT_SS_BROWSE_CONNECT (SQL_COPT_SS_BASE_EX+1)
#define SQL_COPT_SS_BROWSE_SERVER (SQL_COPT_SS_BASE_EX+2)
#define SQL_COPT_SS_WARN_ON_CP_ERROR (SQL_COPT_SS_BASE_EX+3)

#define SQL_COPT_SS_CONNECTION_DEAD (SQL_COPT_SS_BASE_EX+4)

#define SQL_COPT_SS_BROWSE_CACHE_DATA (SQL_COPT_SS_BASE_EX+5)

#define SQL_COPT_SS_RESET_CONNECTION (SQL_COPT_SS_BASE_EX+6)

#define SQL_COPT_SS_EX_MAX_USED SQL_COPT_SS_RESET_CONNECTION

#define SQL_UP_OFF 0L
#define SQL_UP_ON 1L
#define SQL_UP_ON_DROP 2L
#define SQL_UP_DEFAULT SQL_UP_ON

#define SQL_IS_OFF 0L
#define SQL_IS_ON 1L
#define SQL_IS_DEFAULT SQL_IS_OFF

#define SQL_PC_OFF 0L
#define SQL_PC_ON 1L
#define SQL_PC_DEFAULT SQL_PC_OFF

#define SQL_UD_NOTSET NULL

#define SQL_XL_OFF 0L
#define SQL_XL_ON 1L
#define SQL_XL_DEFAULT SQL_XL_ON

#define SQL_FB_OFF 0L
#define SQL_FB_ON 1L
#define SQL_FB_DEFAULT SQL_FB_OFF

#define SQL_BCP_OFF 0L
#define SQL_BCP_ON 1L
#define SQL_BCP_DEFAULT SQL_BCP_OFF

#define SQL_QI_OFF 0L
#define SQL_QI_ON 1L
#define SQL_QI_DEFAULT SQL_QI_ON

#define SQL_AD_OFF 0L
#define SQL_AD_ON 1L
#define SQL_AD_DEFAULT SQL_AD_ON

#define SQL_CN_OFF 0L
#define SQL_CN_ON 1L
#define SQL_CN_DEFAULT SQL_CN_ON

#define SQL_TL_OFF 0L
#define SQL_TL_ON 1L
#define SQL_TL_DEFAULT SQL_TL_ON

#define SQL_HC_OFF 0L
#define SQL_HC_ON 1L
#define SQL_HC_DEFAULT SQL_HC_OFF

#define SQL_NB_OFF 0L
#define SQL_NB_ON 1L
#define SQL_NB_DEFAULT SQL_NB_OFF

#define SQL_RE_OFF 0L
#define SQL_RE_ON 1L
#define SQL_RE_DEFAULT SQL_RE_OFF

#define SQL_CO_OFF 0L
#define SQL_CO_FFO 1L
#define SQL_CO_AF 2L
#define SQL_CO_FFO_AF (SQL_CO_FFO|SQL_CO_AF)
#define SQL_CO_FIREHOSE_AF 4L
#define SQL_CO_DEFAULT SQL_CO_OFF

#define SQL_NC_OFF 0L
#define SQL_NC_ON 1L

#define SQL_DP_OFF 0L
#define SQL_DP_ON 1L

#define SQL_EN_OFF 0L
#define SQL_EN_ON 1L

#define SQL_MORE_INFO_NO 0L
#define SQL_MORE_INFO_YES 1L

#define SQL_CACHE_DATA_NO 0L
#define SQL_CACHE_DATA_YES 1L

#define SQL_RESET_YES 1L

#define SQL_WARN_NO 0L
#define SQL_WARN_YES 1L

#define SQL_CURSOR_FAST_FORWARD_ONLY 8

#define SQL_CA_SS_BASE 1200
#define SQL_CA_SS_COLUMN_SSTYPE (SQL_CA_SS_BASE+0)
#define SQL_CA_SS_COLUMN_UTYPE (SQL_CA_SS_BASE+1)
#define SQL_CA_SS_NUM_ORDERS (SQL_CA_SS_BASE+2)
#define SQL_CA_SS_COLUMN_ORDER (SQL_CA_SS_BASE+3)
#define SQL_CA_SS_COLUMN_VARYLEN (SQL_CA_SS_BASE+4)
#define SQL_CA_SS_NUM_COMPUTES (SQL_CA_SS_BASE+5)
#define SQL_CA_SS_COMPUTE_ID (SQL_CA_SS_BASE+6)
#define SQL_CA_SS_COMPUTE_BYLIST (SQL_CA_SS_BASE+7)
#define SQL_CA_SS_COLUMN_ID (SQL_CA_SS_BASE+8)
#define SQL_CA_SS_COLUMN_OP (SQL_CA_SS_BASE+9)
#define SQL_CA_SS_COLUMN_SIZE (SQL_CA_SS_BASE+10)
#define SQL_CA_SS_COLUMN_HIDDEN (SQL_CA_SS_BASE+11)
#define SQL_CA_SS_COLUMN_KEY (SQL_CA_SS_BASE+12)

#define SQL_CA_SS_COLUMN_COLLATION (SQL_CA_SS_BASE+14)
#define SQL_CA_SS_VARIANT_TYPE (SQL_CA_SS_BASE+15)
#define SQL_CA_SS_VARIANT_SQL_TYPE (SQL_CA_SS_BASE+16)
#define SQL_CA_SS_VARIANT_SERVER_TYPE (SQL_CA_SS_BASE+17)
#define SQL_CA_SS_MAX_USED (SQL_CA_SS_BASE+18)

#define SQLTEXT 0x23
#define SQLVARBINARY 0x25
#define SQLINTN 0x26
#define SQLVARCHAR 0x27
#define SQLBINARY 0x2d
#define SQLIMAGE 0x22
#define SQLCHARACTER 0x2f
#define SQLINT1 0x30
#define SQLBIT 0x32
#define SQLINT2 0x34
#define SQLINT4 0x38
#define SQLMONEY 0x3c
#define SQLDATETIME 0x3d
#define SQLFLT8 0x3e
#define SQLFLTN 0x6d
#define SQLMONEYN 0x6e
#define SQLDATETIMN 0x6f
#define SQLFLT4 0x3b
#define SQLMONEY4 0x7a
#define SQLDATETIM4 0x3a

#define SQLDECIMAL 0x6a
#define SQLNUMERIC 0x6c

#define SQLUNIQUEID 0x24
#define SQLBIGCHAR 0xaf
#define SQLBIGVARCHAR 0xa7
#define SQLBIGBINARY 0xad
#define SQLBIGVARBINARY 0xa5
#define SQLBITN 0x68
#define SQLNCHAR 0xef
#define SQLNVARCHAR 0xe7
#define SQLNTEXT 0x63

#define SQLINT8 0x7f
#define SQLVARIANT 0x62

#define SQLudtBINARY 3
#define SQLudtBIT 16
#define SQLudtBITN 0
#define SQLudtCHAR 1
#define SQLudtDATETIM4 22
#define SQLudtDATETIME 12
#define SQLudtDATETIMN 15
#define SQLudtDECML 24
#define SQLudtDECMLN 26
#define SQLudtFLT4 23
#define SQLudtFLT8 8
#define SQLudtFLTN 14
#define SQLudtIMAGE 20
#define SQLudtINT1 5
#define SQLudtINT2 6
#define SQLudtINT4 7
#define SQLudtINTN 13
#define SQLudtMONEY 11
#define SQLudtMONEY4 21
#define SQLudtMONEYN 17
#define SQLudtNUM 10
#define SQLudtNUMN 25
#define SQLudtSYSNAME 18
#define SQLudtTEXT 19
#define SQLudtTIMESTAMP 80
#define SQLudtUNIQUEIDENTIFIER 0
#define SQLudtVARBINARY 4
#define SQLudtVARCHAR 2
#define MIN_USER_DATATYPE 256

#define SQLAOPSTDEV 0x30
#define SQLAOPSTDEVP 0x31
#define SQLAOPVAR 0x32
#define SQLAOPVARP 0x33
#define SQLAOPCNT 0x4b
#define SQLAOPSUM 0x4d
#define SQLAOPAVG 0x4f
#define SQLAOPMIN 0x51
#define SQLAOPMAX 0x52
#define SQLAOPANY 0x53
#define SQLAOPNOOP 0x56

#define SQL_INFO_SS_FIRST 1199
#define SQL_INFO_SS_NETLIB_NAMEW (SQL_INFO_SS_FIRST+0)
#define SQL_INFO_SS_NETLIB_NAMEA (SQL_INFO_SS_FIRST+1)
#define SQL_INFO_SS_MAX_USED SQL_INFO_SS_NETLIB_NAMEA

#define SQL_INFO_SS_NETLIB_NAME __MINGW_NAME_AW(SQL_INFO_SS_NETLIB_NAME)

#define SQL_SS_VARIANT -150

#define SQL_DIAG_SS_BASE (-1150)
#define SQL_DIAG_SS_MSGSTATE (SQL_DIAG_SS_BASE)
#define SQL_DIAG_SS_SEVERITY (SQL_DIAG_SS_BASE-1)
#define SQL_DIAG_SS_SRVNAME (SQL_DIAG_SS_BASE-2)
#define SQL_DIAG_SS_PROCNAME (SQL_DIAG_SS_BASE-3)
#define SQL_DIAG_SS_LINE (SQL_DIAG_SS_BASE-4)

#define SQL_DIAG_DFC_SS_BASE (-200)
#define SQL_DIAG_DFC_SS_ALTER_DATABASE (SQL_DIAG_DFC_SS_BASE-0)
#define SQL_DIAG_DFC_SS_CHECKPOINT (SQL_DIAG_DFC_SS_BASE-1)
#define SQL_DIAG_DFC_SS_CONDITION (SQL_DIAG_DFC_SS_BASE-2)
#define SQL_DIAG_DFC_SS_CREATE_DATABASE (SQL_DIAG_DFC_SS_BASE-3)
#define SQL_DIAG_DFC_SS_CREATE_DEFAULT (SQL_DIAG_DFC_SS_BASE-4)
#define SQL_DIAG_DFC_SS_CREATE_PROCEDURE (SQL_DIAG_DFC_SS_BASE-5)
#define SQL_DIAG_DFC_SS_CREATE_RULE (SQL_DIAG_DFC_SS_BASE-6)
#define SQL_DIAG_DFC_SS_CREATE_TRIGGER (SQL_DIAG_DFC_SS_BASE-7)
#define SQL_DIAG_DFC_SS_CURSOR_DECLARE (SQL_DIAG_DFC_SS_BASE-8)
#define SQL_DIAG_DFC_SS_CURSOR_OPEN (SQL_DIAG_DFC_SS_BASE-9)
#define SQL_DIAG_DFC_SS_CURSOR_FETCH (SQL_DIAG_DFC_SS_BASE-10)
#define SQL_DIAG_DFC_SS_CURSOR_CLOSE (SQL_DIAG_DFC_SS_BASE-11)
#define SQL_DIAG_DFC_SS_DEALLOCATE_CURSOR (SQL_DIAG_DFC_SS_BASE-12)
#define SQL_DIAG_DFC_SS_DBCC (SQL_DIAG_DFC_SS_BASE-13)
#define SQL_DIAG_DFC_SS_DISK (SQL_DIAG_DFC_SS_BASE-14)
#define SQL_DIAG_DFC_SS_DROP_DATABASE (SQL_DIAG_DFC_SS_BASE-15)
#define SQL_DIAG_DFC_SS_DROP_DEFAULT (SQL_DIAG_DFC_SS_BASE-16)
#define SQL_DIAG_DFC_SS_DROP_PROCEDURE (SQL_DIAG_DFC_SS_BASE-17)
#define SQL_DIAG_DFC_SS_DROP_RULE (SQL_DIAG_DFC_SS_BASE-18)
#define SQL_DIAG_DFC_SS_DROP_TRIGGER (SQL_DIAG_DFC_SS_BASE-19)
#define SQL_DIAG_DFC_SS_DUMP_DATABASE (SQL_DIAG_DFC_SS_BASE-20)
#define SQL_DIAG_DFC_SS_DUMP_TABLE (SQL_DIAG_DFC_SS_BASE-21)
#define SQL_DIAG_DFC_SS_DUMP_TRANSACTION (SQL_DIAG_DFC_SS_BASE-22)
#define SQL_DIAG_DFC_SS_GOTO (SQL_DIAG_DFC_SS_BASE-23)
#define SQL_DIAG_DFC_SS_INSERT_BULK (SQL_DIAG_DFC_SS_BASE-24)
#define SQL_DIAG_DFC_SS_KILL (SQL_DIAG_DFC_SS_BASE-25)
#define SQL_DIAG_DFC_SS_LOAD_DATABASE (SQL_DIAG_DFC_SS_BASE-26)
#define SQL_DIAG_DFC_SS_LOAD_HEADERONLY (SQL_DIAG_DFC_SS_BASE-27)
#define SQL_DIAG_DFC_SS_LOAD_TABLE (SQL_DIAG_DFC_SS_BASE-28)
#define SQL_DIAG_DFC_SS_LOAD_TRANSACTION (SQL_DIAG_DFC_SS_BASE-29)
#define SQL_DIAG_DFC_SS_PRINT (SQL_DIAG_DFC_SS_BASE-30)
#define SQL_DIAG_DFC_SS_RAISERROR (SQL_DIAG_DFC_SS_BASE-31)
#define SQL_DIAG_DFC_SS_READTEXT (SQL_DIAG_DFC_SS_BASE-32)
#define SQL_DIAG_DFC_SS_RECONFIGURE (SQL_DIAG_DFC_SS_BASE-33)
#define SQL_DIAG_DFC_SS_RETURN (SQL_DIAG_DFC_SS_BASE-34)
#define SQL_DIAG_DFC_SS_SELECT_INTO (SQL_DIAG_DFC_SS_BASE-35)
#define SQL_DIAG_DFC_SS_SET (SQL_DIAG_DFC_SS_BASE-36)
#define SQL_DIAG_DFC_SS_SET_IDENTITY_INSERT (SQL_DIAG_DFC_SS_BASE-37)
#define SQL_DIAG_DFC_SS_SET_ROW_COUNT (SQL_DIAG_DFC_SS_BASE-38)
#define SQL_DIAG_DFC_SS_SET_STATISTICS (SQL_DIAG_DFC_SS_BASE-39)
#define SQL_DIAG_DFC_SS_SET_TEXTSIZE (SQL_DIAG_DFC_SS_BASE-40)
#define SQL_DIAG_DFC_SS_SETUSER (SQL_DIAG_DFC_SS_BASE-41)
#define SQL_DIAG_DFC_SS_SHUTDOWN (SQL_DIAG_DFC_SS_BASE-42)
#define SQL_DIAG_DFC_SS_TRANS_BEGIN (SQL_DIAG_DFC_SS_BASE-43)
#define SQL_DIAG_DFC_SS_TRANS_COMMIT (SQL_DIAG_DFC_SS_BASE-44)
#define SQL_DIAG_DFC_SS_TRANS_PREPARE (SQL_DIAG_DFC_SS_BASE-45)
#define SQL_DIAG_DFC_SS_TRANS_ROLLBACK (SQL_DIAG_DFC_SS_BASE-46)
#define SQL_DIAG_DFC_SS_TRANS_SAVE (SQL_DIAG_DFC_SS_BASE-47)
#define SQL_DIAG_DFC_SS_TRUNCATE_TABLE (SQL_DIAG_DFC_SS_BASE-48)
#define SQL_DIAG_DFC_SS_UPDATE_STATISTICS (SQL_DIAG_DFC_SS_BASE-49)
#define SQL_DIAG_DFC_SS_UPDATETEXT (SQL_DIAG_DFC_SS_BASE-50)
#define SQL_DIAG_DFC_SS_USE (SQL_DIAG_DFC_SS_BASE-51)
#define SQL_DIAG_DFC_SS_WAITFOR (SQL_DIAG_DFC_SS_BASE-52)
#define SQL_DIAG_DFC_SS_WRITETEXT (SQL_DIAG_DFC_SS_BASE-53)
#define SQL_DIAG_DFC_SS_DENY (SQL_DIAG_DFC_SS_BASE-54)
#define SQL_DIAG_DFC_SS_SET_XCTLVL (SQL_DIAG_DFC_SS_BASE-55)

#define EX_ANY 0
#define EX_INFO 10
#define EX_MAXISEVERITY EX_INFO
#define EX_MISSING 11
#define EX_TYPE 12
#define EX_DEADLOCK 13
#define EX_PERMIT 14
#define EX_SYNTAX 15
#define EX_USER 16
#define EX_RESOURCE 17
#define EX_INTOK 18
#define MAXUSEVERITY EX_INTOK
#define EX_LIMIT 19
#define EX_CMDFATAL 20
#define MINFATALERR EX_CMDFATAL
#define EX_DBFATAL 21
#define EX_TABCORRUPT 22
#define EX_DBCORRUPT 23
#define EX_HARDWARE 24
#define EX_CONTROL 25

#ifndef MAXNUMERICLEN

#define DBMAXCHAR (8000+1)
#define MAXNAME (SQL_MAX_SQLSERVERNAME+1)

#if defined(UNICODE)
  typedef wchar_t DBCHAR;
#else
  typedef char DBCHAR;
#endif
  typedef unsigned char DBBINARY;
  typedef unsigned char DBTINYINT;
  typedef short DBSMALLINT;
  typedef unsigned short DBUSMALLINT;
  typedef double DBFLT8;
  typedef unsigned char DBBIT;
  typedef unsigned char DBBOOL;
  typedef float DBFLT4;
  typedef DBFLT4 DBREAL;
  typedef UINT DBUBOOL;

  typedef struct dbvarychar {
    DBSMALLINT len;
    DBCHAR str[DBMAXCHAR];
  } DBVARYCHAR;

  typedef struct dbvarybin {
    DBSMALLINT len;
    BYTE array[DBMAXCHAR];
  } DBVARYBIN;

  typedef struct dbmoney {
    LONG mnyhigh;
    ULONG mnylow;
  } DBMONEY;

  typedef struct dbdatetime {
    LONG dtdays;
    ULONG dttime;
  } DBDATETIME;

  typedef struct dbdatetime4 {
    USHORT numdays;
    USHORT nummins;
  } DBDATETIM4;

  typedef LONG DBMONEY4;

#define DBNUM_PREC_TYPE BYTE
#define DBNUM_SCALE_TYPE BYTE
#define DBNUM_VAL_TYPE BYTE

#if (ODBCVER < 0x0300)
#define MAXNUMERICLEN 16

  typedef struct dbnumeric {
    DBNUM_PREC_TYPE precision;
    DBNUM_SCALE_TYPE scale;
    BYTE sign;
    DBNUM_VAL_TYPE val[MAXNUMERICLEN];
  } DBNUMERIC;
  typedef DBNUMERIC DBDECIMAL;
#else
#define MAXNUMERICLEN SQL_MAX_NUMERIC_LEN
  typedef SQL_NUMERIC_STRUCT DBNUMERIC;
  typedef SQL_NUMERIC_STRUCT DBDECIMAL;
#endif
#endif

#ifndef INT
  typedef int INT;
  typedef long DBINT;
#ifndef _LPCBYTE_DEFINED
#define _LPCBYTE_DEFINED
  typedef const LPBYTE LPCBYTE;
#endif
  typedef DBINT *LPDBINT;
#endif

  typedef struct sqlperf {
    DWORD TimerResolution;
    DWORD SQLidu;
    DWORD SQLiduRows;
    DWORD SQLSelects;
    DWORD SQLSelectRows;
    DWORD Transactions;
    DWORD SQLPrepares;
    DWORD ExecDirects;
    DWORD SQLExecutes;
    DWORD CursorOpens;
    DWORD CursorSize;
    DWORD CursorUsed;
    LDOUBLE PercentCursorUsed;
    LDOUBLE AvgFetchTime;
    LDOUBLE AvgCursorSize;
    LDOUBLE AvgCursorUsed;
    DWORD SQLFetchTime;
    DWORD SQLFetchCount;
    DWORD CurrentStmtCount;
    DWORD MaxOpenStmt;
    DWORD SumOpenStmt;
    DWORD CurrentConnectionCount;
    DWORD MaxConnectionsOpened;
    DWORD SumConnectionsOpened;
    DWORD SumConnectiontime;
    LDOUBLE AvgTimeOpened;
    DWORD ServerRndTrips;
    DWORD BuffersSent;
    DWORD BuffersRec;
    DWORD BytesSent;
    DWORD BytesRec;
    DWORD msExecutionTime;
    DWORD msNetWorkServerTime;
  } SQLPERF;

#define SQL_PERF_START 1
#define SQL_PERF_STOP 2

#define SQL_SS_DL_DEFAULT TEXT("STATS.LOG")
#define SQL_SS_QL_DEFAULT TEXT("QUERY.LOG")
#define SQL_SS_QI_DEFAULT 30000

#define SUCCEED 1
#define FAIL 0
#define SUCCEED_ABORT 2
#define SUCCEED_ASYNC 3

#define DB_IN 1
#define DB_OUT 2

#define BCPMAXERRS 1
#define BCPFIRST 2
#define BCPLAST 3
#define BCPBATCH 4
#define BCPKEEPNULLS 5
#define BCPABORT 6
#define BCPODBC 7
#define BCPKEEPIDENTITY 8
#define BCP6xFILEFMT 9
#define BCPHINTSA 10
#define BCPHINTSW 11
#define BCPFILECP 12
#define BCPUNICODEFILE 13
#define BCPTEXTFILE 14
#define BCPFILEFMT 15

#define BCPFILECP_ACP 0
#define BCPFILECP_OEMCP 1
#define BCPFILECP_RAW (-1)

#define SQL_VARLEN_DATA (-10)

  DBINT SQL_API bcp_batch(HDBC);
  RETCODE SQL_API bcp_bind(HDBC,LPCBYTE,INT,DBINT,LPCBYTE,INT,INT,INT);
  RETCODE SQL_API bcp_colfmt(HDBC,INT,BYTE,INT,DBINT,LPCBYTE,INT,INT);
  RETCODE SQL_API bcp_collen(HDBC,DBINT,INT);
  RETCODE SQL_API bcp_colptr(HDBC,LPCBYTE,INT);
  RETCODE SQL_API bcp_columns(HDBC,INT);
  RETCODE SQL_API bcp_control(HDBC,INT,void *);
  DBINT SQL_API bcp_done(HDBC);
  RETCODE SQL_API bcp_exec(HDBC,LPDBINT);
  RETCODE SQL_API bcp_getcolfmt(HDBC,INT,INT,void *,INT,INT *);
  RETCODE SQL_API bcp_initA(HDBC,LPCSTR,LPCSTR,LPCSTR,INT);
  RETCODE SQL_API bcp_initW(HDBC,LPCWSTR,LPCWSTR,LPCWSTR,INT);
  RETCODE SQL_API bcp_moretext(HDBC,DBINT,LPCBYTE);
  RETCODE SQL_API bcp_readfmtA(HDBC,LPCSTR);
  RETCODE SQL_API bcp_readfmtW(HDBC,LPCWSTR);
  RETCODE SQL_API bcp_sendrow(HDBC);
  RETCODE SQL_API bcp_setcolfmt(HDBC,INT,INT,void *,INT);
  RETCODE SQL_API bcp_writefmtA(HDBC,LPCSTR);
  RETCODE SQL_API bcp_writefmtW(HDBC,LPCWSTR);
  CHAR *SQL_API dbprtypeA(INT);
  WCHAR *SQL_API dbprtypeW(INT);

#define bcp_init __MINGW_NAME_AW(bcp_init)
#define bcp_readfmt __MINGW_NAME_AW(bcp_readfmt)
#define bcp_writefmt __MINGW_NAME_AW(bcp_writefmt)
#define dbprtype __MINGW_NAME_AW(dbprtype)
#define BCPHINTS __MINGW_NAME_AW(BCPHINTS)

  SQLRETURN SQL_API SQLLinkedServers(SQLHSTMT);
  SQLRETURN SQL_API SQLLinkedCatalogsA(SQLHSTMT,LPCSTR,SWORD);
  SQLRETURN SQL_API SQLLinkedCatalogsW(SQLHSTMT,LPCWSTR,SWORD);
  HANDLE SQL_API SQLInitEnumServers(WCHAR *pwchServerName,WCHAR *pwchInstanceName);
  RETCODE SQL_API SQLGetNextEnumeration(HANDLE hEnumHandle,BYTE *prgEnumData,INT *piEnumLength);
  RETCODE SQL_API SQLCloseEnumServers(HANDLE hEnumHandle);

#define SQLLinkedCatalogs __MINGW_NAME_AW(SQLLinkedCatalogs)

#define BCP_FMT_TYPE 0x01
#define BCP_FMT_INDICATOR_LEN 0x02
#define BCP_FMT_DATA_LEN 0x03
#define BCP_FMT_TERMINATOR 0x04
#define BCP_FMT_SERVER_COL 0x05
#define BCP_FMT_COLLATION 0x06
#define BCP_FMT_COLLATION_ID 0x07

#define SQL_FAST_CONNECT (SQL_COPT_SS_BASE+0)

#define SQL_FC_OFF 0L
#define SQL_FC_ON 1L
#define SQL_FC_DEFAULT SQL_FC_OFF
#define SQL_COPT_SS_ANSI_OEM (SQL_COPT_SS_BASE+6)
#define SQL_AO_OFF 0L
#define SQL_AO_ON 1L
#define SQL_AO_DEFAULT SQL_AO_OFF

#define SQL_REMOTE_PWD SQL_COPT_SS_REMOTE_PWD
#define SQL_USE_PROCEDURE_FOR_PREPARE SQL_COPT_SS_USE_PROC_FOR_PREP
#define SQL_INTEGRATED_SECURITY SQL_COPT_SS_INTEGRATED_SECURITY
#define SQL_PRESERVE_CURSORS SQL_COPT_SS_PRESERVE_CURSORS
#define SQL_TEXTPTR_LOGGING SQL_SOPT_SS_TEXTPTR_LOGGING
#define SQL_CA_SS_BASE_COLUMN_NAME SQL_DESC_BASE_COLUMN_NAME
#define SQLDECIMALN 0x6a
#define SQLNUMERICN 0x6c

#ifdef __cplusplus
}
#endif
#endif
