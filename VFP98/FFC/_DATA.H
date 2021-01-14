* _DATA.H

***********************************
* Constants for classes
#DEFINE MB_ICONEXCLAMATION		48
#DEFINE MB_QUESTIONYESNO	36
#DEFINE MB_ISYES			6

***********************************
* strings for _cbodistinctvalues classes

#DEFINE NO_TABLE_LOC "必须在 controlSource 属性中指定表的别名，格式为“alias.column”。"

***********************************
* strings for _cbolookup classes

#DEFINE NO_LOOKUP_TABLE_LOC "必须在 lookup_table 属性中指定要搜索的表 (combo box " + THIS.name + ")。"
#DEFINE NO_DISPLAY_COLUMN_LOC "必须在 display_column 属性中指定要显示的列 (combo box " + THIS.name + ")。"
#DEFINE NO_RETURN_COLUMN_LOC "必须在 return_column 属性中指定显示返回值的列 (combo box " + THIS.name + ")。"

***********************************
* strings for _conflicts classes

#DEFINE CS_NOALIAS_LOC					"未指定临时表。"
#DEFINE CS_ROWCONFLICT_LOC				"发生冲突的行号:  "
#DEFINE CS_NOCONFLICTS1_LOC				"未发现冲突。"
#DEFINE CS_NOCONFLICTS_LOC				"未发现其他冲突。"
#DEFINE CS_NOBUFFER_LOC					"必须数据缓冲来检查冲突。"
#DEFINE WAIT_REVERTFAIL_LOC		"恢复失败"
#DEFINE WAIT_REVERT1_LOC		"1 行已恢复"
#DEFINE	WAIT_UPDATEOK_LOC		"已成功更新"
#DEFINE	WAIT_UPDATEFAIL1_LOC	"更新失败，主关键字已更改"

***********************************
* strings for _execsp classes

#DEFINE BADPARMS_LOC	"必须向此类传递至少三个参数。"

***********************************
* strings for _offline classes
#DEFINE C_NODATABASE_LOC	"未指定数据库或视图。"
#DEFINE C_NOVIEWS_LOC		"未指定游离视图。"
#DEFINE C_OKONLINE_LOC		"已成功地将视图变为联机视图。"
#DEFINE C_RECORDCONLICT_LOC "在更新视图时，发生了一个记录冲突。视图名为:"
#DEFINE C_FAILONLINE_LOC 	"无法得到联机视图: "
#DEFINE C_NOOPEN_LOC 		"无法打开下列视图: "
#DEFINE C_FAILOFFLINE_LOC	"无法使下列视图游离: "
#DEFINE C_OKOFFLINE_LOC		"已成功地使视图游离。"

***********************************
* strings for _datachecker class

#define NOBUFF1_LOC '禁止数据缓冲。'
	#define WINDMSG_LOC "传给 conflictmanager.handlerecord 的值无效"
* Declare constants & variables
#define CR_LOC CHR(13)
#define SAVE_LOC "是否希望用您的更改结果改写当前值？" + CR_LOC + "选取“取消”可以恢复原始值。"
#define CONFLICT_LOC "数据冲突"
#define VERIFY_LOC "检验更改"
#define ORG_LOC "原始值: "
#define CUR_LOC "当前值: "
#define CHG_LOC "更改: "
#define MEMO_LOC " 是备注字段。"
#define FIELD_LOC "字段: "
#define RECORD_LOC "记录号: "
#define VALCHG1_LOC "值已被其他用户更改过。"
#define VALCHG2_LOC "值已被更改过。"
#define SAVECHG_LOC '是否希望保存更改？'
#define SAVECHG2_LOC '保存更改'

***********************************
* strings for _datanavbtns class
#define NUM_LOC "错误号:"
#define PROG_LOC "过程: "
#define MSG_LOC "错误信息: "
#define SELTABLE_LOC "选择表:"
#define OPEN_LOC "打开"
#define SAVE1_LOC "是否希望以任何方式保存更改？"
#define CONFLICT_LOC "无法解决数据冲突。"
