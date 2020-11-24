/*
 * Harbour 3.2.0dev (r1703241902)
 * MinGW GNU C 5.3 (32-bit)
 * Generated C source from "D:\@Drive-TW\@GitHub\restful\status_controller.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( STATUSCONTROLLER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( BASECONTROLLER );
HB_FUNC_STATIC( STATUSCONTROLLER_NEW );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( STATUSSERVICEAPI );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_STATUS_CONTROLLER )
{ "STATUSCONTROLLER", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( STATUSCONTROLLER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "BASECONTROLLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( BASECONTROLLER )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STATUSCONTROLLER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( STATUSCONTROLLER_NEW )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSERVICE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STATUSSERVICEAPI", {HB_FS_PUBLIC}, {HB_FUNCNAME( STATUSSERVICEAPI )}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_STATUS_CONTROLLER, "D:\\@Drive-TW\\@GitHub\\restful\\status_controller.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_STATUS_CONTROLLER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_STATUS_CONTROLLER )
   #include "hbiniseg.h"
#endif

HB_FUNC( STATUSCONTROLLER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,15,0,36,10,0,103,1,0,100,8,
		29,156,0,176,1,0,104,1,0,12,1,29,145,0,
		166,83,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,17,83,116,97,116,117,115,67,111,110,116,114,
		111,108,108,101,114,0,108,4,4,1,0,108,0,112,
		3,80,2,36,12,0,48,5,0,95,2,106,4,78,
		69,87,0,108,6,95,1,121,72,121,72,121,72,112,
		3,73,36,14,0,48,7,0,95,2,112,0,73,167,
		14,0,0,176,8,0,104,1,0,95,2,20,2,168,
		48,9,0,95,2,112,0,80,3,176,10,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,11,0,95,3,164,146,1,0,73,95,3,
		110,7,48,9,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( STATUSCONTROLLER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,19,0,48,12,0,102,48,2,0,176,
		13,0,12,0,112,0,112,1,73,36,20,0,48,2,
		0,48,14,0,102,112,0,95,1,112,1,73,36,22,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,15,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

