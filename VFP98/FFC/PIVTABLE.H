*- PIVTABLE.H
*- #DEFINEs for PIVTABLE.VCX

#DEFINE L_DEBUG .F.

*- localize these
#DEFINE ALERTTITLE_LOC			"Microsoft Visual FoxPro 向导"

#DEFINE		C_EXCLDBC1_LOC		"Excel 无法从选定的数据库中创建数据透视表，'"
#DEFINE		C_EXCLDBC2_LOC		"'除非它已被以共享方式打开。你想让数据透视表向导为你以共享方式将其重新打开吗？"
#DEFINE 	C_STARTXL_LOC		"正在启动 Microsoft Excel ..."
#DEFINE 	C_LARGEPIVOT_LOC	"所选定的数据透视表结果集可能非常大。 "+								"要继续吗？"

#DEFINE 	C_NORECORDS_LOC		"选定表没有包含任何记录, 不能生成 Excel 数据透视表。"
#DEFINE		C_LONGFNAME_LOC		"您所使用的以前版本的 FoxPro ODBC 数据源不支持带有长的或非法的 DOS 路径以及文件名的 FoxPro 表。"+"建议您安装 VFP ODBC 驱动程序，防止将来再出现这些信息。"+								"假如你选择继续，您必须将选定的表重命名或复制为具有标准 DOS 文件名的文件. 现在复制此文件吗？"


#DEFINE 	C_COPYPROMPT_LOC	"将表复制到:"
#DEFINE		C_WAITMESS_LOC		"正在生成数据透视表，请耐心等待..."

#DEFINE 	E_NOFORM_LOC		"未指定表单文件。无法继续操作。"
#DEFINE		E_BADMSQUERY_LOC	"没有正确安装生成 Excel 数据透视表时需要的 Microsoft Query。"
#DEFINE		E_FAILXL_LOC		"获取 Excel OLE 对象失败."
#DEFINE 	E_NOREG_LOC			"Microsoft Excel 没有在 Windows 的注册表中为与 OLE 一起使用正确注册。"
#DEFINE		E_OLDXLVER_LOC		"自动服务工具不支持您的 Microsoft Excel 版本。您必须安装 5.0 或更高版本。"
#DEFINE 	E_OLEERROR_LOC		"OLE 自动服务出错。不能完成 Excel 数据透视表。"

*- error checks for the automation tool
#DEFINE		E_NEEDALIAS_LOC		"透视表工具需要填写 cAlias 字段。"
#DEFINE		E_NEEDTABLE_LOC		"透视表工具需要填写 cDBCTable 字段。"
#DEFINE		E_NEEDDBC_LOC		"透视表工具需要填写 cDBCName 字段。"
#DEFINE		E_NEEDROW_LOC		"透视表工具需要填写 cPivFldRow 字段。"
#DEFINE		E_NEEDCOL_LOC		"透视表工具需要填写 cPivFldCol 字段。"
#DEFINE		E_NEEDDATA_LOC		"透视表工具需要填写 cPivFldData 字段。"
#DEFINE		E_NEEDFIELDS_LOC	"透视表工具需要填写 aAutoFields 字段。"
#DEFINE		E_NEEDFLDLIST_LOC	"透视表工具需要填写 aFldList 字段。"

*- localize?
#DEFINE		OLE_XLAPP			"excel.application"

*- don't localize these		
#DEFINE		C_MSQRY32			"MSQRY32.EXE"
#DEFINE		C_PATH				"Path"
#DEFINE 	QUERY_ROOT			"Software\Microsoft\Shared Tools\MSQuery"

#DEFINE 	XL_CLASS			"Excel.Sheet"
#DEFINE 	XLCOUNT				-4113						&& Excel count function constant

#DEFINE MAX_RECORDS		500
#DEFINE MAX_PIVROWS		300
#DEFINE MAX_PIVCOLS		100
#DEFINE MAX_PIVPAGES	100
#DEFINE MAX_PIVCELLS	10000

#DEFINE		OS_W32S				1
#DEFINE		OS_NT				2
#DEFINE		OS_WIN95			3

#DEFINE 	HKEY_CLASSES_ROOT   -2147483648  && BITSET(0,31)
#DEFINE 	HKEY_CURRENT_USER   -2147483647  && BITSET(0,31)+1
#DEFINE 	HKEY_LOCAL_MACHINE  -2147483646  && (( HKEY ) 0x80000002 )

#DEFINE 	ERROR_SUCCESS		0
