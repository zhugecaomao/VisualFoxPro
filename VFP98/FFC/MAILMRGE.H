*- MAILMRGE.H
*- #DEFINEs for MAILMRGE.VCX

#DEFINE L_DEBUG .F.

*- localize these
#DEFINE C_STARTWORD60_LOC	"�������� Microsoft Word..."
#DEFINE C_STARTWORD20_LOC	"�������� Microsoft Word 2.0..."
#DEFINE C_STARTWORD80_LOC	"�������� Microsoft Word..."
#DEFINE C_OPENDATA80_LOC	"���ڴ�����Դ..."
#DEFINE C_MMSAVEAS_LOC		"����ϲ�����Ϊ:"
#DEFINE C_DFLTNAME_LOC		"mrgdata.txt"
#DEFINE C_DFLTDBF_LOC		"mrgdata.dbf"

#DEFINE E_NOOPENWORD_LOC	"��ȡ Word OLE ����ʧ�ܡ�"
#DEFINE E_FILEERR_LOC		"д��ϲ�������ʱ������"
#DEFINE E_NOMSWLAUNCH_LOC	"�޷����� Microsoft Word��"
#DEFINE E_WRONGWORD_LOC		"�����е� Microsoft Word �汾����, �ʼ��ϲ�ȡ����"
#DEFINE E_NOWORDERR_LOC		"�˼������û�а�װ Micosoft Word for Windows @1 ��"
#DEFINE E_NOWORDMACERR_LOC	"�˼������û�а�װ Microsoft Word for the Macintosh 6.0��"
#DEFINE E_MSWCOMMFAIL_LOC	"��������������� MS Word �򿪶Ի�����������������..."
#DEFINE E_NODBC_LOC			"ODBC �������򻹲�֧�����ݿ��������ʹ�� FoxPro ���ɱ���"
#DEFINE E_DDEERR_LOC		"��һ�� DDE ����û�гɹ���DDE ��������Ϊ: @1��"

*- error messages for bad values in MailMerge class
#DEFINE E_BADWORDPROC_LOC	"�����ִ�������ֵ��Ч��"
#DEFINE E_BADEXDOC_LOC		"ָ�����ĵ������ڡ�"
#DEFINE E_BADMRGDATA_LOC	"δָ���ϲ����ݵ�Ŀ��λ�á�"
#DEFINE E_BADTEMPLATE_LOC	"Word ģ����Ч��"
#DEFINE E_NODATA_LOC		"δָ������Դ��"
#DEFINE E_NOFIELDS_LOC		"δָ�������ֶΡ�"

#DEFINE	E_ODBC1_LOC			"�޷���⵽ ODBC.INI �ļ������� ODBC �Ƿ�����ȷ��װ��"
#DEFINE	E_ODBC2_LOC			"�Ҳ��� FoxPro �ļ��� ODBC �������������Ƿ�����ȷ��װ��"
#DEFINE	E_ODBC3_LOC			"ODBC.INI �ļ�������Ч�� FoxPro �ļ������"
#DEFINE	E_ODBCDLL_LOC		"��ⲻ����ȷ��װ�� ODBC �ļ���"

#DEFINE E_NOOPENTBL_LOC		"�����Թ�����ʽ�����ݱ����ʼ��ϲ��ѱ�ȡ����"
#DEFINE E_NOREPLACETBL_LOC	"�޷��滻�ļ����ʼ��ϲ��ѱ�ȡ����"
#DEFINE E_NOAPPLESCRIPT_LOC	"AppleScript" + CHR(170) + "û�а�װ�� ������ Word��Ȼ���ֶ�����ʼ��ϲ���"

#DEFINE C_LOCATEDLL_LOC		"���޷���֤ ODBC �Ѱ�װ���Ƿ����Ѱ�װ������Դ����������У�"
#DEFINE C_NOVERIFYMSW_LOC	"���޷���֤ Microsoft Word �Ѱ�װ���Ƿ����Ѱ�װ������Դ����������У�"
#DEFINE C_COPYFOX2_LOC		"��û�� Visual FoxPro 3.0 ���� ODBC �������� "+							"�Ƿ�Ҫ��ѡ���ı�����Ϊ FoxPro 2.5 ���ͣ��Ա����"+							"��������һ���ϲ������ļ���"


#DEFINE C_COPYFOX3_LOC		"����ѡ����һ����ͼ��Ϊ����Դ�� " +"���븴����ͼ���������ɺϲ������ļ�������������"

#DEFINE C_COPYPROMPT_LOC	"�������Ƶ�:"
#DEFINE C_ERROR_SQL_LOC		"�����ɵ� SQL ���̫��������ѡһЩ�ֶΡ�"
#DEFINE C_LOCATE_LOC		"��λ"
#DEFINE	C_ODBCOLDVER_LOC	"FoxPro �ļ��� ODBC ����ԴΪ FoxPro 2.0 �档"+"�ʼ��ϲ��򵼿����޷���ȷ�����ڲ����ַ���ͨ���ֶΡ� "+							"������ʹ�� ODBC ������彫���ø�Ϊ FoxPro 2.6��"


#DEFINE	C_EXCLDBC1_LOC		"�޷���ѡ�������ݿ��кϲ����ݡ�'"
#DEFINE	C_EXCLDBC2_LOC		"'�����ѱ��򿪹����� ��ϣ���ʼ��ϲ��������Թ�����ʽ�������"


*- don't localize these

*- if these are changed, also change in MAILMRGE.H
*- supported word procs/merge types
#DEFINE		N_WORD60		1
#DEFINE		N_WORD20		3		&& not supported in 5.0
#DEFINE		N_COMMADELIM	2

*- new/old doc
#DEFINE		N_NEW_DOC		1
#DEFINE		N_EXISTING_DOC	2

*- template types
#DEFINE		N_FORMLETTER	1
#DEFINE		N_LABEL			2
#DEFINE		N_ENVELOPE		3
#DEFINE		N_CATALOG		4

*- used in startword
#DEFINE C_MSWORDMAC		"Microsoft Word"
#DEFINE C_MSWORDEXE		"winword.exe"
#DEFINE C_MSWORDWIN		"Winword"
#DEFINE C_MSWORDCREATOR	"MSWD"

#DEFINE C_WORD2				"2.0"
#DEFINE C_WORD6				"6.0"
#DEFINE C_WORD6_OR_LATER	"6.0"
#DEFINE C_WORD8				"8.0"

*- MSW 2.0 values
#DEFINE C_WIN_SECT2			"Microsoft Word 2.0"

*- MSW 6.0 values
#DEFINE C_WIN_SECT6			"Microsoft Word"
#DEFINE C_WIN_MSW6INI		"Winword6.INI"

#DEFINE C_WIN_DIR			"programdir"

*- entry in Mac FoxPro settings file
#DEFINE C_FOXPROINI_MAC		"Visual Foxpro Settings"
#DEFINE C_WORD6ID			"Word6Loc"
#DEFINE C_MAILMRG_SECT		"Mailmerge"
#DEFINE C_WORDSETTINGS		"Word Settings (6)"

*- DDE Errors
#DEFINE N_BADCHANNELERR		 6
#DEFINE N_TIMEOUTERR		 9
#DEFINE N_NOCLIENTERR		13

*- AppleScript related errors
#DEFINE N_RUNSCRIPTFAIL		1921	&& VFP error numbers
#DEFINE N_SCRIPTERROR		1917

#DEFINE L_GETFILE			.T.
#DEFINE L_DONTGETFILE		.F.

#DEFINE K_HIGHTIMEOUT	20000
#DEFINE K_DFLTTIMEOUT	 2000

*- MSW 2.0 values
#DEFINE WIN_SECT2	"Microsoft Word 2.0"
#DEFINE WIN_DIR		"programdir"

*- MSW 6.0 values
#DEFINE WIN_SECT6	"Microsoft Word"
#DEFINE WIN_MSW6INI	"Winword6.INI"
#DEFINE WIN_6OBJ	"word.basic"

*- MSW 8.0 values
#DEFINE WIN_8OBJ	"word.application.8"

*- ODBC Driver info
#DEFINE K_TAB			CHR(9)
#DEFINE C_CRLF			CHR(13) + CHR(10)
#DEFINE C_CR			CHR(13)

#DEFINE K_TOOLONG		150		&& max length of a SQL statement for DDE
#DEFINE K_TRANSFER		1024 * 20

#DEFINE K_LOCALVIEW		1
#DEFINE K_REMOTEVIEW	2
#DEFINE K_TABLE			3

#DEFINE	DBFTYPE_30		48

#DEFINE EXT_DBF			"DBF"
#DEFINE EXT_TXT			"TXT"

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


#DEFINE	REG_MSWDOC_KEY		"Word.Document"

#DEFINE	I_ENGLISH			1033			&& code for English

#DEFINE	FOXODBC_ANY			"FoxPro"

#DEFINE I_WDDIALOGMAILMERGEHELPER	680		&& Word code for Mailmerge Helper dialog

*- registry codes
#DEFINE	ERROR_SUCCESS		0
#DEFINE	ERROR_NOINIFILE		-108	&& no DLL file used to check ODBC
#DEFINE	ERROR_NOINIENTRY	-109	&& no entry found in INI file (section)
#DEFINE	ERROR_FAILINI		-110	&& no entry found in INI file

*- eof  MAILMRGE.H