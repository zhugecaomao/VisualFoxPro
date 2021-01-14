* _app.h

***********************************************************
localization strings and constants for _app.vcx 
***********************************************************

* _datasession class
#DEFINE DATA_MESSAGEBOX_TITLE_LOC    "数据消息"
#DEFINE DATA_OK_TO_SAVE_LOC          "确定保存编辑结果吗？"
#DEFINE DATA_OK_TO_REVERT_LOC        "确定取消更改吗？"
#DEFINE DATA_UPDATE_CONFLICT_LOC     "记录已被其他用户锁定。"+CHR(13)+CHR(13) +                                     "只有在取消其他锁定后，才能更新这些记录。"



#DEFINE DATA_HAS_BEEN_EDITED_LOC     "在您开始编辑后，其他人可能已编辑过该数据。"+CHR(13)+CHR(13) +"选择“确定”可以覆盖其他人的更改，"+CHR(13)+                                     "还是取消对此表中记录所做的编辑？"


#DEFINE DATA_SAVE_BEFORE_CLOSE_LOC   "您已经在此进行修改。"+CHR(13)+CHR(13)+"是否在关闭前保存更改？"

#DEFINE DATA_CANCEL_UNFINISHED_LOC   "您已经在此进行修改，但还没有保存。"+CHR(13)+CHR(14)+"是否仍要关闭，取消更改？"

                                     

* _error class
* error logging
#DEFINE ERROR_MESSAGEBOX_TITLE_LOC   "错误信息"
#DEFINE ERROR_IN_ERROR_METHOD_LOC    "错误处理出错"
#DEFINE ERROR_SERIOUS_CLASS_LOC      "类发生严重错误"
#DEFINE ERROR_CANNOT_BE_LOGGED_LOC   "应用程序将退出，并且无法将关于该错误的信息添加到错误日志中。"
#DEFINE ERROR_LOCK_LOC               "文件或记录无效"
#DEFINE ERROR_PRINT_LOC              "您所需的打印机或打印机驱动程序无效"
#DEFINE ERROR_USER_FIX_LOC           "请处理此问题，或等一下再试。"
#DEFINE ERROR_USER_NOTE_LOC          "请注意此错误信息。"

* error log display
#DEFINE ERROR_LOG_EMPTY_LOC          "错误日志中没有记录。"
#DEFINE ERROR_LOG_UNAVAILABLE_LOC    "错误日志无效。"

* error continuation choices
#DEFINE ERROR_USER_CHOICES_LOC       "继续执行程序吗？"

#DEFINE ERROR_DEVEND_LOC             ERROR_USER_CHOICES_LOC+CHR(13)+CHR(13)+                                     "选取: "+CHR(13)+CHR(13)+                                     "“是”可以继续执行程序"+CHR(13)+                                     "“否”将挂起程序 "+CHR(13)+                                     "“取消”将完全退出程序。"






#DEFINE ERROR_USEREND_LOC            ERROR_USER_CHOICES_LOC+CHR(13)+CHR(13)+                                     "选取: "+CHR(13)+CHR(13)+                                     "“是”可以继续执行程序"+CHR(13)+                                     "“取消”将完全退出程序。"




               
#DEFINE ERROR_OCCURRED_LOC           "已发生错误"
#DEFINE ERROR_LOG_LOC                "在错误日志文件中记录详细信息吗？"


***********************************************************
* Messagebox subset from FOXPRO.H
***********************************************************

#DEFINE MB_OK                   0       && OK button only
#DEFINE MB_OKCANCEL             1       && OK and Cancel buttons
#DEFINE MB_ABORTRETRYIGNORE     2       && Abort, Retry, and Ignore buttons
#DEFINE MB_YESNOCANCEL          3       && Yes, No, and Cancel buttons
#DEFINE MB_YESNO                4       && Yes and No buttons
#DEFINE MB_RETRYCANCEL          5       && Retry and Cancel buttons

#DEFINE MB_ICONSTOP             16      && Critical message
#DEFINE MB_ICONQUESTION         32      && Warning query
#DEFINE MB_ICONEXCLAMATION      48      && Warning message
#DEFINE MB_ICONINFORMATION      64      && Information message

#DEFINE MB_APPLMODAL            0       && Application modal message box
#DEFINE MB_DEFBUTTON1           0       && First button is default
#DEFINE MB_DEFBUTTON2           256     && Second button is default
#DEFINE MB_DEFBUTTON3           512     && Third button is default
#DEFINE MB_SYSTEMMODAL          4096    && System Modal

*-- MsgBox return values
#DEFINE IDOK            1       && OK button pressed
#DEFINE IDCANCEL        2       && Cancel button pressed
#DEFINE IDABORT         3       && Abort button pressed
#DEFINE IDRETRY         4       && Retry button pressed
#DEFINE IDIGNORE        5       && Ignore button pressed
#DEFINE IDYES           6       && Yes button pressed
#DEFINE IDNO            7       && No button pressed

***********************************************************
* Data-handling subset from FOXPRO.H
***********************************************************
*-- Cursor buffering modes
#DEFINE DB_BUFOFF               1
#DEFINE DB_BUFLOCKRECORD        2
#DEFINE DB_BUFOPTRECORD         3        
#DEFINE DB_BUFLOCKTABLE         4
#DEFINE DB_BUFOPTTABLE          5

*-- Update types for views/cursors
#DEFINE DB_UPDATE               1
#DEFINE DB_DELETEINSERT         2

*-- WHERE clause types for views/cursors
#DEFINE DB_KEY                  1
#DEFINE DB_KEYANDUPDATABLE      2
#DEFINE DB_KEYANDMODIFIED       3
#DEFINE DB_KEYANDTIMESTAMP      4

*-- Remote connection login prompt options
#DEFINE DB_PROMPTCOMPLETE       1
#DEFINE DB_PROMPTALWAYS         2
#DEFINE DB_PROMPTNEVER          3

*-- Remote transaction modes
#DEFINE DB_TRANSAUTO            1
#DEFINE DB_TRANSMANUAL          2

*-- Source Types for CursorGetProp()
#DEFINE DB_SRCLOCALVIEW         1
#DEFINE DB_SRCREMOTEVIEW        2
#DEFINE DB_SRCTABLE             3


***********************************************************
* System Toolbar subset from FOXPRO.H, Tastrade STRINGS.H
***********************************************************
*-- Toolbar Positions
#DEFINE TOOL_NOTDOCKED  -1
#DEFINE TOOL_TOP        0
#DEFINE TOOL_LEFT       1
#DEFINE TOOL_RIGHT      2
#DEFINE TOOL_BOTTOM     3

*-- Toolbar names
#DEFINE TB_FORMDESIGNER_LOC  "表单设计器"
#DEFINE TB_STANDARD_LOC      "常用"
#DEFINE TB_LAYOUT_LOC        "布局"
#DEFINE TB_QUERY_LOC		 "查询设计器"
#DEFINE TB_VIEWDESIGNER_LOC  "视图设计器"
#DEFINE TB_COLORPALETTE_LOC  "调色板"
#DEFINE TB_FORMCONTROLS_LOC  "表单控件"
#DEFINE TB_DATADESIGNER_LOC  "数据库设计器"
#DEFINE TB_REPODESIGNER_LOC  "报表设计器"
#DEFINE TB_REPOCONTROLS_LOC  "报表控件"
#DEFINE TB_PRINTPREVIEW_LOC  "报表预览"

