* _TABLE.H

***********************************
* constants for _Table* classes

#DEFINE DB_BUFLOCKRECORD        2
#DEFINE DB_BUFOPTRECORD         3    

#DEFINE FILTER_MAX_FILTER       255

#DEFINE MB_ICONEXCLAMATION   48
#DEFINE MB_YESNOCANCEL        3
#DEFINE IDYES                 6
#DEFINE IDNO                  7

***********************************
* localization for _Table* classes

* _TableFind* buttons and dialog class strings

#DEFINE FIND_LOOKFOR_LOC          "查找(\<L):"
#DEFINE FIND_LOOKIN_LOC           "搜索(\<I):"
#DEFINE FIND_OPTIONS_LOC          "选项"
#DEFINE FIND_WRAPAROUND_LOC       "回绕(\<D)"
#DEFINE FIND_MATCHCASE_LOC        "区分大小写(\<M)"
#DEFINE FIND_SKIPMEMOS_LOC        "跳过备注(\<S)"
#DEFINE FIND_FIND_LOC             "查找(\<F)"
#DEFINE FIND_FINDNEXT_LOC         "查找下一个(\<N)"
#DEFINE FIND_CANCEL_LOC           "取消(\<C)"
#DEFINE FIND_NOFIND_LOC           "没有找到"
#DEFINE FIND_CAPTION_LOC          "查找"
#DEFINE FIND_FINDIN_LOC           "查找范围"

***********************************
* _TableSetFilterDialog strings:

#DEFINE SETFILTER_CAPTION_LOC     "设置筛选条件(\<S)"
#DEFINE SETFILTER_APPLY_LOC       "应用(\<A)"
#DEFINE SETFILTER_MAXLENGTH_LOC   "筛选条件必须小于 255 个字符。"
#DEFINE SETFILTER_INVALID_LOC     "筛选条件的类型必须为逻辑值。"
#DEFINE SETFILTER_BUILDEXPR_LOC   "连编表达式(\<B)"
#DEFINE SETFILTER_SIMPLE_LOC      "简单"
#DEFINE SETFILTER_COMPLEX_LOC     "复杂"
#DEFINE SETFILTER_CANCEL_LOC      "取消(\<C)"
#DEFINE SETFILTER_EDIT_LOC        "编辑(\<E)"
#DEFINE SETFILTER_NEED_LIB_LOC    "需要 _TABLE.VCX 库！"


**********************************
* _TableSimpleFilterDialog strings:

#DEFINE FILTER_CANCELLED_LOC             "已取消"
#DEFINE FILTER_SECONDS_LOC               "秒"
#DEFINE FILTER_TOO_LONG_LOC              "表达式太长"
#DEFINE FILTER_RECORDS_LOC               "记录"
#DEFINE FILTER_NUMERIC_REQUIRED_LOC      "数值型字段；希望是一个数值"
#DEFINE FILTER_NUMERIC_NO_QUOTES_LOC     "数值型字段；不允许有引号"
#DEFINE FILTER_MISSING_VALUE_LOC         "缺少值"
#DEFINE FILTER_CHECKING_OPEN_TABLES_LOC  "正在检查打开的文件..."
#DEFINE FILTER_NO_SINGLE_QUOTES_LOC      "值中的引号不配对"
#DEFINE FILTER_QUERY_LIST_FULL_LOC       "查询列表已满。"

***********************************
* _Table class strings:

#DEFINE TABLE_MESSAGE_TITLE_ROW_CHANGED_LOC "该行数据已经更改。"

#DEFINE TABLE_MESSAGE_ROW_CHANGED_LOC       "在移到其他记录之前，"+CHR(13)+"希望： "+CHR(13)+CHR(13)+                                            "  保存更改 (是)"+CHR(13)+                                            "  恢复更改 (否) or"+CHR(13)+                                            "  保留记录 (取消)？"




************************
* _dialog fonts
#DEFINE SYSTEM_LARGEFONTS            FONTMETRIC(1, '宋体', 9, '') # 13 OR ;
                                     FONTMETRIC(4, '宋体', 9, '') # 2 OR ;
                                     FONTMETRIC(6, '宋体', 9, '') # 5 OR ;
                                     FONTMETRIC(7, '宋体', 9, '') # 11

#DEFINE DIALOG_SMALLFONT_NAME        "宋体"
#DEFINE DIALOG_LARGEFONT_NAME        "宋体"

