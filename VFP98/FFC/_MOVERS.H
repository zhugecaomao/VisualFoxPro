
#define MESSAGE_LOC			"Microsoft Visual FoxPro"
#define ERRORTITLE_LOC		"Microsoft Visual FoxPro"
#define ERRORMESSAGE_LOC "���� #" + alltrim(str(m.nError)) + " �� " + m.cMethod +	" (" + alltrim(str(m.nLine)) + "): " + m.cMessage



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

#DEFINE C_FREETABLE_LOC		"���ɱ�"
#DEFINE C_MAXFIELDS_LOC 	"��Ϊ�������ݵ��ֶε������Ŀ��"
#DEFINE C_NOTAG_LOC 		"�޷�ʹ������ʶ���ֶ����ϡ�"
#DEFINE C_READONLY_LOC		"�ļ�Ϊֻ���ļ�����������Ӧ�ó���ʹ�á���ѡ�������ļ���"
#DEFINE E_BADDBCTABLE_LOC	"ѡ����δ���������ݿ⽨����Ч���ڲ����ӡ� "+							"����ʹ�� VALIDATE DATABASE RECOVER ��������޸���"

#DEFINE C_TPROMPT_LOC		"ѡ���ļ�:"
#DEFINE C_READ2_LOC			"�ļ����������û���ռʹ�á�"
#DEFINE C_READ3_LOC			"�ļ�����ʹ�á���ѡ�������ļ���"
#DEFINE C_READ4_LOC			"DBF �� DBC ��һ���֡���� DBC ������ѡ�����"