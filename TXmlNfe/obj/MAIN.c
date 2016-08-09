/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 6717)
 * Generated C source code from <C:\\Sistemas Fivewin\\TXmlNfe\\MAIN.PRG>
 * Command: C:\Sistemas Fivewin\TXmlNfe\MAIN.PRG /q /oC:\Sistemas Fivewin\TXmlNfe\obj\MAIN.c /M /N 
 * Created: 2016.08.09 11:55:45 (Microsoft Visual C++ 16.00.30319.01)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "C:\\Sistemas Fivewin\\TXmlNfe\\MAIN.PRG"

HB_FUNC( MAIN );
HB_FUNC( BAIXAXML );
HB_FUNC( BAIXACAPTCHA_OLD );
HB_FUNC( BAIXACAPTCHA );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( TFONT );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TIMAGE );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( TXMLNFE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ISINTERNET );
HB_FUNC_EXTERN( CREATEOBJECT );
HB_FUNC_EXTERN( MEMOWRIT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAIN )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, &ModuleFakeDyn },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CCHAVE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "CCNPJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFONT )}, NULL },
{ "OFONT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OFONT2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "ODLG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "OGET10", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGET11", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGET12", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIMAGE )}, NULL },
{ "OIMG30", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "BAIXAXML", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BAIXAXML )}, &ModuleFakeDyn },
{ "OBT50", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "OBT52", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TXMLNFE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TXMLNFE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "OOBJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CRIAXMLENVIO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BAIXARXMLNFE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BAIXACAPTCHA_OLD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BAIXACAPTCHA_OLD )}, &ModuleFakeDyn },
{ "ISINTERNET", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISINTERNET )}, NULL },
{ "CREATEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATEOBJECT )}, NULL },
{ "OPEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SEND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RESPONSEBODY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "BAIXACAPTCHA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BAIXACAPTCHA )}, &ModuleFakeDyn },
{ "SETREQUESTHEADER", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "WAITFORRESPONSE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "(_INITSTATICS00004)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAIN )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MAIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MAIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* CCAPT */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 13 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* CCHAVE */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* CCHAVE */
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* CCNPJ */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* CCNPJ */
/* 00053 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'0', '2', '3', '7', '0', '4', '2', '0', '0', '0', '0', '1', '9', '5', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCNPJ */
/* 00075 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_MESSAGE, 9, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 10,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 242,	/* -14 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPVARIABLE, 11, 0,	/* OFONT */
/* 00115 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_MESSAGE, 9, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 10,	/* TFONT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 245,	/* -11 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 17,
	HB_P_POPVARIABLE, 12, 0,	/* OFONT2 */
/* 00155 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_MESSAGE, 9, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 13,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'A', 'D', 'O', 'S', '-', 'N', 'F', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 20,
	HB_P_POPVARIABLE, 14, 0,	/* ODLG */
/* 00201 */ HB_P_LINEOFFSET, 16,	/* 28 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 16,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 17,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00234) */
	HB_P_PUSHVARIABLE, 6, 0,	/* CCHAVE */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00240) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 6, 0,	/* CCHAVE */
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', 'K', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* OFONT2 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'C', 'h', 'a', 'v', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 24,
	HB_P_POPVARIABLE, 18, 0,	/* OGET10 */
/* 00284 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 16,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 17,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00317) */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCNPJ */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00323) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* CCNPJ */
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'C', 'n', 'p', 'j', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 24,
	HB_P_POPVARIABLE, 19, 0,	/* OGET11 */
/* 00362 */ HB_P_LINEOFFSET, 18,	/* 30 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 16,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CCAPT */
	HB_P_PUSHSYMNEAR, 17,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00396) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00401) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* OFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'C', 'a', 'p', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 24,
	HB_P_POPVARIABLE, 20, 0,	/* OGET12 */
/* 00440 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 21,	/* TIMAGE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* OIMG */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 14,
	HB_P_POPVARIABLE, 22, 0,	/* OIMG30 */
/* 00473 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 23,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBLOCK, 13, 0,	/* 13 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 24,	/* BAIXAXML */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 10,
	HB_P_POPVARIABLE, 25, 0,	/* OBT50 */
/* 00513 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_MESSAGE, 15, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 23,	/* TBUTTON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 26,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'm', ' ', 'd', 'e', 's', 'e', 'n', 'v', 'o', 'l', 'v', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 10,
	HB_P_POPVARIABLE, 27, 0,	/* OBT52 */
/* 00574 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_MESSAGE, 28, 0,	/* ACTIVATE */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_MESSAGE, 29, 0,	/* BLCLICKED */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 30, 0,	/* BMOVED */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 31, 0,	/* BPAINTED */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 32, 0,	/* BRCLICKED */
	HB_P_PUSHVARIABLE, 14, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 11,
	HB_P_POP,
/* 00624 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_MESSAGE, 33, 0,	/* END */
	HB_P_PUSHVARIABLE, 11, 0,	/* OFONT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHNIL,
	HB_P_POPVARIABLE, 11, 0,	/* OFONT */
	HB_P_MESSAGE, 33, 0,	/* END */
	HB_P_PUSHVARIABLE, 12, 0,	/* OFONT2 */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHNIL,
	HB_P_POPVARIABLE, 12, 0,	/* OFONT2 */
/* 00652 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00657 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( BAIXAXML )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 75, 0,	/* 75 */
	HB_P_LOCALNEARSETSTR, 1, 5, 0,	/* VERDADOS 5*/
	'1', '.', '0', '0', 0, 
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 76 */
	HB_P_LOCALNEARSETSTR, 2, 2, 0,	/* TBAMB 2*/
	'1', 0, 
/* 00023 */ HB_P_LINEOFFSET, 2,	/* 77 */
	HB_P_LOCALNEARSETSTR, 3, 3, 0,	/* CUF 3*/
	'3', '3', 0, 
/* 00032 */ HB_P_LINEOFFSET, 7,	/* 82 */
	HB_P_MESSAGE, 9, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 34,	/* TXMLNFE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 2,	/* TBAMB */
	HB_P_PUSHLOCALNEAR, 3,	/* CUF */
	HB_P_PUSHLOCALNEAR, 1,	/* VERDADOS */
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* CCHAVE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCNPJ */
	HB_P_SENDSHORT, 5,
	HB_P_POPVARIABLE, 36, 0,	/* OOBJ */
/* 00064 */ HB_P_LINEOFFSET, 9,	/* 84 */
	HB_P_PUSHVARIABLE, 36, 0,	/* OOBJ */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00109) */
/* 00073 */ HB_P_LINEOFFSET, 10,	/* 85 */
	HB_P_PUSHSYMNEAR, 37,	/* MSGSTOP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'F', 'a', 'l', 'h', 'a', ' ', 'a', 'o', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', 'b', 'j', 'e', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00104 */ HB_P_LINEOFFSET, 11,	/* 86 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00109 */ HB_P_LINEOFFSET, 14,	/* 89 */
	HB_P_MESSAGE, 38, 0,	/* CRIAXMLENVIO */
	HB_P_PUSHVARIABLE, 36, 0,	/* OOBJ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00120 */ HB_P_LINEOFFSET, 16,	/* 91 */
	HB_P_MESSAGE, 39, 0,	/* BAIXARXMLNFE */
	HB_P_PUSHVARIABLE, 36, 0,	/* OOBJ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00131 */ HB_P_LINEOFFSET, 18,	/* 93 */
	HB_P_MESSAGE, 33, 0,	/* END */
	HB_P_PUSHVARIABLE, 36, 0,	/* OOBJ */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00142 */ HB_P_LINEOFFSET, 20,	/* 95 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00147 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( BAIXACAPTCHA_OLD )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 102, 0,	/* 102 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* ERRONET */
/* 00009 */ HB_P_LINEOFFSET, 2,	/* 104 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* CIMAGE 1*/
	0, 
/* 00016 */ HB_P_LINEOFFSET, 4,	/* 106 */
	HB_P_PUSHSYMNEAR, 41,	/* ISINTERNET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 00079) */
/* 00025 */ HB_P_LINEOFFSET, 5,	/* 107 */
	HB_P_PUSHSYMNEAR, 26,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 'q', 'u', 'i', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 's', 'e', 'm', ' ', 'c', 'o', 'n', 'e', 'x', 227, 'o', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'e', 't', 0, 
	HB_P_DOSHORT, 1,
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 108 */
	HB_P_PUSHLOCALNEAR, 5,	/* CIMAGE */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00079 */ HB_P_LINEOFFSET, 9,	/* 111 */
	HB_P_PUSHSYMNEAR, 42,	/* CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', '.', 'X', 'M', 'L', 'H', 'T', 'T', 'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OPG */
/* 00108 */ HB_P_LINEOFFSET, 10,	/* 112 */
	HB_P_LOCALNEARSETSTR, 2, 77, 0,	/* CURL 77*/
	'h', 't', 't', 'p', 's', ':', '/', '/', 'w', 'w', 'w', '.', 'n', 'f', 'e', '.', 'f', 'a', 'z', 'e', 'n', 'd', 'a', '.', 'g', 'o', 'v', '.', 'b', 'r', '/', 's', 'c', 'r', 'i', 'p', 't', 's', '/', 's', 'r', 'f', '/', 'i', 'n', 't', 'e', 'r', 'c', 'e', 'p', 't', 'a', '/', 'c', 'a', 'p', 't', 'c', 'h', 'a', '.', 'a', 's', 'p', 'x', '?', 'o', 'p', 't', '=', 'i', 'm', 'a', 'g', 'e', 0, 
/* 00191 */ HB_P_LINEOFFSET, 11,	/* 113 */
	HB_P_MESSAGE, 43, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 3,	/* OPG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'G', 'E', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CURL */
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_TRYBEGIN, 18, 0, 0,	/* 18 (abs: 00000228) */
/* 00214 */ HB_P_LINEOFFSET, 15,	/* 117 */
	HB_P_MESSAGE, 44, 0,	/* SEND */
	HB_P_PUSHLOCALNEAR, 3,	/* OPG */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00224 */ HB_P_TRYEND, 16, 0, 0,	/* 16 (abs: 00000240) */
/* 00228 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000228) */
	HB_P_POPVARIABLE, 45, 0,	/* OERROR */
/* 00235 */ HB_P_LINEOFFSET, 17,	/* 119 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* ERRONET */
/* 00240 */ HB_P_LINEOFFSET, 20,	/* 122 */
	HB_P_PUSHLOCALNEAR, 1,	/* ERRONET */
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 00304) */
/* 00246 */ HB_P_LINEOFFSET, 22,	/* 124 */
	HB_P_MESSAGE, 46, 0,	/* RESPONSEBODY */
	HB_P_PUSHLOCALNEAR, 3,	/* OPG */
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* CBUF */
/* 00257 */ HB_P_LINEOFFSET, 24,	/* 126 */
	HB_P_PUSHSYMNEAR, 47,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '/', 'c', 'a', 'p', 't', 'c', 'h', 'a', '.', 'j', 'p', 'g', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CBUF */
	HB_P_DOSHORT, 2,
/* 00282 */ HB_P_LINEOFFSET, 26,	/* 128 */
	HB_P_LOCALNEARSETSTR, 5, 14, 0,	/* CIMAGE 14*/
	'.', '/', 'c', 'a', 'p', 't', 'c', 'h', 'a', '.', 'j', 'p', 'g', 0, 
	HB_P_JUMPNEAR, 90,	/* 90 (abs: 00392) */
/* 00304 */ HB_P_LINEOFFSET, 29,	/* 131 */
	HB_P_PUSHSYMNEAR, 26,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'O', 'c', 'o', 'r', 'r', 'e', 'u', ' ', 'u', 'm', ' ', 'e', 'r', 'r', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 'e', 'x', 227, 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'w', 'e', 'b', 's', 'i', 't', 'e', ' ', 'd', 'a', ' ', 'r', 'e', 'c', 'e', 'i', 't', 'a', ' ', 'f', 'e', 'd', 'e', 'r', 'a', 'l', '.', ' ', 'T', 'e', 'n', 't', 'e', ' ', 'm', 'a', 'i', 's', ' ', 't', 'a', 'r', 'd', 'e', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00392 */ HB_P_LINEOFFSET, 32,	/* 134 */
	HB_P_PUSHLOCALNEAR, 5,	/* CIMAGE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00398 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( BAIXACAPTCHA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 141, 0,	/* 141 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* ERRONET */
/* 00009 */ HB_P_LINEOFFSET, 2,	/* 143 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* CIMAGE 1*/
	0, 
/* 00016 */ HB_P_LINEOFFSET, 4,	/* 145 */
	HB_P_PUSHSYMNEAR, 41,	/* ISINTERNET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 00079) */
/* 00025 */ HB_P_LINEOFFSET, 5,	/* 146 */
	HB_P_PUSHSYMNEAR, 26,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 'q', 'u', 'i', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 's', 'e', 'm', ' ', 'c', 'o', 'n', 'e', 'x', 227, 'o', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'e', 't', 0, 
	HB_P_DOSHORT, 1,
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 147 */
	HB_P_PUSHLOCALNEAR, 5,	/* CIMAGE */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00079 */ HB_P_LINEOFFSET, 9,	/* 150 */
	HB_P_PUSHSTRSHORT, 99,	/* 99 */
	'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'n', 'f', 'e', '.', 'f', 'a', 'z', 'e', 'n', 'd', 'a', '.', 'g', 'o', 'v', '.', 'b', 'r', '/', 'p', 'o', 'r', 't', 'a', 'l', '/', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', '.', 'a', 's', 'p', 'x', '?', 't', 'i', 'p', 'o', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', '=', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'a', '&', 't', 'i', 'p', 'o', 'C', 'o', 'n', 't', 'e', 'u', 'd', 'o', '=', 'X', 'b', 'S', 'e', 'q', 'x', 'E', '8', 'p', 'l', '8', '=', 0, 
	HB_P_MACROTEXT,
	HB_P_POPLOCALNEAR, 2,	/* CURL */
/* 00185 */ HB_P_LINEOFFSET, 11,	/* 152 */
	HB_P_PUSHSYMNEAR, 42,	/* CREATEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'M', 'S', 'X', 'M', 'L', '2', '.', 'S', 'e', 'r', 'v', 'e', 'r', 'X', 'M', 'L', 'H', 'T', 'T', 'P', '.', '6', '.', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* OSERVER */
	HB_P_TRYBEGIN, 147, 0, 0,	/* 147 (abs: 00000368) */
/* 00225 */ HB_P_LINEOFFSET, 14,	/* 155 */
	HB_P_MESSAGE, 43, 0,	/* OPEN */
	HB_P_PUSHLOCALNEAR, 3,	/* OSERVER */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'G', 'E', 'T', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CURL */
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00244 */ HB_P_LINEOFFSET, 15,	/* 156 */
	HB_P_MESSAGE, 49, 0,	/* SETREQUESTHEADER */
	HB_P_PUSHLOCALNEAR, 3,	/* OSERVER */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'T', 'y', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '/', 'x', '-', 'w', 'w', 'w', '-', 'f', 'o', 'r', 'm', '-', 'u', 'r', 'l', 'e', 'n', 'c', 'o', 'd', 'e', 'd', 0, 
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00305 */ HB_P_LINEOFFSET, 16,	/* 157 */
	HB_P_MESSAGE, 49, 0,	/* SETREQUESTHEADER */
	HB_P_PUSHLOCALNEAR, 3,	/* OSERVER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'k', 'e', 'e', 'p', '-', 'a', 'l', 'i', 'v', 'e', 0, 
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00341 */ HB_P_LINEOFFSET, 17,	/* 158 */
	HB_P_MESSAGE, 44, 0,	/* SEND */
	HB_P_PUSHLOCALNEAR, 3,	/* OSERVER */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00351 */ HB_P_LINEOFFSET, 18,	/* 159 */
	HB_P_MESSAGE, 50, 0,	/* WAITFORRESPONSE */
	HB_P_PUSHLOCALNEAR, 3,	/* OSERVER */
	HB_P_PUSHINT, 16, 39,	/* 10000 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00364 */ HB_P_TRYEND, 50, 0, 0,	/* 50 (abs: 00000414) */
/* 00368 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000368) */
	HB_P_POP,
/* 00373 */ HB_P_LINEOFFSET, 20,	/* 161 */
	HB_P_PUSHSYMNEAR, 26,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'o', 'n', 'e', 'x', 227, 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'S', 'i', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00409 */ HB_P_LINEOFFSET, 21,	/* 162 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00414 */ HB_P_LINEOFFSET, 28,	/* 169 */
	HB_P_PUSHLOCALNEAR, 5,	/* CIMAGE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00420 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 51, 0, 4, 0,	/* symbol (_INITSTATICS), 4 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols );
}

