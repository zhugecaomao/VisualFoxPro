*
* Define Global Constants
*
#DEFINE debugversion     .T.    && enables asserts.  Should usually be .T.

*- used in Windows VFP 3.0 conversion dialog
#DEFINE C_MSGBOXTITLE_LOC	"转换器"
#DEFINE C_ASK1_LOC			"查询每一个文件;不查询 "		&& new radio to prevent showing dialog during conversion
#DEFINE C_ASK2_LOC			" 文件;不查询任何文件"		&& new radio to prevent showing dialog during conversion

#DEFINE C_OVERWRITE1_LOC		"输送所有对象将改写文件中 "
* Filetype constants for FoxPro 2.0 and FoxPro 2.5/2.6 formats
#DEFINE C_OVERWRITE2_LOC		" 已有的对象。"

#DEFINE MB_OKCANCEL             1       && OK and Cancel buttons
#DEFINE IDCANCEL				2       && Cancel button pressed

* Filetype constants for FoxPro 2.0 and FoxPro 2.5/2.6 formats
#DEFINE c_20pjxtype        1
#DEFINE c_25scxtype       12
#DEFINE c_20scxtype        2
#DEFINE c_25frxtype       13
#DEFINE c_20frxtype        3
#DEFINE c_25lbxtype       14
#DEFINE c_20lbxtype        4

*- indexes into gAShowMe array, controls display of transporter dialog for various file types
#DEFINE N_MAXTRANFILETYPES	3				&& number of file types that transporter can handle (All,PJX, SCX, FRX)
#DEFINE N_TRANFILE_PJX	1
#DEFINE N_TRANFILE_SCX	2
#DEFINE N_TRANFILE_FRX	3

* FoxPro 1.02 and FoxBASE+ formats.  Note that the FoxBASE+ types are never
* actually passed in m.tp_filetype.  They are inferred in GetOldReportType and
* GetOldLabelTypefrom the ID byte in the report/label files.  The suffix tells
* us how the file was called, by REPORT FORM ... or by MODIFY REPORT ...
#DEFINE c_frx102repo      23
#DEFINE c_frx102modi      33
#DEFINE c_fbprptrepo      43
#DEFINE c_fbprptmodi      53
#DEFINE c_lbx102repo      24
#DEFINE c_lbx102modi      34
#DEFINE c_fbplblrepo      44
#DEFINE c_fbplblmodi      54
#DEFINE c_db4type		  70

* Definitions for Objtype fields in screens/reports/labels
#DEFINE c_otheader         1
#DEFINE c_otworkar         2
#DEFINE c_otindex          3
#DEFINE c_otrel            4
#DEFINE c_ottext           5
#DEFINE c_otline           6
#DEFINE c_otbox            7
#DEFINE c_otrepfld         8
#DEFINE c_otband           9
#DEFINE c_otgroup         10
#DEFINE c_otlist          11
#DEFINE c_ottxtbut        12
#DEFINE c_otradbut        13
#DEFINE c_otchkbox        14
#DEFINE c_otfield         15
#DEFINE c_otpopup         16
#DEFINE c_otpicture       17
#DEFINE c_otrepvar        18
#DEFINE c_ot20lbxobj      19
#DEFINE c_otinvbut        20
#DEFINE c_otpdset         21
#DEFINE c_otspinner       22
#DEFINE c_otfontdata      23

#DEFINE C_OBJTYPELIST c_otlist,c_ottxtbut,c_otbox,c_otradbut,c_otchkbox,c_otfield, c_otpopup,c_otinvbut,c_otspinner,c_otpicture,c_otline,c_otrepfld,c_otrepvar,c_ottext

* Window types
#DEFINE c_user             1
#DEFINE c_system           2
#DEFINE c_dialog           3
#DEFINE c_alert            4

* ObjCode definitions
#DEFINE c_sgsay            0
#DEFINE c_sgget            1
#DEFINE c_sgedit           2
#DEFINE c_sgfrom           3
#DEFINE c_sgbox            4
#DEFINE c_sgboxd           5
#DEFINE c_sgboxp           6
#DEFINE c_sgboxc           7

#DEFINE c_lnvertical       0
#DEFINE c_lnhorizontal     1

#DEFINE c_ocboxgrp         1

* Attempt to preserve colors of text, lines and boxes when transporting to DOS?
#DEFINE c_maptextcolor     .T.

* Field counts
#DEFINE c_20scxfld        57
#DEFINE c_scxfld          79
#DEFINE c_20frxfld        36
#DEFINE c_frxfld          74
#DEFINE c_frx30fld        75		&& field count for 3.0 FRX file (11/1/95 jd)
#DEFINE c_ot20label       30
#DEFINE c_20lbxfld        17
#DEFINE c_20pjxfld        33
#DEFINE c_pjxfld          31

* Strings for product names
#DEFINE c_foxwin_loc   "FoxPro for Windows"
#DEFINE c_foxmac_loc   "FoxPro for Macintosh"
#DEFINE c_foxdos_loc   "FoxPro for MS-DOS/UNIX"
#DEFINE c_winname  "WINDOWS"
#DEFINE c_macname  "MAC"
#DEFINE c_dosname  "DOS"
#DEFINE c_unixname "DOS"
#DEFINE c_dosnum    1
#DEFINE c_winnum    2
#DEFINE c_macnum    3
#DEFINE c_unixnum   4

* Metrics for various objects, report bands, etc.
#DEFINE c_radhght      1.308
#DEFINE c_chkhght      1.308
#DEFINE c_listht       1.000
#DEFINE c_adjfld       0.125
#DEFINE c_adjlist      0.125
#DEFINE c_adjtbtn      0.769
#DEFINE c_adjrbtn      0.308
#DEFINE c_vchkbox      0.154
#DEFINE c_vradbtn      0.154
#DEFINE c_vlist        0.500
#DEFINE c_hpopup       1.000
#DEFINE c_adjbox       0.500
#DEFINE c_chkpixel        12

#DEFINE c_charrptheight   66
#DEFINE c_charrptwidth    80
#DEFINE c_linesperinch    (66/11)
#DEFINE c_charsperinch    13.71

#DEFINE c_pathsep ":"   && path separator character

#DEFINE c_mapfonts 3    && number of specially mapped fonts

* Version codes, put into Objcode fields in the header record
#DEFINE c_25scx           63
#DEFINE c_25frx           53

* Major file types
#DEFINE c_report           0
#DEFINE c_screen           1
#DEFINE c_label            2
#DEFINE c_project          3

* Error codes
#DEFINE c_error1   "Minor"
#DEFINE c_error2   "Serious"
#DEFINE c_error3   "Fatal"

* Return values
#DEFINE c_yes              1
#DEFINE c_no               0
#DEFINE c_cancel          -1

* Codepage translation.
#DEFINE c_cptrans       .T.    && do special CP translation for FoxBASE+ and FoxPro 1.02?
* The following four contants may need to be localized.
#DEFINE c_doscp          437   && default DOS code page
#DEFINE c_wincp         1252   && default Windows code page
#DEFINE c_maccp        10000
#DEFINE c_unixcp           0

* bands[] array indexes
#DEFINE c_tobandvpos       1
#DEFINE c_tobandheight     2
#DEFINE c_fmbandvpos       3
#DEFINE c_fmbandheight     4

* Frequently used strings.  Make them #DEFINES to simplify localization.
#DEFINE c_converting   "Converting"
#DEFINE c_transporting "Transporting"

#DEFINE C_2DCONTROLS_LOC "2 维控件"

* Defines used in converting FoxBASE+ reports
#DEFINE maxliterals   55
#DEFINE litpoolsize   1452
#DEFINE maxrepflds   24
#DEFINE h_page   1
#DEFINE h_break 3
#DEFINE l_item   4
#DEFINE f_break 5
#DEFINE f_page   7
#DEFINE f_rpt   8

#define c_space 40
#DEFINE dos_code  1
#DEFINE win_code  2
#DEFINE mac_code  3
#DEFINE unix_code 4
#DEFINE c_2dmark '2'
#DEFINE c_3dmark '3'

** New (8/22/95) added for Localization
#DEFINE T_TITLE_LOC "Visual FoxPro 传送器"
#DEFINE T_CONVASIS_LOC "转换成"
#DEFINE T_NOCONV_LOC "如果文件没有被传送则不能被转换。"
#DEFINE T_NOTRANSPORT_LOC "不传送"
#DEFINE T_RECMOD_LOC " 对象在更近时被修改过"
#DEFINE T_NEWMOD_LOC "对象相对于 Windows 是新的，或者比它们的 Windows 等价体于更近时被修改过。"
#DEFINE T_NEWMOD1_LOC "对象是新的对"
#DEFINE T_NEWMOD2_LOC ", 或者比它们的"+CHR(13)+"于更近时修改过文件 "
#DEFINE T_NEWMOD3_LOC " 等价体。"
#DEFINE T_BYTRANS1_LOC  "通过传送这个文件而创建"
#DEFINE T_BYTRANS2_LOC  "这些对象的定义。 "
#DEFINE T_BYTRANS3_LOC  "通过传送这个文件而添加，更新，或"+ chr(13) + "替代"
#DEFINE T_BYTRANS4_LOC  " 此文件中对象的定义。"
#DEFINE T_BYTRANS5_LOC  "通过传送这个文件而添加，"
#DEFINE T_BYTRANS6_LOC	"更新或替代 MS-DOS 定义"
#DEFINE T_ADDUPDREPL_LOC  	"通过传送这个文件而添加，更新或替代此文件中的对象的 Windows 定义。"
#DEFINE T_UPDMSDOSDEF_LOC 	"通过传送这个文件而添加，更新或替代 MS-DOS 定义"
#DEFINE T_MSDOSDEF_LOC 		"通过传送这个文件而创建这些对象的 MS-DOS 定义。"
#DEFINE T_OTHERPLAT_LOC		"文件中有为别的平台定义的对象"
#DEFINE T_OTHERPLAT2_LOC	"文件中有对象定义在"
#DEFINE T_OTHERPLAT3_LOC	"一个不同于 MS-DOS 的平台上。"
#DEFINE T_NODOSDEF_LOC 		"文件中有定义在不同于 MS-DOS 平台上的对象。"
#DEFINE T_OPENASIS_LOC "打开为"
#DEFINE T_NEWDOSOBJ_LOC "传送对于 MS-DOS 是新的对象"
#DEFINE T_TRANSOBJ_LOC "传送对象从:"
#DEFINE T_REPLOBJ_LOC "所有对象 -- 替代已存在的定义。"
#DEFINE T_REPORT_FILE_LOC "报表文件:"
#DEFINE T_LABEL_FILE_LOC  "标签文件:"
#DEFINE T_SCREEN_FILE_LOC "屏幕文件:"
#DEFINE T_SPIN_LOC	"微调器"
#DEFINE T_SEXPR_LOC	"SAY 表达式"
#DEFINE T_GFIELD_LOC	"GET 字段"
#DEFINE T_FIELD_LOC	"字段"
#DEFINE T_POPUP_LOC	"弹出"
#DEFINE T_PICTURE_LOC	"图片"
#DEFINE T_RPTVAR_LOC	"Rpt 变量"
#DEFINE T_INVBTN_LOC	"Inv 按钮"
#DEFINE T_PDRIVER_LOC "打印机驱动程序"
#DEFINE T_FONTDATA_LOC "字体数据"
#DEFINE T_UNKNOWNVERS_LOC "未知的 FoxPro 版本。"
#DEFINE T_ENERGIZE_LOC "给予精力"
#DEFINE	T_SELTRANS_LOC	"选定要传送的文件"
#DEFINE T_TRANSPORT_LOC "传送"
#DEFINE T_TRANSPERR_LOC "传送器错误"
#DEFINE T_LINENO_LOC	"行号: "
#DEFINE T_CLEANUP_LOC	"按任一键以清理并退出..."
#DEFINE T_OBJNEWMOD_LOC "这些对象或者相对于 Windows 平台是新的，或者于更近时被修改过"
#DEFINE T_OBJMOD_LOC "这些对象于更近时被修改过"
#DEFINE T_OBJNEW1_LOC "这些对象对于"
#DEFINE T_OBJNEW2_LOC " 平台是新的或于更近时间被修改过 "
#DEFINE T_UNCHECK1_LOC "取消任何复选项"
#DEFINE T_UNCHECK2_LOC "不要"
#DEFINE T_UNCHECK3_LOC "被传送。"
#DEFINE T_EXPPROMPT_LOC "表达式/提示"
#DEFINE T_TYPE_LOC "类型"
#DEFINE T_VARIABLE_LOC "变量"
#DEFINE T_STAT_LOC "Stat"
#DEFINE T_FONT_LOC "字体"
#DEFINE T_FONT1_LOC "字体..."
#DEFINE T_OK_LOC "确定"
#DEFINE T_CANCEL_LOC "取消"
#DEFINE T_TRANSOPEN_LOC "\!传送并打开;照原样打开;\?取消"
#DEFINE T_TRANSOPEN1_LOC "\!传送并打开;\?取消"
#DEFINE T_TRANSOPEN2_LOC "传送并打开"

#DEFINE T_NOSTAND_LOC	"传送器不能作为独立的程序运行。"
#DEFINE T_INVALIDSCR_LOC	"无效的屏幕/报表名称。"
#DEFINE T_WHEREIS_LOC	"在哪里"
#DEFINE T_CONVFRX_LOC	"使用前必须将其转换为 .FRX 文件"+CHR(13)+"使用目录管理器打开文件,"+CHR(13)+						"或从运行菜单中选择“转换 dBASE 文件”项。"


#DEFINE T_UNKNOWNFRX_LOC	"未知的报表格式"
#DEFINE T_TRANSNOTHING_LOC "传送器无事可做。"
#DEFINE T_INVFILEFORMAT_LOC	"未知或无效的文件格式"
#DEFINE T_NORECS_LOC	"没有记录可传送"
#DEFINE T_COMVPRMPT1_LOC	"转换 1.02 报表文件到 2.6 格式吗？"
#DEFINE T_COMVPRMPT2_LOC	"转换 FoxBASE+/dBASE III 报表文件到 FoxPro 2.6 格式吗？"
#DEFINE T_COMVPRMPT3_LOC	"转换 1.02 标签文件到 2.6 格式吗？"
#DEFINE T_COMVPRMPT4_LOC	"转换 FoxBASE+/dBASE III 标签文件到 FoxPro 2.6 格式吗？"
#DEFINE T_COMVPRMPT5_LOC	"转换 2.0 屏幕文件到 2.6 格式吗？"
#DEFINE T_COMVPRMPT6_LOC	"转换 2.0 报表文件到 2.6 格式吗？"
#DEFINE T_COMVPRMPT7_LOC	"转换 2.0 项目文件到 2.6 格式吗？"
#DEFINE T_UNKOPERATION_LOC	"未知的 doupdate 操作"
#DEFINE T_UNKFOXVER_LOC		"未知的 FoxPro 版本。"
#DEFINE T_SAMELINE_LOC		"来源和目的平台相同在行"
#DEFINE T_NOOPENREPT_LOC	"不能打开 FoxBASE+ 报表报单"
#DEFINE T_TOTAL1_LOC	"*** 总计 ***"
#DEFINE T_YESNO_LOC		"是(\<Y);\!\?不是(\<N)"

#DEFINE T_THAN_LOC		"比"
#DEFINE T_EQIVOBJS_LOC	" 等价对象"
#DEFINE	T_OBJSNEWTO_LOC	"对象是新的,对于..."
#DEFINE	T_OBJINFILE_LOC "文件中的对象。"
#DEFINE T_THERMSCR_LOC	" 屏幕: "
#DEFINE T_THERMRPT_LOC	" 报表: "
#DEFINE T_THERMLBL_LOC	" 标签: "
#DEFINE T_ASSERTFAIL_LOC	"警告失败: "
#DEFINE T_THANMAC_LOC	"比 Macinstosh 等价对象"