* _DATA.H

***********************************
* Constants for classes
#DEFINE MB_ICONEXCLAMATION		48
#DEFINE MB_QUESTIONYESNO	36
#DEFINE MB_ISYES			6

***********************************
* strings for _cbodistinctvalues classes

#DEFINE NO_TABLE_LOC "������ controlSource ������ָ�����ı�������ʽΪ��alias.column����"

***********************************
* strings for _cbolookup classes

#DEFINE NO_LOOKUP_TABLE_LOC "������ lookup_table ������ָ��Ҫ�����ı� (combo box " + THIS.name + ")��"
#DEFINE NO_DISPLAY_COLUMN_LOC "������ display_column ������ָ��Ҫ��ʾ���� (combo box " + THIS.name + ")��"
#DEFINE NO_RETURN_COLUMN_LOC "������ return_column ������ָ����ʾ����ֵ���� (combo box " + THIS.name + ")��"

***********************************
* strings for _conflicts classes

#DEFINE CS_NOALIAS_LOC					"δָ����ʱ����"
#DEFINE CS_ROWCONFLICT_LOC				"������ͻ���к�:  "
#DEFINE CS_NOCONFLICTS1_LOC				"δ���ֳ�ͻ��"
#DEFINE CS_NOCONFLICTS_LOC				"δ����������ͻ��"
#DEFINE CS_NOBUFFER_LOC					"�������ݻ���������ͻ��"
#DEFINE WAIT_REVERTFAIL_LOC		"�ָ�ʧ��"
#DEFINE WAIT_REVERT1_LOC		"1 ���ѻָ�"
#DEFINE	WAIT_UPDATEOK_LOC		"�ѳɹ�����"
#DEFINE	WAIT_UPDATEFAIL1_LOC	"����ʧ�ܣ����ؼ����Ѹ���"

***********************************
* strings for _execsp classes

#DEFINE BADPARMS_LOC	"��������ഫ����������������"

***********************************
* strings for _offline classes
#DEFINE C_NODATABASE_LOC	"δָ�����ݿ����ͼ��"
#DEFINE C_NOVIEWS_LOC		"δָ��������ͼ��"
#DEFINE C_OKONLINE_LOC		"�ѳɹ��ؽ���ͼ��Ϊ������ͼ��"
#DEFINE C_RECORDCONLICT_LOC "�ڸ�����ͼʱ��������һ����¼��ͻ����ͼ��Ϊ:"
#DEFINE C_FAILONLINE_LOC 	"�޷��õ�������ͼ: "
#DEFINE C_NOOPEN_LOC 		"�޷���������ͼ: "
#DEFINE C_FAILOFFLINE_LOC	"�޷�ʹ������ͼ����: "
#DEFINE C_OKOFFLINE_LOC		"�ѳɹ���ʹ��ͼ���롣"

***********************************
* strings for _datachecker class

#define NOBUFF1_LOC '��ֹ���ݻ��塣'
	#define WINDMSG_LOC "���� conflictmanager.handlerecord ��ֵ��Ч"
* Declare constants & variables
#define CR_LOC CHR(13)
#define SAVE_LOC "�Ƿ�ϣ�������ĸ��Ľ����д��ǰֵ��" + CR_LOC + "ѡȡ��ȡ�������Իָ�ԭʼֵ��"
#define CONFLICT_LOC "���ݳ�ͻ"
#define VERIFY_LOC "�������"
#define ORG_LOC "ԭʼֵ: "
#define CUR_LOC "��ǰֵ: "
#define CHG_LOC "����: "
#define MEMO_LOC " �Ǳ�ע�ֶΡ�"
#define FIELD_LOC "�ֶ�: "
#define RECORD_LOC "��¼��: "
#define VALCHG1_LOC "ֵ�ѱ������û����Ĺ���"
#define VALCHG2_LOC "ֵ�ѱ����Ĺ���"
#define SAVECHG_LOC '�Ƿ�ϣ��������ģ�'
#define SAVECHG2_LOC '�������'

***********************************
* strings for _datanavbtns class
#define NUM_LOC "�����:"
#define PROG_LOC "����: "
#define MSG_LOC "������Ϣ: "
#define SELTABLE_LOC "ѡ���:"
#define OPEN_LOC "��"
#define SAVE1_LOC "�Ƿ�ϣ�����κη�ʽ������ģ�"
#define CONFLICT_LOC "�޷�������ݳ�ͻ��"