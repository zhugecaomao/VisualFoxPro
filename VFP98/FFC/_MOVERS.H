
#define MESSAGE_LOC			"Microsoft Visual FoxPro"
#define ERRORTITLE_LOC		"Microsoft Visual FoxPro"
#define ERRORMESSAGE_LOC "错误 #" + alltrim(str(m.nError)) + " 在 " + m.cMethod +	" (" + alltrim(str(m.nLine)) + "): " + m.cMessage



#define MB_ICONEXCLAMATION		48
#define MB_ABORTRETRYIGNORE		2
#define MB_OK					0
#DEFINE MB_YESNO                4       && Yes and No buttons
#DEFINE IDYES           		6       && Yes button pressed

* These are the countries and regions to enable DBCS:  Japan, Korea, PRC, Taiwan
#DEFINE DBCS_LOC "81 82 86 88"

#DEFINE NUM_AFIELDS  16   			&& number of columns in AFIELDS array
#DEFINE DT_MEMO  	"M"
#DEFINE DT_GENERAL  "G"

#DEFINE TAGDELIM	 " *"

#DEFINE BMP_LOCAL		"dblview.bmp"
#DEFINE BMP_REMOTE		"dbrview.bmp"
#DEFINE BMP_TABLE		"dbtable.bmp"

#DEFINE C_FREETABLE_LOC		"自由表"
#DEFINE C_MAXFIELDS_LOC 	"作为排序依据的字段的最大数目是"
#DEFINE C_NOTAG_LOC 		"无法使索引标识与字段相结合。"
#DEFINE C_READONLY_LOC		"文件为只读文件，不允许该应用程序使用。请选择其他文件。"
#DEFINE E_BADDBCTABLE_LOC	"选定表未能与其数据库建立有效的内部链接。 "+							"可以使用 VALIDATE DATABASE RECOVER 命令进行修复。"

#DEFINE C_TPROMPT_LOC		"选择文件:"
#DEFINE C_READ2_LOC			"文件正由其他用户独占使用。"
#DEFINE C_READ3_LOC			"文件已在使用。请选择其他文件。"
#DEFINE C_READ4_LOC			"DBF 是 DBC 的一部分。请从 DBC 容器中选择表。"
