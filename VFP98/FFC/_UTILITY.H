* _UTILITY.H

***********************************
* Constants for classes
#DEFINE MB_ICONEXCLAMATION		48
#DEFINE MB_QUESTIONYESNO	36
#DEFINE MB_ISYES			6

***********************************
* strings for _filer classes

#DEFINE ERR_NOCLASS_LOC	"�޷�ʵ���� Filer COM ���������Ƿ�����ȷע�ᡣ"
#DEFINE C_FILERCLASS	"filer.fileutil"
#DEFINE ERR_NOFILERDLL_LOC	"������� FILER.DLL ����ʹ�øù��ߡ�"
#DEFINE MSG_REGFILERDLL_LOC	"δע�� Filer COM ����ϣ������ע����"
#DEFINE C_FILERDLL	"FILER.DLL"
#DEFINE C_FILERPATH	"FILER\"


***********************************
* strings for _fileversion classes

#DEFINE CRLF	CHR(13)+CHR(10)
#DEFINE FILEVER_COMMENT_LOC 		"��ע: "
#DEFINE FILEVER_COMPANY_LOC 		"��˾����: "
#DEFINE FILEVER_FILEDESC_LOC 		"�ļ�˵��: "
#DEFINE FILEVER_FILEVER_LOC 		"�ļ��汾: "
#DEFINE FILEVER_INTERNAL_LOC		"�ڲ�����: "
#DEFINE FILEVER_COPYRIGHT_LOC	 	"��Ȩ: "
#DEFINE FILEVER_TRADMARK_LOC		"�̱�: "
#DEFINE FILEVER_FILENAME_LOC	 	"ԭʼ�ļ���: "
#DEFINE FILEVER_PRIVATE_LOC 		"��������: "
#DEFINE FILEVER_PRODUCTNAME_LOC		"��Ʒ����: "
#DEFINE FILEVER_PRODUCTVER_LOC	 	"��Ʒ�汾: "
#DEFINE FILEVER_SPECIAL_LOC			"��������: "
#DEFINE FILEVER_LANGUAGE_LOC		"����: "
#DEFINE FILEVER_NOVERSION_LOC		"δ�ҵ��汾��Ϣ��"
#DEFINE MSG_FILEVERSION_LOC			"�汾��Ϣ: "

***********************************
* strings for _graphbyrecord classes

#DEFINE C_NOALIAS_LOC	"������һ��ѡ������ʱ����"
#DEFINE C_RECDESC_LOC	"��¼:"
#DEFINE ERR_NOGRAPH_LOC	"�޷�����ͼ��������һ�¸��� Chart Type �� Plot By setting��"

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

#DEFINE GETFILE1_LOC			"���Ϳ�: TLB,DLL,EXE"
#DEFINE GETFILE2_LOC			"Typelib:"

#DEFINE TLIB1_LOC			 	"���Ϳ� = "
#DEFINE TLIB2_LOC			 	"TypeLib Handle = "
#DEFINE TLIB3_LOC			 	"TypeInfo Count = "
#DEFINE TDOC1_LOC			 	"���� = "
#DEFINE TDOC2_LOC				"˵�� = "
#DEFINE TDOC3_LOC				"�����ļ� = "
#DEFINE TDOC4_LOC				"Friendly Name = "

#DEFINE TINFO1_LOC			 	"TypeInfo Index = "
#DEFINE TINFO2_LOC		 		"TypeInfo GUID = "
#DEFINE TFUNC1_LOC				"Member Name = "
#DEFINE TFUNC2_LOC				"Member ID = "
#DEFINE TFUNC3_LOC				"Function Kind = "
#DEFINE TFUNC4_LOC				"Invoke Kind = "
#DEFINE TFUNC5_LOC				"Call Conv = "
#DEFINE TFUNC6_LOC				"�������� = "
#DEFINE TFUNC7_LOC				"����:"

#DEFINE FUNCKIND_LOC			"Virtual    PureVirtualNonVirtual Static     Dispatch   "
#DEFINE INVOKEKIND_LOC			"Method        PropertyGet   PropertyPut   PropertyPutRef"
#DEFINE CALLCONV_LOC			"CDECL    Pascal   MacPascalSTDCall  Reserved Syscall  MPWCDECL MPWPascal"