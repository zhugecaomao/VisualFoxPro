* _UTILITY.H

***********************************
* Constants for classes
#DEFINE MB_ICONEXCLAMATION		48
#DEFINE MB_QUESTIONYESNO	36
#DEFINE MB_ISYES			6

***********************************
* strings for _filer classes

#DEFINE ERR_NOCLASS_LOC	"无法实例化 Filer COM 对象。请检查是否已正确注册。"
#DEFINE C_FILERCLASS	"filer.fileutil"
#DEFINE ERR_NOFILERDLL_LOC	"必须具有 FILER.DLL 才能使用该工具。"
#DEFINE MSG_REGFILERDLL_LOC	"未注册 Filer COM 对象，希望现在注册吗？"
#DEFINE C_FILERDLL	"FILER.DLL"
#DEFINE C_FILERPATH	"FILER\"


***********************************
* strings for _fileversion classes

#DEFINE CRLF	CHR(13)+CHR(10)
#DEFINE FILEVER_COMMENT_LOC 		"备注: "
#DEFINE FILEVER_COMPANY_LOC 		"公司名称: "
#DEFINE FILEVER_FILEDESC_LOC 		"文件说明: "
#DEFINE FILEVER_FILEVER_LOC 		"文件版本: "
#DEFINE FILEVER_INTERNAL_LOC		"内部名称: "
#DEFINE FILEVER_COPYRIGHT_LOC	 	"版权: "
#DEFINE FILEVER_TRADMARK_LOC		"商标: "
#DEFINE FILEVER_FILENAME_LOC	 	"原始文件名: "
#DEFINE FILEVER_PRIVATE_LOC 		"个人连编: "
#DEFINE FILEVER_PRODUCTNAME_LOC		"产品名称: "
#DEFINE FILEVER_PRODUCTVER_LOC	 	"产品版本: "
#DEFINE FILEVER_SPECIAL_LOC			"特殊连编: "
#DEFINE FILEVER_LANGUAGE_LOC		"语言: "
#DEFINE FILEVER_NOVERSION_LOC		"未找到版本信息。"
#DEFINE MSG_FILEVERSION_LOC			"版本信息: "

***********************************
* strings for _graphbyrecord classes

#DEFINE C_NOALIAS_LOC	"必须有一个选定的临时表。"
#DEFINE C_RECDESC_LOC	"记录:"
#DEFINE ERR_NOGRAPH_LOC	"无法生成图表。请试一下更改 Chart Type 或 Plot By setting。"

#DEFINE C_AREA_GRAPH		"Area"
#DEFINE C_AREA3D_GRAPH		"3D Area"
#DEFINE C_BAR_GRAPH			"Bar"
#DEFINE C_BAR3D_GRAPH		"3D Bar"
#DEFINE C_COLUMN_GRAPH		"Column"
#DEFINE C_COLUMN3D_GRAPH	"3D Column"
#DEFINE C_PIE_GRAPH			"Pie"
#DEFINE C_PIE3D_GRAPH		"3D Pie"
#DEFINE C_LINE_GRAPH		"Line"
#DEFINE C_LINE3D_GRAPH		"3D Line"
#DEFINE I_AREA_GRAPH		76
#DEFINE I_AREA3D_GRAPH		78
#DEFINE I_BAR_GRAPH			57
#DEFINE I_BAR3D_GRAPH		60
#DEFINE I_COLUMN_GRAPH		51
#DEFINE I_COLUMN3D_GRAPH	54
#DEFINE I_PIE_GRAPH			5
#DEFINE I_PIE3D_GRAPH		-4102
#DEFINE I_LINE_GRAPH		4
#DEFINE I_LINE3D_GRAPH		-4101



***********************************
* strings for _typelib classes

#DEFINE TYPELIBSPACING			SPACE(0)
#DEFINE TYPEINFOSPACING			SPACE(2)
#DEFINE FUNCDESCSPACING			SPACE(4)
#DEFINE FUNCDESCSPACING2		SPACE(6)

#DEFINE GETFILE1_LOC			"类型库: TLB,DLL,EXE"
#DEFINE GETFILE2_LOC			"Typelib:"

#DEFINE TLIB1_LOC			 	"类型库 = "
#DEFINE TLIB2_LOC			 	"TypeLib Handle = "
#DEFINE TLIB3_LOC			 	"TypeInfo Count = "
#DEFINE TDOC1_LOC			 	"名称 = "
#DEFINE TDOC2_LOC				"说明 = "
#DEFINE TDOC3_LOC				"帮助文件 = "
#DEFINE TDOC4_LOC				"Friendly Name = "

#DEFINE TINFO1_LOC			 	"TypeInfo Index = "
#DEFINE TINFO2_LOC		 		"TypeInfo GUID = "
#DEFINE TFUNC1_LOC				"Member Name = "
#DEFINE TFUNC2_LOC				"Member ID = "
#DEFINE TFUNC3_LOC				"Function Kind = "
#DEFINE TFUNC4_LOC				"Invoke Kind = "
#DEFINE TFUNC5_LOC				"Call Conv = "
#DEFINE TFUNC6_LOC				"返回类型 = "
#DEFINE TFUNC7_LOC				"参数:"

#DEFINE FUNCKIND_LOC			"Virtual    PureVirtualNonVirtual Static     Dispatch   "
#DEFINE INVOKEKIND_LOC			"Method        PropertyGet   PropertyPut   PropertyPutRef"
#DEFINE CALLCONV_LOC			"CDECL    Pascal   MacPascalSTDCall  Reserved Syscall  MPWCDECL MPWPascal"
