*- MAILMRGE.H
*- #DEFINEs for MAILMRGE.VCX

#DEFINE L_DEBUG .F.

*- localize these
#DEFINE C_STARTWORD60_LOC	"正在启动 Microsoft Word..."
#DEFINE C_STARTWORD20_LOC	"正在启动 Microsoft Word 2.0..."
#DEFINE C_STARTWORD80_LOC	"正在启动 Microsoft Word..."
#DEFINE C_OPENDATA80_LOC	"正在打开数据源..."
#DEFINE C_MMSAVEAS_LOC		"保存合并数据为:"
#DEFINE C_DFLTNAME_LOC		"mrgdata.txt"
#DEFINE C_DFLTDBF_LOC		"mrgdata.dbf"

#DEFINE E_NOOPENWORD_LOC	"获取 Word OLE 对象失败。"
#DEFINE E_FILEERR_LOC		"写入合并的数据时出错。"
#DEFINE E_NOMSWLAUNCH_LOC	"无法启动 Microsoft Word。"
#DEFINE E_WRONGWORD_LOC		"所运行的 Microsoft Word 版本不对, 邮件合并取消。"
#DEFINE E_NOWORDERR_LOC		"此计算机上没有安装 Micosoft Word for Windows @1 。"
#DEFINE E_NOWORDMACERR_LOC	"此计算机上没有安装 Microsoft Word for the Macintosh 6.0。"
#DEFINE E_MSWCOMMFAIL_LOC	"不能完成任务。请检查 MS Word 打开对话框的情况或其它问题..."
#DEFINE E_NODBC_LOC			"ODBC 驱动程序还不支持数据库表，必须使用 FoxPro 自由表。"
#DEFINE E_DDEERR_LOC		"上一次 DDE 操作没有成功。DDE 出错代码为: @1。"

*- error messages for bad values in MailMerge class
#DEFINE E_BADWORDPROC_LOC	"用于字处理器的值无效。"
#DEFINE E_BADEXDOC_LOC		"指定的文档不存在。"
#DEFINE E_BADMRGDATA_LOC	"未指定合并数据的目标位置。"
#DEFINE E_BADTEMPLATE_LOC	"Word 模板无效。"
#DEFINE E_NODATA_LOC		"未指定数据源。"
#DEFINE E_NOFIELDS_LOC		"未指定数据字段。"

#DEFINE	E_ODBC1_LOC			"无法检测到 ODBC.INI 文件。请检查 ODBC 是否已正确安装。"
#DEFINE	E_ODBC2_LOC			"找不到 FoxPro 文件的 ODBC 驱动程序。请检查是否已正确安装。"
#DEFINE	E_ODBC3_LOC			"ODBC.INI 文件中有无效的 FoxPro 文件输入项。"
#DEFINE	E_ODBCDLL_LOC		"检测不到正确安装的 ODBC 文件。"

#DEFINE E_NOOPENTBL_LOC		"不能以共享方式打开数据表。邮件合并已被取消。"
#DEFINE E_NOREPLACETBL_LOC	"无法替换文件。邮件合并已被取消。"
#DEFINE E_NOAPPLESCRIPT_LOC	"AppleScript" + CHR(170) + "没有安装。 请启动 Word，然后手动完成邮件合并。"

#DEFINE C_LOCATEDLL_LOC		"向导无法验证 ODBC 已安装。是否按照已安装的情况对待并继续进行？"
#DEFINE C_NOVERIFYMSW_LOC	"向导无法验证 Microsoft Word 已安装。是否按照已安装的情况对待并继续进行？"
#DEFINE C_COPYFOX2_LOC		"您没有 Visual FoxPro 3.0 表的 ODBC 驱动程序。 "+							"是否要将选定的表复制为 FoxPro 2.5 类型，以便可以"+							"用它生成一个合并数据文件？"


#DEFINE C_COPYFOX3_LOC		"您已选定了一个视图作为数据源。 " +"必须复制视图，才能生成合并数据文件。继续进行吗？"

#DEFINE C_COPYPROMPT_LOC	"将表复制到:"
#DEFINE C_ERROR_SQL_LOC		"所生成的 SQL 语句太长。请少选一些字段。"
#DEFINE C_LOCATE_LOC		"定位"
#DEFINE	C_ODBCOLDVER_LOC	"FoxPro 文件的 ODBC 数据源为 FoxPro 2.0 版。"+"邮件合并向导可能无法正确处理内部的字符或通用字段。 "+							"您可以使用 ODBC 控制面板将设置改为 FoxPro 2.6。"


#DEFINE	C_EXCLDBC1_LOC		"无法从选定的数据库中合并数据。'"
#DEFINE	C_EXCLDBC2_LOC		"'除非已被打开共享。 您希望邮件合并向导重新以共享方式将其打开吗？"


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