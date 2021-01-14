*- Automate.h
*-
*- #DEFINEs for the AUTOMATE.VCX class

#DEFINE L_DEBUG				.F.

#DEFINE E_UNSUPPORTEDOS_LOC	"当前的操作系统未使用此类。"
#DEFINE	E_ODBC1_LOC			"无法检测到 ODBC.INI 文件。请检查 ODBC 是否已正确安装。"
#DEFINE	E_ODBC2_LOC			"找不到 FoxPro 文件的 ODBC 驱动程序。请检查是否已正确安装。"
#DEFINE	E_ODBC3_LOC			"ODBC.INI 文件中有无效的 FoxPro 文件输入项。"
#DEFINE	E_ODBCDLL_LOC		"检测不到正确安装的 ODBC 文件。"
#DEFINE E_NOREGISTRY_LOC	"无法加载 REGISTRY 过程文件。请确认其是否在当前路径下。"
#DEFINE C_FILEUSE2_LOC		"文件正在使用。请选定另一个。"
#DEFINE E_NODATA_LOC		"未指定数据源。"
#DEFINE E_NOFIELDS_LOC		"未指定数据字段。"
#DEFINE E_NOALIAS_LOC		"未找到指定的别名。"
#DEFINE C_ODBCOLDVER_LOC 	"您已安装了旧版本的 FoxPro ODBC 驱动程序。"

******************************************************************************
* Used by GetOS and other methods
******************************************************************************
* Operating System codes
#DEFINE	OS_W32S				1
#DEFINE	OS_NT				2
#DEFINE	OS_WIN95			3
#DEFINE	OS_MAC				4
#DEFINE	OS_DOS				5
#DEFINE	OS_UNIX				6

*- ODBC Driver info
#DEFINE ODBC_DRVR		"Driver"
#DEFINE ODBC_DRVR32		"Driver32"

#DEFINE		ODBC_FOX_DSN		"FoxPro Files"
#DEFINE		ODBC_FOX_FIL		"FoxPro 2.6"
#DEFINE 	FOXODBC_25			"FoxPro Files (*.dbf)"
#DEFINE 	FOXODBC_26			"Microsoft FoxPro Driver (*.dbf)"
#DEFINE 	FOXODBC_26FIX		"Microsoft FoxPro 2.6 Driver (*.dbf)"
#DEFINE 	FOXODBC_30			"Visual FoxPro"
#DEFINE 	FOXODBC_30a			"Visual FoxPro Database"
#DEFINE 	FOXODBC_30b			"Visual FoxPro Tables"
#DEFINE		C_DRIVEID			"DriverID"
#DEFINE		FOX_DRIVEID			24
#DEFINE 	ODBC_DATA_KEY		"Software\ODBC\ODBC.INI\"	&& ODBC Registry key
#DEFINE		C_FIL				"FIL"
#DEFINE		C_FOX2				"FoxPro 2.0"
#DEFINE 	HKEY_CLASSES_ROOT   -2147483648  && BITSET(0,31)
#DEFINE 	HKEY_CURRENT_USER   -2147483647  && BITSET(0,31)+1
#DEFINE 	HKEY_LOCAL_MACHINE  -2147483646  && (( HKEY ) 0x80000002 )

#DEFINE		FOXODBC_ANY			"FoxPro"

#DEFINE	ODBC_FILE 			"ODBC.INI"
#DEFINE	ODBC_FILE_68K 		"ODBC Preferences"
#DEFINE	ODBC_FILE_PPC 		"ODBC Preferences PPC"
#DEFINE	ODBC_SOURCE			"ODBC Data Sources"			&& Localization ????
#DEFINE	ODBC_32SOURCE		"ODBC 32 bit Data Sources"	&& Localization ????

*- registry codes
#DEFINE 	ERROR_SUCCESS		0
#DEFINE		ERROR_NOINIFILE		-108	&& no DLL file used to check ODBC
#DEFINE		ERROR_NOINIENTRY	-109	&& no entry found in INI file (section)
#DEFINE		ERROR_FAILINI		-110	&& no entry found in INI file
