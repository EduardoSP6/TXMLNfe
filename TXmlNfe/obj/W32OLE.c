/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 6717)
 * Generated C source code from <C:\\Sistemas Fivewin\\TXmlNfe\\W32OLE.PRG>
 * Command: C:\Sistemas Fivewin\TXmlNfe\W32OLE.PRG /q /oC:\Sistemas Fivewin\TXmlNfe\obj\W32OLE.c /M /N 
 * Created: 2016.08.09 10:53:39 (Microsoft Visual C++ 16.00.30319.01)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "C:\\Sistemas Fivewin\\TXmlNfe\\W32OLE.PRG"

HB_FUNC( XHB_CREATEOBJECT );
HB_FUNC( XHB_GETACTIVEOBJECT );
HB_FUNC( TOLEAUTOX );
HB_FUNC_STATIC( TOLEAUTOX_NEW );
HB_FUNC_STATIC( TOLEAUTOX_RELEASE );
HB_FUNC_STATIC( TOLEAUTOX_GETACTIVEOBJECT );
HB_FUNC_STATIC( TOLEAUTOX_INVOKE );
HB_FUNC_STATIC( TOLEAUTOX_COLLECTION );
HB_FUNC_INIT( INITIALIZE_OLE );
HB_FUNC_EXIT( __DEACTIVATE__OLE );
HB_FUNC( UNINITIALIZE_OLE );
HB_FUNC_INITSTATICS();

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TOLEAUTOX_ONERROR );
HB_FUNC_EXTERN( __CLSACTIVE );
HB_FUNC_EXTERN( __CLSINST );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HB_EXECFROMARRAY );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_STATIC( CREATEOLEOBJECT );
HB_FUNC_EXTERN( WOLEERROR );
HB_FUNC_EXTERN( WOLE2TXTERROR );
HB_FUNC_EXTERN( ERRORNEW );
HB_FUNC_STATIC( OLEEXCEPTIONDESCRIPTION );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_STATIC( OLEEXCEPTIONSOURCE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_STATIC( MESSAGEBOX );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_STATIC( OLERELEASEOBJECT );
HB_FUNC_STATIC( GETOLEOBJECT );
HB_FUNC_EXTERN( ADEL );
HB_FUNC_STATIC( OLE_INITIALIZE );
HB_FUNC_STATIC( OLE_UNINITIALIZE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_W32OLE )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "XHB_CREATEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( XHB_CREATEOBJECT )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOLEAUTOX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX )}, &ModuleFakeDyn },
{ "XHB_GETACTIVEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_GETACTIVEOBJECT )}, &ModuleFakeDyn },
{ "GETACTIVEOBJECT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOLEAUTOX_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_NEW )}, &ModuleFakeDyn },
{ "TOLEAUTOX_GETACTIVEOBJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_GETACTIVEOBJECT )}, &ModuleFakeDyn },
{ "TOLEAUTOX_INVOKE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_INVOKE )}, &ModuleFakeDyn },
{ "TOLEAUTOX_COLLECTION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_COLLECTION )}, &ModuleFakeDyn },
{ "ADDINLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CCLASSNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETONERROR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOLEAUTOX_ONERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_ONERROR )}, &ModuleFakeDyn },
{ "SETDESTRUCTOR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TOLEAUTOX_RELEASE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TOLEAUTOX_RELEASE )}, &ModuleFakeDyn },
{ "__CLSACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSACTIVE )}, NULL },
{ "HCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__CLSINST", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSINST )}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HOBJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "HB_EXECFROMARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_EXECFROMARRAY )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "_HOBJ", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CREATEOLEOBJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CREATEOLEOBJECT )}, &ModuleFakeDyn },
{ "WOLEERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WOLEERROR )}, NULL },
{ "WOLE2TXTERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WOLE2TXTERROR )}, NULL },
{ "ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORNEW )}, NULL },
{ "_ARGS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CANDEFAULT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CANRETRY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_CANSUBSTITUTE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_DESCRIPTION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OLEEXCEPTIONDESCRIPTION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLEEXCEPTIONDESCRIPTION )}, &ModuleFakeDyn },
{ "_GENCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OPERATION", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "_SEVERITY", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_SUBCODE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_SUBSYSTEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OLEEXCEPTIONSOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLEEXCEPTIONSOURCE )}, &ModuleFakeDyn },
{ "EVAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "_CCLASSNAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "MESSAGEBOX", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MESSAGEBOX )}, &ModuleFakeDyn },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OLERELEASEOBJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLERELEASEOBJECT )}, &ModuleFakeDyn },
{ "GETOLEOBJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETOLEOBJECT )}, &ModuleFakeDyn },
{ "ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADEL )}, NULL },
{ "ITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_ITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SETITEM", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "INITIALIZE_OLE$", {HB_FS_INIT | HB_FS_LOCAL}, {HB_INIT_FUNCNAME( INITIALIZE_OLE )}, &ModuleFakeDyn },
{ "OLE_INITIALIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLE_INITIALIZE )}, &ModuleFakeDyn },
{ "__DEACTIVATE__OLE$", {HB_FS_EXIT | HB_FS_LOCAL}, {HB_EXIT_FUNCNAME( __DEACTIVATE__OLE )}, &ModuleFakeDyn },
{ "UNINITIALIZE_OLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( UNINITIALIZE_OLE )}, &ModuleFakeDyn },
{ "OLE_UNINITIALIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OLE_UNINITIALIZE )}, &ModuleFakeDyn },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_W32OLE )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_W32OLE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_W32OLE )
   #include "hbiniseg.h"
#endif

HB_FUNC( XHB_CREATEOBJECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 27, 0,	/* 27 */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 3,	/* TOLEAUTOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* CSTRING */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CLICENSE */
	HB_P_SENDSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00023 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( XHB_GETACTIVEOBJECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 33, 0,	/* 33 */
	HB_P_MESSAGE, 5, 0,	/* GETACTIVEOBJECT */
	HB_P_PUSHSYMNEAR, 3,	/* TOLEAUTOX */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* CSTRING */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00020 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( TOLEAUTOX )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_SFRAME, 69, 0,	/* symbol (_INITSTATICS) */
	HB_P_LOCALNEARSETINT, 2, 1, 0,	/* NSCOPE 1*/
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 136, 1,	/* 392 (abs: 00407) */
	HB_P_MESSAGE, 2, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 6,	/* HBCLASS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'O', 'l', 'e', 'A', 'u', 't', 'o', 'X', 0, 
	HB_P_MESSAGE, 7, 0,	/* CLASSH */
	HB_P_PUSHSYMNEAR, 8,	/* HBOBJECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_SENDSHORT, 2,
	HB_P_POPSTATIC, 2, 0,	/* S_OCLASS */
/* 00056 */ HB_P_BASELINE, 38, 0,	/* 38 */
	HB_P_MESSAGE, 9, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'h', 'O', 'b', 'j', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00084 */ HB_P_LINEOFFSET, 1,	/* 39 */
	HB_P_MESSAGE, 9, 0,	/* ADDMULTIDATA */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'C', 'l', 'a', 's', 's', 'N', 'a', 'm', 'e', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 6,
	HB_P_POP,
/* 00117 */ HB_P_LINEOFFSET, 3,	/* 41 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 11,	/* TOLEAUTOX_NEW */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00143 */ HB_P_LINEOFFSET, 4,	/* 42 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'G', 'e', 't', 'A', 'c', 't', 'i', 'v', 'e', 'O', 'b', 'j', 'e', 'c', 't', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* TOLEAUTOX_GETACTIVEOBJECT */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00181 */ HB_P_LINEOFFSET, 6,	/* 44 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'n', 'v', 'o', 'k', 'e', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* TOLEAUTOX_INVOKE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 7,	/* 45 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', 'e', 't', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* TOLEAUTOX_INVOKE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00229 */ HB_P_LINEOFFSET, 8,	/* 46 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'G', 'e', 't', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* TOLEAUTOX_INVOKE */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00251 */ HB_P_LINEOFFSET, 10,	/* 48 */
	HB_P_MESSAGE, 10, 0,	/* ADDMETHOD */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'[', ']', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TOLEAUTOX_COLLECTION */
	HB_P_FUNCPTR,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00272 */ HB_P_LINEOFFSET, 13,	/* 51 */
	HB_P_MESSAGE, 15, 0,	/* ADDINLINE */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'o', 'r', 'c', 'e', 'S', 'y', 'm', 'b', 'o', 'l', 's', 0, 
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_POP,
	HB_P_MESSAGE, 16, 0,	/* CCLASSNAME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHLOCALNEAR, 2,	/* NSCOPE */
	HB_P_FALSE,
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00319 */ HB_P_LINEOFFSET, 15,	/* 53 */
	HB_P_MESSAGE, 17, 0,	/* SETONERROR */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 18,	/* TOLEAUTOX_ONERROR */
	HB_P_FUNCPTR,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00333 */ HB_P_LINEOFFSET, 17,	/* 55 */
	HB_P_MESSAGE, 19, 0,	/* SETDESTRUCTOR */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 20,	/* TOLEAUTOX_RELEASE */
	HB_P_FUNCPTR,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_MESSAGE, 24, 0,	/* CREATE */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 25,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 22, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 26,	/* __OBJHASMSG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'i', 't', 'C', 'l', 'a', 's', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 00422) */
	HB_P_MESSAGE, 27, 0,	/* INITCLASS */
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00422) */
	HB_P_PUSHSYMNEAR, 25,	/* __CLSINST */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 22, 0,	/* HCLASS */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_PUSHSYMNEAR, 29,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00439) */
	HB_P_PUSHSTATIC, 2, 0,	/* S_OCLASS */
	HB_P_PUSHSYMNEAR, 0,	/* DIVERTCONSTRUCTORCALL */
	HB_P_FUNCPTR,
	HB_P_ZERO,
	HB_P_DIVERTOF,
	HB_P_PUSHLOCALNEAR, 1,	/* OCLASSINSTANCE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00443 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLEAUTOX_NEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 2,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 3,	/* SELF */
/* 00006 */ HB_P_BASELINE, 67, 0,	/* 67 */
	HB_P_MESSAGE, 30, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00043) */
/* 00020 */ HB_P_LINEOFFSET, 1,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* HB_EXECFROMARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'_', 'N', 'e', 'w', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 71 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 1,	/* 394 (abs: 00451) */
/* 00060 */ HB_P_LINEOFFSET, 6,	/* 73 */
	HB_P_MESSAGE, 33, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHSYMNEAR, 34,	/* CREATEOLEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00077 */ HB_P_LINEOFFSET, 8,	/* 75 */
	HB_P_PUSHSYMNEAR, 35,	/* WOLEERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 00436) */
/* 00089 */ HB_P_LINEOFFSET, 10,	/* 77 */
	HB_P_PUSHSYMNEAR, 36,	/* WOLE2TXTERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'I', 'S', 'P', '_', 'E', '_', 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O', 'N', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 00274) */
/* 00119 */ HB_P_LINEOFFSET, 12,	/* 79 */
	HB_P_PUSHSYMNEAR, 37,	/* ERRORNEW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* OERR */
/* 00128 */ HB_P_LINEOFFSET, 14,	/* 81 */
	HB_P_MESSAGE, 38, 0,	/* _ARGS */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00143 */ HB_P_LINEOFFSET, 15,	/* 82 */
	HB_P_MESSAGE, 39, 0,	/* _CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00154 */ HB_P_LINEOFFSET, 16,	/* 83 */
	HB_P_MESSAGE, 40, 0,	/* _CANRETRY */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00165 */ HB_P_LINEOFFSET, 17,	/* 84 */
	HB_P_MESSAGE, 41, 0,	/* _CANSUBSTITUTE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00176 */ HB_P_LINEOFFSET, 18,	/* 85 */
	HB_P_MESSAGE, 42, 0,	/* _DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 43,	/* OLEEXCEPTIONDESCRIPTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00191 */ HB_P_LINEOFFSET, 19,	/* 86 */
	HB_P_MESSAGE, 44, 0,	/* _GENCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHINT, 233, 3,	/* 1001 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00204 */ HB_P_LINEOFFSET, 21,	/* 88 */
	HB_P_MESSAGE, 45, 0,	/* _OPERATION */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 46,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00219 */ HB_P_LINEOFFSET, 22,	/* 89 */
	HB_P_MESSAGE, 47, 0,	/* _SEVERITY */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00231 */ HB_P_LINEOFFSET, 24,	/* 91 */
	HB_P_MESSAGE, 48, 0,	/* _SUBCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00243 */ HB_P_LINEOFFSET, 25,	/* 92 */
	HB_P_MESSAGE, 49, 0,	/* _SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 50,	/* OLEEXCEPTIONSOURCE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00258 */ HB_P_LINEOFFSET, 27,	/* 94 */
	HB_P_MESSAGE, 51, 0,	/* EVAL */
	HB_P_PUSHSYMNEAR, 52,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00274 */ HB_P_LINEOFFSET, 29,	/* 96 */
	HB_P_PUSHSYMNEAR, 37,	/* ERRORNEW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* OERR */
/* 00283 */ HB_P_LINEOFFSET, 30,	/* 97 */
	HB_P_MESSAGE, 38, 0,	/* _ARGS */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00298 */ HB_P_LINEOFFSET, 31,	/* 98 */
	HB_P_MESSAGE, 39, 0,	/* _CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00309 */ HB_P_LINEOFFSET, 32,	/* 99 */
	HB_P_MESSAGE, 40, 0,	/* _CANRETRY */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00320 */ HB_P_LINEOFFSET, 33,	/* 100 */
	HB_P_MESSAGE, 41, 0,	/* _CANSUBSTITUTE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00331 */ HB_P_LINEOFFSET, 34,	/* 101 */
	HB_P_MESSAGE, 42, 0,	/* _DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 36,	/* WOLE2TXTERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00346 */ HB_P_LINEOFFSET, 35,	/* 102 */
	HB_P_MESSAGE, 44, 0,	/* _GENCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHINT, 233, 3,	/* 1001 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00359 */ HB_P_LINEOFFSET, 36,	/* 103 */
	HB_P_MESSAGE, 45, 0,	/* _OPERATION */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSYMNEAR, 46,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00374 */ HB_P_LINEOFFSET, 37,	/* 104 */
	HB_P_MESSAGE, 47, 0,	/* _SEVERITY */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00386 */ HB_P_LINEOFFSET, 38,	/* 105 */
	HB_P_MESSAGE, 48, 0,	/* _SUBCODE */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00398 */ HB_P_LINEOFFSET, 39,	/* 106 */
	HB_P_MESSAGE, 49, 0,	/* _SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'O', 'l', 'e', 'A', 'u', 't', 'o', 'X', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00420 */ HB_P_LINEOFFSET, 41,	/* 108 */
	HB_P_MESSAGE, 51, 0,	/* EVAL */
	HB_P_PUSHSYMNEAR, 52,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 4,	/* OERR */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00436 */ HB_P_LINEOFFSET, 45,	/* 112 */
	HB_P_MESSAGE, 53, 0,	/* _CCLASSNAME */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMP, 180, 0,	/* 180 (abs: 00628) */
/* 00451 */ HB_P_LINEOFFSET, 46,	/* 113 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00533) */
/* 00467 */ HB_P_LINEOFFSET, 47,	/* 114 */
	HB_P_MESSAGE, 33, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00479 */ HB_P_LINEOFFSET, 49,	/* 116 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CCLASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00509) */
/* 00495 */ HB_P_LINEOFFSET, 50,	/* 117 */
	HB_P_MESSAGE, 53, 0,	/* _CCLASSNAME */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* CCLASS */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 121,	/* 121 (abs: 00628) */
/* 00509 */ HB_P_LINEOFFSET, 52,	/* 119 */
	HB_P_MESSAGE, 53, 0,	/* _CCLASSNAME */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHSYMNEAR, 54,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* UOBJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 00628) */
/* 00533 */ HB_P_LINEOFFSET, 55,	/* 122 */
	HB_P_PUSHSYMNEAR, 56,	/* MESSAGEBOX */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', ' ', 't', 'y', 'p', 'e', ' ', 't', 'o', ' ', 'c', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', 'o', 'r', ' ', 'T', 'O', 'l', 'e', 'A', 'u', 't', 'o', 'X', '(', ')', ':', 'N', 'e', 'w', '(', ')', '!', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'O', 'L', 'E', ' ', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0, 
	HB_P_ZERO,
	HB_P_DOSHORT, 4,
/* 00617 */ HB_P_LINEOFFSET, 56,	/* 123 */
	HB_P_MESSAGE, 33, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_ZERO,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00628 */ HB_P_LINEOFFSET, 59,	/* 126 */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00634 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLEAUTOX_RELEASE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 133, 0,	/* 133 */
	HB_P_PUSHSYMNEAR, 57,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 30, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 00037) */
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 134 */
	HB_P_PUSHSYMNEAR, 58,	/* OLERELEASEOBJECT */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 30, 0,	/* HOBJ */
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_SENDSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00037 */ HB_P_LINEOFFSET, 4,	/* 137 */
	HB_P_ENDPROC
/* 00040 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLEAUTOX_GETACTIVEOBJECT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 2,	/* SELF */
/* 00006 */ HB_P_BASELINE, 145, 0,	/* 145 */
	HB_P_PUSHSYMNEAR, 32,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CCLASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 1,	/* 393 (abs: 00414) */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 147 */
	HB_P_MESSAGE, 33, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHSYMNEAR, 59,	/* GETOLEOBJECT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CCLASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00041 */ HB_P_LINEOFFSET, 4,	/* 149 */
	HB_P_PUSHSYMNEAR, 35,	/* WOLEERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 00400) */
/* 00053 */ HB_P_LINEOFFSET, 6,	/* 151 */
	HB_P_PUSHSYMNEAR, 36,	/* WOLE2TXTERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'I', 'S', 'P', '_', 'E', '_', 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O', 'N', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 00238) */
/* 00083 */ HB_P_LINEOFFSET, 7,	/* 152 */
	HB_P_PUSHSYMNEAR, 37,	/* ERRORNEW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OERR */
/* 00092 */ HB_P_LINEOFFSET, 8,	/* 153 */
	HB_P_MESSAGE, 38, 0,	/* _ARGS */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHLOCALNEAR, 1,	/* CCLASS */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00107 */ HB_P_LINEOFFSET, 9,	/* 154 */
	HB_P_MESSAGE, 39, 0,	/* _CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00118 */ HB_P_LINEOFFSET, 10,	/* 155 */
	HB_P_MESSAGE, 40, 0,	/* _CANRETRY */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00129 */ HB_P_LINEOFFSET, 11,	/* 156 */
	HB_P_MESSAGE, 41, 0,	/* _CANSUBSTITUTE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00140 */ HB_P_LINEOFFSET, 12,	/* 157 */
	HB_P_MESSAGE, 42, 0,	/* _DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSYMNEAR, 43,	/* OLEEXCEPTIONDESCRIPTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00155 */ HB_P_LINEOFFSET, 13,	/* 158 */
	HB_P_MESSAGE, 44, 0,	/* _GENCODE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHINT, 233, 3,	/* 1001 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00168 */ HB_P_LINEOFFSET, 14,	/* 159 */
	HB_P_MESSAGE, 45, 0,	/* _OPERATION */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSYMNEAR, 46,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00183 */ HB_P_LINEOFFSET, 15,	/* 160 */
	HB_P_MESSAGE, 47, 0,	/* _SEVERITY */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00195 */ HB_P_LINEOFFSET, 16,	/* 161 */
	HB_P_MESSAGE, 48, 0,	/* _SUBCODE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00207 */ HB_P_LINEOFFSET, 17,	/* 162 */
	HB_P_MESSAGE, 49, 0,	/* _SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSYMNEAR, 50,	/* OLEEXCEPTIONSOURCE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00222 */ HB_P_LINEOFFSET, 19,	/* 164 */
	HB_P_MESSAGE, 51, 0,	/* EVAL */
	HB_P_PUSHSYMNEAR, 52,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00238 */ HB_P_LINEOFFSET, 21,	/* 166 */
	HB_P_PUSHSYMNEAR, 37,	/* ERRORNEW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OERR */
/* 00247 */ HB_P_LINEOFFSET, 22,	/* 167 */
	HB_P_MESSAGE, 38, 0,	/* _ARGS */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHLOCALNEAR, 1,	/* CCLASS */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00262 */ HB_P_LINEOFFSET, 23,	/* 168 */
	HB_P_MESSAGE, 39, 0,	/* _CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00273 */ HB_P_LINEOFFSET, 24,	/* 169 */
	HB_P_MESSAGE, 40, 0,	/* _CANRETRY */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_FALSE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00284 */ HB_P_LINEOFFSET, 25,	/* 170 */
	HB_P_MESSAGE, 41, 0,	/* _CANSUBSTITUTE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_TRUE,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00295 */ HB_P_LINEOFFSET, 26,	/* 171 */
	HB_P_MESSAGE, 42, 0,	/* _DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSYMNEAR, 36,	/* WOLE2TXTERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00310 */ HB_P_LINEOFFSET, 27,	/* 172 */
	HB_P_MESSAGE, 44, 0,	/* _GENCODE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHINT, 233, 3,	/* 1001 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00323 */ HB_P_LINEOFFSET, 28,	/* 173 */
	HB_P_MESSAGE, 45, 0,	/* _OPERATION */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSYMNEAR, 46,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00338 */ HB_P_LINEOFFSET, 29,	/* 174 */
	HB_P_MESSAGE, 47, 0,	/* _SEVERITY */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00350 */ HB_P_LINEOFFSET, 30,	/* 175 */
	HB_P_MESSAGE, 48, 0,	/* _SUBCODE */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00362 */ HB_P_LINEOFFSET, 31,	/* 176 */
	HB_P_MESSAGE, 49, 0,	/* _SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'O', 'l', 'e', 'A', 'u', 't', 'o', 'X', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00384 */ HB_P_LINEOFFSET, 33,	/* 178 */
	HB_P_MESSAGE, 51, 0,	/* EVAL */
	HB_P_PUSHSYMNEAR, 52,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 3,	/* OERR */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00400 */ HB_P_LINEOFFSET, 37,	/* 182 */
	HB_P_MESSAGE, 53, 0,	/* _CCLASSNAME */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* CCLASS */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 00521) */
/* 00414 */ HB_P_LINEOFFSET, 39,	/* 184 */
	HB_P_PUSHSYMNEAR, 56,	/* MESSAGEBOX */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', ' ', 't', 'y', 'p', 'e', ' ', 't', 'o', ' ', 'c', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', 'o', 'r', ' ', 'T', 'O', 'l', 'e', 'A', 'u', 't', 'o', 'X', '(', ')', ':', 'G', 'e', 't', 'A', 'c', 't', 'i', 'v', 'e', 'O', 'b', 'j', 'e', 'c', 't', '(', ')', '!', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'O', 'L', 'E', ' ', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0, 
	HB_P_ZERO,
	HB_P_DOSHORT, 4,
/* 00510 */ HB_P_LINEOFFSET, 40,	/* 185 */
	HB_P_MESSAGE, 33, 0,	/* _HOBJ */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_ZERO,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00521 */ HB_P_LINEOFFSET, 43,	/* 188 */
	HB_P_PUSHLOCALNEAR, 2,	/* SELF */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00527 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLEAUTOX_INVOKE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 255,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 1,	/* SELF */
/* 00006 */ HB_P_BASELINE, 193, 0,	/* 193 */
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 2,	/* CMETHOD */
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 195 */
	HB_P_PUSHSYMNEAR, 31,	/* HB_EXECFROMARRAY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* SELF */
	HB_P_PUSHLOCALNEAR, 2,	/* CMETHOD */
	HB_P_PUSHSYMNEAR, 60,	/* ADEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_TRUE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00043 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TOLEAUTOX_COLLECTION )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 2,	/* locals, params */
	HB_P_PUSHSELF,
	HB_P_POPLOCALNEAR, 3,	/* SELF */
/* 00006 */ HB_P_BASELINE, 202, 0,	/* 202 */
	HB_P_PUSHSYMNEAR, 29,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00031) */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 203 */
	HB_P_MESSAGE, 61, 0,	/* ITEM */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* XINDEX */
	HB_P_SENDSHORT, 1,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_TRYBEGIN, 23, 0, 0,	/* 23 (abs: 00000054) */
/* 00035 */ HB_P_LINEOFFSET, 6,	/* 208 */
	HB_P_MESSAGE, 62, 0,	/* _ITEM */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* XINDEX */
	HB_P_PUSHLOCALNEAR, 2,	/* XVALUE */
	HB_P_SENDSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* XRET */
/* 00050 */ HB_P_TRYEND, 24, 0, 0,	/* 24 (abs: 00000074) */
/* 00054 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000054) */
	HB_P_POP,
/* 00059 */ HB_P_LINEOFFSET, 8,	/* 210 */
	HB_P_MESSAGE, 63, 0,	/* SETITEM */
	HB_P_PUSHLOCALNEAR, 3,	/* SELF */
	HB_P_PUSHLOCALNEAR, 1,	/* XINDEX */
	HB_P_PUSHLOCALNEAR, 2,	/* XVALUE */
	HB_P_SENDSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* XRET */
/* 00074 */ HB_P_LINEOFFSET, 11,	/* 213 */
	HB_P_PUSHLOCALNEAR, 4,	/* XRET */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00080 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INIT( INITIALIZE_OLE )
{
   static const BYTE pcode[] =
   {
	HB_P_SFRAME, 69, 0,	/* symbol (_INITSTATICS) */
/* 00003 */ HB_P_BASELINE, 146, 5,	/* 1426 */
	HB_P_PUSHSTATIC, 1, 0,	/* BOLEINITIALIZED */
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00024) */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 1427 */
	HB_P_TRUE,
	HB_P_POPSTATIC, 1, 0,	/* BOLEINITIALIZED */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 1428 */
	HB_P_PUSHSYMNEAR, 65,	/* OLE_INITIALIZE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00024 */ HB_P_LINEOFFSET, 5,	/* 1431 */
	HB_P_ENDPROC
/* 00027 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_EXIT( __DEACTIVATE__OLE )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 157, 5,	/* 1437 */
	HB_P_PUSHSYMNEAR, 67,	/* UNINITIALIZE_OLE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 2,	/* 1439 */
	HB_P_ENDPROC
/* 00011 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( UNINITIALIZE_OLE )
{
   static const BYTE pcode[] =
   {
	HB_P_SFRAME, 69, 0,	/* symbol (_INITSTATICS) */
/* 00003 */ HB_P_BASELINE, 165, 5,	/* 1445 */
	HB_P_PUSHSTATIC, 1, 0,	/* BOLEINITIALIZED */
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00024) */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 1446 */
	HB_P_FALSE,
	HB_P_POPSTATIC, 1, 0,	/* BOLEINITIALIZED */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 1447 */
	HB_P_PUSHSYMNEAR, 68,	/* OLE_UNINITIALIZE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00024 */ HB_P_LINEOFFSET, 5,	/* 1450 */
	HB_P_ENDPROC
/* 00027 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 69, 0, 2, 0,	/* symbol (_INITSTATICS), 2 statics */
	HB_P_SFRAME, 69, 0,	/* symbol (_INITSTATICS) */
	HB_P_FALSE,
	HB_P_POPSTATIC, 1, 0,	/* BOLEINITIALIZED */
	HB_P_ENDPROC
/* 00013 */
   };

   hb_vmExecute( pcode, symbols );
}

#line 216 "C:\\Sistemas Fivewin\\TXmlNfe\\W32OLE.PRG"

   #ifndef CINTERFACE
      #define CINTERFACE 1
   #endif

   #define NONAMELESSUNION

   #include "hbapiitm.h"
   #include "hbapierr.h"
   #include "hbvm.h"
   #include "hbdate.h"
   #include "hbfast.h"
#include "hbapi.h"
#include "hbstack.h"

#include <ctype.h>
   #include <windows.h>
   #include <ole2.h>
   #include <oleauto.h>

   #ifdef __MINGW32__
      // Missing in oleauto.h
      WINOLEAUTAPI VarR8FromDec(DECIMAL *pdecIn, DOUBLE *pdblOut);
   #endif

   #if ( defined(__DMC__) || defined(__MINGW32__) || ( defined(__WATCOMC__) && !defined(__FORCE_LONG_LONG__) ) )
      #define HB_LONG_LONG_OFF
   #endif

   static HRESULT  s_nOleError;
   static HB_ITEM  OleAuto;

   static PHB_DYNS s_pSym_OleAuto;
   static PHB_DYNS s_pSym_hObj;
   static PHB_DYNS s_pSym_New;
   static PHB_DYNS s_pSym_cClassName;

   static BOOL *s_OleRefFlags = NULL;

   static VARIANTARG RetVal;

  static EXCEPINFO excep;

  static PHB_ITEM *aPrgParams = NULL;

  static BSTR bstrMessage;
  static DISPID lPropPut = DISPID_PROPERTYPUT;
  static UINT uArgErr;


   HB_FUNC_STATIC( OLE_INITIALIZE )
   {
      s_nOleError = OleInitialize( NULL );

      s_pSym_OleAuto = hb_dynsymFindName( "TOLEAUTOX" );
      s_pSym_New  = hb_dynsymFindName( "NEW" );
      s_pSym_hObj        = hb_dynsymFindName( "HOBJ" );
      s_pSym_cClassName  = hb_dynsymFindName( "CCLASSNAME" );

   }

   HB_FUNC_STATIC( OLE_UNINITIALIZE )
   {
      OleUninitialize();
   }
  //---------------------------------------------------------------------------//

  static double DateToDbl( LPSTR cDate )
  {
     double nDate;

     nDate = hb_dateEncStr( cDate ) - 0x0024d9abL;

     return ( nDate );
  }

  //---------------------------------------------------------------------------//

  static LPSTR DblToDate( double nDate )
  {
     static char cDate[9] = "00000000";

     hb_dateDecStr( cDate, (LONG) nDate + 0x0024d9abL );

     return ( cDate );
  }

  //---------------------------------------------------------------------------//


  static BSTR AnsiToSysString( LPSTR cString )
  {
     BSTR bstrString;
     int nConvertedLen = MultiByteToWideChar( CP_ACP, MB_PRECOMPOSED, cString, -1, NULL, 0 ) -1;

     bstrString = SysAllocStringLen( NULL, nConvertedLen );

     if( bstrString )
     {
        bstrString[0] = '\0';
        MultiByteToWideChar( CP_ACP, 0, cString, -1,  bstrString, nConvertedLen );
     }

     return bstrString;
  }

  //---------------------------------------------------------------------------//

  static LPSTR WideToAnsi( BSTR wString )
  {
     char *cString;
     int nConvertedLen = WideCharToMultiByte( CP_ACP, 0, wString, -1, NULL, 0, NULL, NULL );

     if( nConvertedLen )
     {
        cString = (char *) hb_xgrab( nConvertedLen );
        WideCharToMultiByte( CP_ACP, 0, wString, -1, cString, nConvertedLen, NULL, NULL );
     }
     else
     {
        cString = (char *) hb_xgrab( 1 );
        cString[0] = '\0';
     }

     //wprintf( L"\nWide: '%s'\n", wString );
     //printf( "\nAnsi: '%s'\n", cString );

     return cString;
  }

  //---------------------------------------------------------------------------//

  static void GetParams( DISPPARAMS *pDispParams )
  {
     VARIANTARG * pArgs = NULL;
     PHB_ITEM uParam;
     int n, nArgs, nArg;
     BOOL bByRef;

     nArgs = hb_pcount();

     if( nArgs > 0 )
     {
        pArgs = ( VARIANTARG * ) hb_xgrab( sizeof( VARIANTARG ) * nArgs );
        aPrgParams = ( PHB_ITEM * ) hb_xgrab( sizeof( PHB_ITEM ) * nArgs );

        // 1 Based!!!
        s_OleRefFlags = (BOOL *) hb_xgrab( ( nArgs + 1 ) * sizeof( BOOL ) );

        //printf( "Args: %i\n", nArgs );

        for( n = 0; n < nArgs; n++ )
        {
           // Parameters are processed in reversed order.
           nArg = nArgs - n;

           VariantInit( &( pArgs[ n ] ) );

           uParam = hb_param( nArg, HB_IT_ANY );

           bByRef = HB_IS_BYREF( hb_stackItemFromBase( nArg ) );

           // 1 Based!!!
           s_OleRefFlags[ nArg ] = bByRef;

           //TraceLog( NULL, "N: %i Arg: %i Type: %i %i ByRef: %i\n", n, nArg, hb_stackItemFromBase( nArg  )->type, uParam->type, bByRef );

           aPrgParams[ n ] = uParam;

           switch( uParam->type )
           {
              case HB_IT_NIL:
                pArgs[ n ].n1.n2.vt   = VT_EMPTY;
                break;

              case HB_IT_STRING:
              case HB_IT_MEMO:
                if( bByRef )
                {
                   hb_itemPutCRawStatic( uParam, ( char *) AnsiToSysString( hb_parcx( nArg ) ), uParam->item.asString.length * 2 + 1 );

                   pArgs[ n ].n1.n2.vt   = VT_BYREF | VT_BSTR;
                   pArgs[ n ].n1.n2.n3.pbstrVal = (BSTR *) &( uParam->item.asString.value );
                   //wprintf( L"*** BYREF >%s<\n", *pArgs[ n ].n1.n2.n3.bstrVal );
                }
                else
                {
                   pArgs[ n ].n1.n2.vt   = VT_BSTR;
                   pArgs[ n ].n1.n2.n3.bstrVal = AnsiToSysString( hb_parcx( nArg ) );
                   //wprintf( L"*** >%s<\n", pArgs[ n ].n1.n2.n3.bstrVal );
                }
                break;

              case HB_IT_LOGICAL:
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_BOOL;
                   pArgs[ n ].n1.n2.n3.pboolVal = (short *) &( uParam->item.asLogical.value ) ;
                   uParam->type = HB_IT_LONG;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt = VT_BOOL;
                   pArgs[ n ].n1.n2.n3.boolVal = hb_parl( nArg ) ? VARIANT_TRUE : VARIANT_FALSE;
                }
                break;

              case HB_IT_INTEGER:
#if HB_INT_MAX == INT16_MAX
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_I2;
                   pArgs[ n ].n1.n2.n3.piVal = &( uParam->item.asInteger.value ) ;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt = VT_I2;
                   pArgs[ n ].n1.n2.n3.iVal = hb_parni( nArg );
                }
                break;
#else
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_I4;
                   pArgs[ n ].n1.n2.n3.plVal = (long *) &( uParam->item.asInteger.value ) ;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt = VT_I4;
                   pArgs[ n ].n1.n2.n3.lVal = hb_parnl( nArg );
                }
                break;
#endif
              case HB_IT_LONG:
#if HB_LONG_MAX == INT32_MAX || defined( HB_LONG_LONG_OFF )
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_I4;
                   pArgs[ n ].n1.n2.n3.plVal = (long *) &( uParam->item.asLong.value ) ;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt = VT_I4;
                   pArgs[ n ].n1.n2.n3.lVal = hb_parnl( nArg );
                }
#else
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_I8;
                   pArgs[ n ].n1.n2.n3.pllVal = &( uParam->item.asLong.value ) ;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt = VT_I8;
                   pArgs[ n ].n1.n2.n3.llVal = hb_parnll( nArg );
                }
#endif
                break;

              case HB_IT_DOUBLE:
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_R8;
                   pArgs[ n ].n1.n2.n3.pdblVal = &( uParam->item.asDouble.value ) ;
                   uParam->type = HB_IT_DOUBLE;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt   = VT_R8;
                   pArgs[ n ].n1.n2.n3.dblVal = hb_parnd( nArg );
                }
                break;

              case HB_IT_DATE:
                if( bByRef )
                {
                   pArgs[ n ].n1.n2.vt = VT_BYREF | VT_DATE;
                   uParam->item.asDouble.value = DateToDbl( hb_pards( nArg ) );
                   pArgs[ n ].n1.n2.n3.pdblVal = &( uParam->item.asDouble.value ) ;
                   uParam->type = HB_IT_DOUBLE;
                }
                else
                {
                   pArgs[ n ].n1.n2.vt   = VT_DATE;
                   pArgs[ n ].n1.n2.n3.dblVal = DateToDbl( hb_pards( nArg ) );
                }
                break;

              case HB_IT_ARRAY:
              {
                 pArgs[ n ].n1.n2.vt = VT_EMPTY;

                 if( ! HB_IS_OBJECT( uParam ) )
                 {
                    SAFEARRAYBOUND rgsabound;
                    PHB_ITEM       elem;
                    long           count;
                    long           i;

                    count = hb_arrayLen( uParam );

                    rgsabound.cElements = count;
                    rgsabound.lLbound = 0;
                    pArgs[ n ].n1.n2.vt        = VT_ARRAY | VT_VARIANT;
                    pArgs[ n ].n1.n2.n3.parray = SafeArrayCreate( VT_VARIANT, 1, &rgsabound );

                    for( i = 0; i < count; i++ )
                    {
                       elem = hb_arrayGetItemPtr( uParam, i+1 );

                       if( strcmp( hb_objGetClsName( elem ), "TOLEAUTOX" ) == 0 )
                       {
                          VARIANT mVariant;

                          VariantInit( &mVariant );

                          hb_vmPushSymbol( s_pSym_hObj->pSymbol );
                          hb_vmPush( elem );
                          hb_vmSend( 0 );

                          mVariant.n1.n2.vt = VT_DISPATCH;
                          mVariant.n1.n2.n3.pdispVal = ( IDispatch * ) hb_parnl( -1 );
                          SafeArrayPutElement( pArgs[ n ].n1.n2.n3.parray, &i, &mVariant );
                       }
                    }
                 }
                 else
                 {
                    if( hb_clsIsParent( uParam->item.asArray.value->uiClass , "TOLEAUTOX" ) )
                    {
                       hb_vmPushSymbol( s_pSym_hObj->pSymbol );
                       hb_vmPush( uParam );
                       hb_vmSend( 0 );
                       //TraceLog( NULL, "\n#%i Dispatch: %ld\n", n, hb_parnl( -1 ) );
                       pArgs[ n ].n1.n2.vt = VT_DISPATCH;
                       pArgs[ n ].n1.n2.n3.pdispVal = ( IDispatch * ) hb_parnl( -1 );
                       //printf( "\nDispatch: %p\n", pArgs[ n ].n1.n2.n3.pdispVal );

                    }
                    else
                    {
                       TraceLog( NULL, "Class: '%s' not suported!\n", hb_objGetClsName( uParam ) );
                    }
                 }
              }
              break;
           }
        }
     }

     pDispParams->rgvarg            = pArgs;
     pDispParams->cArgs             = nArgs;
     pDispParams->rgdispidNamedArgs = 0;
     pDispParams->cNamedArgs        = 0;
  }

  //---------------------------------------------------------------------------//

  static void FreeParams( DISPPARAMS *pDispParams )
  {
     int n, nParam;
     char *sString;

     if( pDispParams->cArgs > 0 )
     {
        for( n = 0; n < ( int ) pDispParams->cArgs; n++ )
        {
           nParam = pDispParams->cArgs - n;

           //TraceLog( NULL, "*** N: %i, Param: %i Type: %i\n", n, nParam, pDispParams->rgvarg[ n ].n1.n2.vt );

           // 1 Based!!!
           if( s_OleRefFlags[ nParam ]  )
           {
              switch( pDispParams->rgvarg[ n ].n1.n2.vt )
              {
                 case VT_BYREF | VT_BSTR:
                   //printf( "String\n" );
                   sString = WideToAnsi( *( pDispParams->rgvarg[ n ].n1.n2.n3.pbstrVal ) );

                   SysFreeString( *( pDispParams->rgvarg[ n ].n1.n2.n3.pbstrVal ) );

                   hb_itemPutCPtr( aPrgParams[ n ], sString, strlen( sString ) );
                   break;

                 // Already using the PHB_ITEM allocated value
                 /*
                 case VT_BYREF | VT_BOOL:
                   //printf( "Logical\n" );
                   ( aPrgParams[ n ] )->type = HB_IT_LOGICAL;
                   ( aPrgParams[ n ] )->item.asLogical.value = pDispParams->rgvarg[ n ].n1.n2.n3.boolVal ;
                   break;
                 */

                 case VT_DISPATCH:
                 case VT_BYREF | VT_DISPATCH:
                   //TraceLog( NULL, "Dispatch %p\n", pDispParams->rgvarg[ n ].n1.n2.n3.pdispVal );
                   if( pDispParams->rgvarg[ n ].n1.n2.n3.pdispVal == NULL )
                   {
                      hb_itemClear( aPrgParams[ n ] );
                      break;
                   }

                   OleAuto.type = HB_IT_NIL;

                   if( s_pSym_OleAuto )
                   {
                      hb_vmPushSymbol( s_pSym_OleAuto->pSymbol );
                      hb_vmPushNil();
                      hb_vmDo( 0 );

                      hb_itemForwardValue( &OleAuto, hb_stackReturnItem()) ;
                   }

                   if( s_pSym_New && OleAuto.type )
                   {

                      hb_vmPushSymbol( s_pSym_New->pSymbol );
                      hb_itemPushForward( &OleAuto );
                      hb_vmPushLong( ( LONG ) pDispParams->rgvarg[ n ].n1.n2.n3.pdispVal );
                      hb_vmSend( 1 );

                      hb_itemForwardValue( aPrgParams[ n ], hb_stackReturnItem() );
                   }
                   // Can't CLEAR this Variant
                   continue;

                 /*
                 case VT_BYREF | VT_I2:
                   //printf( "Int %i\n", pDispParams->rgvarg[ n ].n1.n2.n3.iVal );
                   hb_itemPutNI( aPrgParams[ n ], ( int ) pDispParams->rgvarg[ n ].n1.n2.n3.iVal );
                   break;

                 case VT_BYREF | VT_I4:
                   //printf( "Long %ld\n", pDispParams->rgvarg[ n ].n1.n2.n3.lVal );
                   hb_itemPutNL( aPrgParams[ n ], ( LONG ) pDispParams->rgvarg[ n ].n1.n2.n3.lVal );
                   break;

#ifndef HB_LONG_LONG_OFF
                 case VT_BYREF | VT_I8:
                   //printf( "Long %Ld\n", pDispParams->rgvarg[ n ].n1.n2.n3.llVal );
                   hb_itemPutNLL( aPrgParams[ n ], ( LONGLONG ) pDispParams->rgvarg[ n ].n1.n2.n3.llVal );
                   break;
#endif

                 case VT_BYREF | VT_R8:
                   //printf( "Double\n" );
                   hb_itemPutND( aPrgParams[ n ],  pDispParams->rgvarg[ n ].n1.n2.n3.dblVal );
                   break;
                 */

                 case VT_BYREF | VT_DATE:
                   //printf( "Date\n" );
                   hb_itemPutDS( aPrgParams[ n ], DblToDate( *( pDispParams->rgvarg[ n ].n1.n2.n3.pdblVal ) ) );
                   break;

                 /*
                 case VT_BYREF | VT_EMPTY:
                   //printf( "Nil\n" );
                   hb_itemClear( aPrgParams[ n ] );
                   break;
                 */

                 default:
                   TraceLog( NULL, "*** Unexpected Type: %i***\n", pDispParams->rgvarg[ n ].n1.n2.vt );
              }
           }
           else
           {
              switch( pDispParams->rgvarg[ n ].n1.n2.vt )
              {
                 case VT_BSTR:
                   break;

                 case VT_DISPATCH:
                   //TraceLog( NULL, "***NOT REF*** Dispatch %p\n", pDispParams->rgvarg[ n ].n1.n2.n3.pdispVal );
                   // Can'r CLEAR this Variant.
                   continue;

                 //case VT_ARRAY | VT_VARIANT:
                 //  SafeArrayDestroy( pDispParams->rgvarg[ n ].n1.n2.n3.parray );
              }
           }

           VariantClear( &(pDispParams->rgvarg[ n ] ) );
        }

        hb_xfree( ( LPVOID ) pDispParams->rgvarg );

        hb_xfree( (void *) s_OleRefFlags );
        s_OleRefFlags = NULL;

        hb_xfree( ( LPVOID ) aPrgParams );
        aPrgParams = NULL;
     }
  }

  //---------------------------------------------------------------------------//

  static void RetValue( void )
  {
     LPSTR cString;

     /*
     printf( "Type: %i\n", RetVal.n1.n2.vt );
     fflush( stdout );
     getchar();
     */

     switch( RetVal.n1.n2.vt )
     {
        case VT_BSTR:
          //printf( "String\n" );
          cString = WideToAnsi( RetVal.n1.n2.n3.bstrVal );
          //printf( "cString %s\n", cString );
          hb_retcAdopt( cString );
          //printf( "Adopted\n" );
          break;

        case VT_BOOL:
          hb_retl( RetVal.n1.n2.n3.boolVal == VARIANT_TRUE ? 1 :0 );
          break;

        case VT_DISPATCH:
          if( RetVal.n1.n2.n3.pdispVal == NULL )
          {
             hb_ret();
             break;
          }

          OleAuto.type = HB_IT_NIL;

          if( s_pSym_OleAuto )
          {
             hb_vmPushSymbol( s_pSym_OleAuto->pSymbol );
             hb_vmPushNil();
             hb_vmDo( 0 );

             hb_itemForwardValue( &OleAuto, hb_stackReturnItem() ) ; //; &(HB_VM_STACK.Return) );
          }

          if( s_pSym_New && OleAuto.type )
          {
             //TOleAuto():New( nDispatch )
             hb_vmPushSymbol( s_pSym_New->pSymbol );
             hb_itemPushForward( &OleAuto );
             hb_vmPushLong( ( LONG ) RetVal.n1.n2.n3.pdispVal );
             hb_vmSend( 1 );
             //printf( "Dispatch: %ld %ld\n", ( LONG ) RetVal.n1.n2.n3.pdispVal, (LONG) hb_stack.Return.item.asArray.value );
          }
          break;

        case VT_I1:     // Byte
        case VT_UI1:
          hb_retni( ( short ) RetVal.n1.n2.n3.bVal );
          break;

        case VT_I2:     // Short (2 bytes)
        case VT_UI2:
          hb_retni( ( short ) RetVal.n1.n2.n3.iVal );
          break;

        case VT_I4:     // Long (4 bytes)
        case VT_UI4:
        case VT_INT:
        case VT_UINT:
          hb_retnl( ( LONG ) RetVal.n1.n2.n3.lVal );
          break;

#ifndef HB_LONG_LONG_OFF
        case VT_I8:     // LongLong (8 bytes)
        case VT_UI8:
          hb_retnll( ( LONGLONG ) RetVal.n1.n2.n3.llVal );
          break;
#endif

        case VT_R4:     // Single
          hb_retnd( RetVal.n1.n2.n3.fltVal );
          break;

        case VT_R8:     // Double
          hb_retnd( RetVal.n1.n2.n3.dblVal );
          break;

        case VT_CY:     // Currency
        {
          double tmp = 0;
          VarR8FromCy( RetVal.n1.n2.n3.cyVal, &tmp );
          hb_retnd( tmp );
        }
          break;

        case VT_DECIMAL: // Decimal
          {
          double tmp = 0;
          VarR8FromDec( &RetVal.n1.decVal, &tmp );
          hb_retnd( tmp );
          }
          break;

        case VT_DATE:
          hb_retds( DblToDate( RetVal.n1.n2.n3.dblVal ) );
          break;

        case VT_EMPTY:
        case VT_NULL:
          hb_ret();
          break;

        case VT_ARRAY | VT_VARIANT:
        {
           long     i, nFrom, nTo;
           VARIANT  mElem;
           HB_ITEM Result, Add;

           SafeArrayGetLBound( RetVal.n1.n2.n3.parray, 1, &nFrom );
           SafeArrayGetUBound( RetVal.n1.n2.n3.parray, 1, &nTo );

           Result.type = HB_IT_NIL;
           hb_arrayNew( &Result, 0 );

           Add.type = HB_IT_NIL;

           for ( i = nFrom; i <= nTo; i++ )
           {
              VariantInit( &mElem );
              SafeArrayGetElement( RetVal.n1.n2.n3.parray, &i, &mElem );

              if( mElem.n1.n2.vt == VT_DISPATCH && mElem.n1.n2.n3.pdispVal )
              {
                 if( s_pSym_OleAuto )
                 {
                    hb_vmPushSymbol( s_pSym_OleAuto->pSymbol );
                    hb_vmPushNil();
                    hb_vmDo( 0 );

                    hb_itemForwardValue( &Add, hb_stackReturnItem() );
                 }

                 if( s_pSym_New && Add.type )
                 {
                    hb_vmPushSymbol( s_pSym_New->pSymbol );
                    hb_vmPush( &Add );
                    hb_vmPushLong( ( LONG ) mElem.n1.n2.n3.pdispVal );
                    hb_vmSend( 1 );

                    mElem.n1.n2.n3.pdispVal->lpVtbl->AddRef( mElem.n1.n2.n3.pdispVal );
                 }

                 hb_arrayAddForward( &Result, &Add );
              }

              VariantClear( &mElem );
           }

           hb_itemReturn( &Result );
        }
        break;
/*- end ----------------------------->8-------------------------------------*/

        default:
          //printf( "Default %i!\n", RetVal.n1.n2.vt );
          if( s_nOleError == S_OK )
          {
             s_nOleError = E_UNEXPECTED;
          }

          hb_ret();
          break;
     }

     if( RetVal.n1.n2.vt == VT_DISPATCH && RetVal.n1.n2.n3.pdispVal )
     {
        //printf( "Dispatch: %ld\n", ( LONG ) RetVal.n1.n2.n3.pdispVal );
     }
     else
     {
        VariantClear( &RetVal );
     }
  }

  //---------------------------------------------------------------------------//

  HB_FUNC( WOLESHOWEXCEPTION )
  {
     if( (LONG) s_nOleError == DISP_E_EXCEPTION )
     {
        LPSTR source, description;

        source = WideToAnsi( excep.bstrSource );
        description = WideToAnsi( excep.bstrDescription );

        MessageBox( NULL, description, source, MB_ICONHAND );

        hb_xfree( source );
        hb_xfree( description );
     }
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( OLEEXCEPTIONSOURCE )
  {
     if( (LONG) s_nOleError == DISP_E_EXCEPTION )
     {
        LPSTR source;

        source = WideToAnsi( excep.bstrSource );
        hb_retcAdopt( source );
     }
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( OLEEXCEPTIONDESCRIPTION )
  {
     if( (LONG) s_nOleError == DISP_E_EXCEPTION )
     {
        LPSTR description;

        description = WideToAnsi( excep.bstrDescription );
        hb_retcAdopt( description );
     }
  }

  //---------------------------------------------------------------------------//

  HB_FUNC( WOLEERROR )
  {
     hb_retnl( (LONG) s_nOleError );
  }

  //---------------------------------------------------------------------------//

  static char * WOle2TxtError( void )
  {
     switch( (LONG) s_nOleError )
     {
        case S_OK:
           return "S_OK";

        case CO_E_CLASSSTRING:
           return "CO_E_CLASSSTRING";

        case OLE_E_WRONGCOMPOBJ:
           return "OLE_E_WRONGCOMPOBJ";

        case REGDB_E_CLASSNOTREG:
           return "REGDB_E_CLASSNOTREG";

        case REGDB_E_WRITEREGDB:
           return "REGDB_E_WRITEREGDB";

        case E_OUTOFMEMORY:
           return "E_OUTOFMEMORY";

        case E_NOTIMPL:
           return "E_NOTIMPL";

        case E_INVALIDARG:
           return "E_INVALIDARG";

        case E_UNEXPECTED:
           return "E_UNEXPECTED";

        case DISP_E_UNKNOWNNAME:
           return "DISP_E_UNKNOWNNAME";

        case DISP_E_UNKNOWNLCID:
           return "DISP_E_UNKNOWNLCID";

        case DISP_E_BADPARAMCOUNT:
           return "DISP_E_BADPARAMCOUNT";

        case DISP_E_BADVARTYPE:
           return "DISP_E_BADVARTYPE";

        case DISP_E_EXCEPTION:
           return "DISP_E_EXCEPTION";

        case DISP_E_MEMBERNOTFOUND:
           return "DISP_E_MEMBERNOTFOUND";

        case DISP_E_NONAMEDARGS:
           return "DISP_E_NONAMEDARGS";

        case DISP_E_OVERFLOW:
           return "DISP_E_OVERFLOW";

        case DISP_E_PARAMNOTFOUND:
           return "DISP_E_PARAMNOTFOUND";

        case DISP_E_TYPEMISMATCH:
           return "DISP_E_TYPEMISMATCH";

        case DISP_E_UNKNOWNINTERFACE:
           return "DISP_E_UNKNOWNINTERFACE";

        case DISP_E_PARAMNOTOPTIONAL:
           return "DISP_E_PARAMNOTOPTIONAL";

        case CO_E_SERVER_EXEC_FAILURE:
           return "CO_E_SERVER_EXEC_FAILURE";

        case MK_E_UNAVAILABLE:
           return "MK_E_UNAVAILABLE";

        default:
           TraceLog( NULL, "TOleAutoX Error %p\n", s_nOleError );
           return "Unknown error";
     };
  }

  //---------------------------------------------------------------------------//
  HB_FUNC( WOLE2TXTERROR )
  {
     hb_retc( WOle2TxtError() );
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( MESSAGEBOX )
  {
     hb_retni( MessageBox( ( HWND ) hb_parnl( 1 ), hb_parcx( 2 ), hb_parcx( 3 ), hb_parni( 4 ) ) );
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( CREATEOLEOBJECT ) // ( cOleName | cCLSID  [, cIID ] )
  {
     BSTR bstrClassID;
     IID ClassID, iid;
     LPIID riid = (LPIID) &IID_IDispatch;
     IDispatch *pDisp;

     bstrClassID = AnsiToSysString( hb_parcx( 1 ) );

     if( hb_parcx( 1 )[ 0 ] == '{' )
     {
        s_nOleError = CLSIDFromString( bstrClassID, (LPCLSID) &ClassID );
     }
     else
     {
        s_nOleError = CLSIDFromProgID( bstrClassID, (LPCLSID) &ClassID );
     }

     SysFreeString( bstrClassID );

     //TraceLog( NULL, "Result: %i\n", s_nOleError );

     if( hb_pcount() == 2 )
     {
        if( hb_parcx( 2 )[ 0 ] == '{' )
        {
           bstrClassID = AnsiToSysString( hb_parcx( 2 ) );
           s_nOleError = CLSIDFromString( bstrClassID, &iid );
           SysFreeString( bstrClassID );
        }
        else
        {
           memcpy( ( LPVOID ) &iid, hb_parcx( 2 ), sizeof( iid ) );
        }

        riid = &iid;
     }

     if( s_nOleError == S_OK )
     {
        //TraceLog( NULL, "Class: %i\n", ClassID );
        pDisp = NULL;
        s_nOleError = CoCreateInstance( (REFCLSID) &ClassID, NULL, CLSCTX_SERVER, (REFIID) riid, (void **) &pDisp );
        //TraceLog( NULL, "Result: %i\n", s_nOleError );
     }

     hb_retnl( ( LONG ) pDisp );
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( GETOLEOBJECT ) // ( cOleName | cCLSID  [, cIID ] )
  {
     BSTR bstrClassID;
     IID ClassID, iid;
     LPIID riid = (LPIID) &IID_IDispatch;
     IUnknown *pUnk = NULL;
     IDispatch *pDisp;
     //LPOLESTR pOleStr = NULL;

     s_nOleError = S_OK;

     if( ( s_nOleError == S_OK ) || ( s_nOleError == (HRESULT) S_FALSE) )
     {
        bstrClassID = AnsiToSysString( hb_parcx( 1 ) );

        if( hb_parcx( 1 )[ 0 ] == '{' )
        {
           s_nOleError = CLSIDFromString( bstrClassID, (LPCLSID) &ClassID );
        }
        else
        {
           s_nOleError = CLSIDFromProgID( bstrClassID, (LPCLSID) &ClassID );
        }

        //s_nOleError = ProgIDFromCLSID( &ClassID, &pOleStr );
        //wprintf( L"Result %i ProgID: '%s'\n", s_nOleError, pOleStr );

        SysFreeString( bstrClassID );

        if( hb_pcount() == 2 )
        {
           if( hb_parcx( 2 )[ 0 ] == '{' )
           {
              bstrClassID = AnsiToSysString( hb_parcx( 2 ) );
              s_nOleError = CLSIDFromString( bstrClassID, &iid );
              SysFreeString( bstrClassID );
           }
           else
           {
              memcpy( ( LPVOID ) &iid, hb_parcx( 2 ), sizeof( iid ) );
           }

           riid = &iid;
        }

        if( s_nOleError == S_OK )
        {
           s_nOleError = GetActiveObject( (REFCLSID) &ClassID, NULL, &pUnk );

           if( s_nOleError == S_OK )
           {
              pDisp = NULL;
              s_nOleError = pUnk->lpVtbl->QueryInterface( pUnk, (REFIID) riid, (void **) &pDisp );
           }
        }
     }

     hb_retnl( ( LONG ) pDisp );
  }

  //---------------------------------------------------------------------------//

  HB_FUNC_STATIC( OLERELEASEOBJECT ) // (hOleObject, szMethodName, uParams...)
  {
     IDispatch *pDisp = ( IDispatch * ) hb_parnl( 1 );

     s_nOleError = pDisp->lpVtbl->Release( pDisp );
  }

  //---------------------------------------------------------------------------//

  static void OleSetProperty( IDispatch *pDisp, DISPID DispID, DISPPARAMS *pDispParams )
  {
     // 1 Based!!!
     if( ( s_OleRefFlags && s_OleRefFlags[ 1 ] ) || hb_param( 1, HB_IT_ARRAY ) )
     {
        memset( (LPBYTE) &excep, 0, sizeof( excep ) );

        s_nOleError = pDisp->lpVtbl->Invoke( pDisp,
                                             DispID,
                                             (REFIID) &IID_NULL,
                                             LOCALE_USER_DEFAULT,
                                             DISPATCH_PROPERTYPUTREF,
                                             pDispParams,
                                             NULL,    // No return value
                                             &excep,
                                             &uArgErr );

       if( s_nOleError == S_OK )
       {
          return;
       }
     }

     memset( (LPBYTE) &excep, 0, sizeof( excep ) );

     s_nOleError = pDisp->lpVtbl->Invoke( pDisp,
                                          DispID,
                                          (REFIID) &IID_NULL,
                                          LOCALE_USER_DEFAULT,
                                          DISPATCH_PROPERTYPUT,
                                          pDispParams,
                                          NULL,    // No return value
                                          &excep,
                                          &uArgErr );
  }

  //---------------------------------------------------------------------------//

  static void OleInvoke( IDispatch *pDisp, DISPID DispID, DISPPARAMS *pDispParams )
  {
     memset( (LPBYTE) &excep, 0, sizeof( excep ) );

     s_nOleError = pDisp->lpVtbl->Invoke( pDisp,
                                          DispID,
                                          (REFIID) &IID_NULL,
                                          LOCALE_USER_DEFAULT,
                                          DISPATCH_METHOD,
                                          pDispParams,
                                          &RetVal,
                                          &excep,
                                          &uArgErr );
  }

  //---------------------------------------------------------------------------//

  static void OleGetProperty( IDispatch *pDisp, DISPID DispID, DISPPARAMS *pDispParams )
  {
     memset( (LPBYTE) &excep, 0, sizeof( excep ) );

     s_nOleError = pDisp->lpVtbl->Invoke( pDisp,
                                          DispID,
                                          (REFIID) &IID_NULL,
                                          LOCALE_USER_DEFAULT,
                                          DISPATCH_PROPERTYGET,
                                          pDispParams,
                                          &RetVal,
                                          &excep,
                                          &uArgErr );

  }

  //---------------------------------------------------------------------------//
  HB_FUNC_STATIC( TOLEAUTOX_ONERROR )
  {
     IDispatch *pDisp;
     DISPID DispID;
     DISPPARAMS DispParams;
     BOOL bSetFirst = FALSE;

     //TraceLog( NULL, "Class: '%s' Message: '%s', Params: %i Arg1: %i\n", hb_objGetClsName( hb_stackSelfItem() ), ( *HB_VM_STACK.pBase )->item.asSymbol.value->szName, hb_pcount(), hb_parinfo(1) );

     hb_vmPushSymbol( s_pSym_hObj->pSymbol );
     hb_vmPush( hb_stackSelfItem() );
     hb_vmSend( 0 );

     pDisp = ( IDispatch * ) hb_parnl( -1 );

     if( hb_stackBaseItem()->item.asSymbol.value->szName[0] == '_' && hb_stackBaseItem()->item.asSymbol.value->szName[1] && hb_pcount() >= 1 )
     {
        bstrMessage = AnsiToSysString( hb_stackBaseItem()->item.asSymbol.value->szName + 1 );
        s_nOleError = pDisp->lpVtbl->GetIDsOfNames( pDisp, (REFIID) &IID_NULL, (wchar_t **) &bstrMessage, 1, LOCALE_USER_DEFAULT, &DispID );
        SysFreeString( bstrMessage );
        //TraceLog( NULL, "1. ID of: '%s' -> %i Result: %i\n", ( *HB_VM_STACK.pBase )->item.asSymbol.value->szName + 1, DispID, s_nOleError );

        if( s_nOleError == S_OK )
        {
           bSetFirst = TRUE;
        }
     }
     else
     {
        s_nOleError = E_PENDING;
     }

     if( s_nOleError != S_OK )
     {
        // Try again without removing the assign prefix (_).
        bstrMessage = AnsiToSysString( hb_stackBaseItem()->item.asSymbol.value->szName );
        s_nOleError = pDisp->lpVtbl->GetIDsOfNames( pDisp, (REFIID) &IID_NULL, (wchar_t **) &bstrMessage, 1, 0, &DispID );
        SysFreeString( bstrMessage );
        //TraceLog( NULL, "2. ID of: '%s' -> %i Result: %i\n", ( *HB_VM_STACK.pBase )->item.asSymbol.value->szName, DispID, s_nOleError );
     }

     if( s_nOleError == S_OK )
     {
        GetParams( &DispParams );

        VariantInit( &RetVal );

        if( bSetFirst )
        {
           DispParams.rgdispidNamedArgs = &lPropPut;
           DispParams.cNamedArgs = 1;

           OleSetProperty( pDisp, DispID, &DispParams );
           //TraceLog( NULL, "OleSetProperty %i\n", s_nOleError );

           if( s_nOleError == S_OK )
           {
              hb_itemReturn( hb_stackItemFromBase( 1 ) );
           }
           else
           {
              DispParams.rgdispidNamedArgs = NULL;
              DispParams.cNamedArgs = 0;
           }
        }

        if( bSetFirst == FALSE || s_nOleError != S_OK )
        {
           OleInvoke( pDisp, DispID, &DispParams );
           //TraceLog( NULL, "OleInvoke %i\n", s_nOleError );

           if( s_nOleError == S_OK )
           {
              RetValue();
           }
        }

        // Collections are properties that do require arguments!
        if( s_nOleError != S_OK /* && hb_pcount() == 0 */ )
        {
           OleGetProperty( pDisp, DispID, &DispParams );
           //TraceLog( NULL, "OleGetProperty %i\n", s_nOleError );

           if( s_nOleError == S_OK )
           {
              RetValue();
           }
        }

        if( s_nOleError != S_OK && hb_pcount() >= 1 )
        {
           DispParams.rgdispidNamedArgs = &lPropPut;
           DispParams.cNamedArgs = 1;

           OleSetProperty( pDisp, DispID, &DispParams );
           //TraceLog( NULL, "OleSetProperty %i\n", s_nOleError );

           if( s_nOleError == S_OK )
           {
              hb_itemReturn( hb_stackItemFromBase( 1 ) );
           }
        }

        FreeParams( &DispParams );
     }

     if( s_nOleError == S_OK )
     {
        //TraceLog( NULL, "Invoke Succeeded!\n" );

        if( HB_IS_OBJECT( hb_stackReturnItem() ) )
        {
           HB_ITEM Return;
           HB_ITEM OleClassName;
           char sOleClassName[ 256 ];

           Return.type = HB_IT_NIL;
           hb_itemForwardValue( &Return, hb_stackReturnItem() ) ;


           hb_vmPushSymbol( s_pSym_cClassName->pSymbol );
           hb_vmPush( hb_stackSelfItem() );
           hb_vmSend( 0 );

           strncpy( sOleClassName, hb_parc( - 1 ), hb_parclen( -1 ) );
           sOleClassName[ hb_parclen( -1 ) ] = ':';
           strcpy( sOleClassName + hb_parclen( -1 ) + 1, hb_stackBaseItem()->item.asSymbol.value->szName );

           //TraceLog( NULL, "Class: '%s'\n", sOleClassName );

           OleClassName.type = HB_IT_NIL;
           hb_itemPutC( &OleClassName, sOleClassName );

           hb_vmPushSymbol( s_pSym_cClassName->pSymbol );
           hb_vmPush( &Return );
           hb_itemPushForward( &OleClassName );
           hb_vmSend( 1 );

           hb_itemReturn( &Return );
        }
     }
     else
     {
        PHB_ITEM pReturn;
        char *sDescription;

        //TraceLog( NULL, "Invoke Failed!\n" );

        hb_vmPushSymbol( s_pSym_cClassName->pSymbol );
        hb_vmPush( hb_stackSelfItem() );
        hb_vmSend( 0 );

        if( s_nOleError == DISP_E_EXCEPTION )
        {
           // Intentional to avoid report of memory leak if fatal error.
           char *sTemp = WideToAnsi( excep.bstrDescription );
           sDescription = (char *) malloc( strlen( sTemp ) + 1 );
           strcpy( sDescription, sTemp );
           hb_xfree( sTemp );
        }
        else
        {
           sDescription = WOle2TxtError();
        }

        //TraceLog( NULL, "Desc: '%s'\n", sDescription );

        pReturn = hb_errRT_SubstParams( hb_parcx( -1 ), EG_OLEEXECPTION, (ULONG) s_nOleError, sDescription, hb_stackBaseItem()->item.asSymbol.value->szName );

        if( s_nOleError == DISP_E_EXCEPTION )
        {
           free( (void *) sDescription );
        }

        if( pReturn )
        {
           hb_itemReturn( pReturn );
        }
     }
  }

