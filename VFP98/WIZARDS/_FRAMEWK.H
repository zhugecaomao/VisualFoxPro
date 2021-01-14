* _framewk.h

***********************************************************
* localization strings, constants, 
* and tunable expressions for _framewk.vcx,
* framework-enabling header file for global template classes

***********************************************************

* _application class

#DEFINE APP_MEDIATOR_SUPERCLASS      "_formmediator"
* note: don't use TRANSFORM() or trim below, need the padding spaces:
#DEFINE APP_META_FAVE_ID              STR(RECNO())
#DEFINE APP_META_UNAVAILABLE_LOC     "元表正在使用或者不可使用:"
#DEFINE APP_META_WRONGFORMAT_LOC     "元表的结构不正确:"
#DEFINE APP_META_MISSINGINDEX_LOC    "元表中缺少一个或"+CHR(13)+"多个必须的索引:"


#DEFINE PJX_META_DOC_FORM_TYPE       "F"
#DEFINE PJX_META_DOC_REPORT_TYPE     "R"
#DEFINE PJX_META_DOC_HEADER_TYPE     "A" 

#DEFINE APP_FEATURE_NOT_AVAILABLE_LOC "功能不可用。"
#DEFINE APP_FILE_NOT_FOUND_LOC        "文件未找到"
#DEFINE APP_READY_TO_SHUTDOWN_LOC     "是否确认要退出？"
#DEFINE APP_LOADING_LOC               "正在载入..."

#DEFINE APP_PM_WIN_TITLE_LOC         "项目管理器 - "
#DEFINE APP_ALREADY_EXISTS_LOC       "已经存在"
#DEFINE APP_GO_PAD_LOC               "转至(\<G)"
#DEFINE APP_GO_PAD_HOTKEY_LOC        ALT+G
#DEFINE APP_GO_MESSAGE_LOC           "定位当前选定的表、临时表或视图"

#DEFINE APP_USER_FAVES_CLEAR_LOC     "是否立即清除您的“收藏夹”列表？"
#DEFINE APP_USER_FAVES_CORRUPT_LOC   "您的“收藏夹”中的条目可能损坏，系统将清除“收藏夹”。"
#DEFINE APP_META_TABLE_CHANGED_LOC   THIS.cCaption+ " 文档表已经被更改。 "+ CHR(13)+"部分“收藏夹”条目可能会运行不正确。 "+                                     CHR(13)+CHR(13)+                                     APP_USER_FAVES_CLEAR_LOC




#DEFINE APP_MACRO_RESTORE_LOC        "还原"
#DEFINE APP_OUTPUT_ONE_REC_LOC       "当前记录"

* _dialog fonts
#DEFINE DIALOG_SMALLFONT_NAME        "宋体"
#DEFINE DIALOG_LARGEFONT_NAME        "宋体"

* _aboutbox class
#DEFINE ABOUT_LOC                    "关于"

* _options class
#DEFINE OPTIONS_LOC                      "用户选项"
#DEFINE OPTIONS_DEFAULTS_SAVED_LOC       "已保存用户选项的默认设置。"
#DEFINE OPTIONS_APPLIED_LOC              "已应用用户选项的设置。"
#DEFINE OPTIONS_DEFAULTS_SHOWN_LOC       "已显示用户选项保存的默认设置。"
#DEFINE OPTIONS_NOT_STORED_LOC           "尚未保存用户选项的默认设置！"
#DEFINE CHANGEPASSWORD_LOC               "更改口令"
#DEFINE OPTIONS_CONFIRM_PASSWORD_LOC     "请再输入一遍口令，用以确认。"
#DEFINE OPTIONS_PASSWORD_UNCONFIRMED_LOC "口令未确认。"+CHR(13)+"请再输一遍。"
#DEFINE OPTIONS_PASSWORD_CONFIRMED_LOC   "已接受新口令。"

* _UserLogInClass
#DEFINE LOGIN_CAPTION_LOC            "用户登录"
#DEFINE LOGIN_ADD_USER_LOC           "是否希望添加新用户？"
#DEFINE LOGIN_NEW_USER_INFO_LOC      "现在存储该用户的新口令。"+ CHR(13)+CHR(13)+"此新用户将具有基本层次的访问权限。"

#DEFINE LOGIN_USER_NOT_FOUND_LOC     "未列出用户。"
#DEFINE LOGIN_WRONG_PASSWORD_LOC     "该用户口令不正确。"
#DEFINE LOGIN_EMPTY_PASSWORD_LOC     "口令不允许为空。"
#DEFINE LOGIN_TRIES_EXCEEDED_LOC     "登录次数超过限制！"

* user permissions and levels are provided for, although
* not evaluated, in the basic framework
#DEFINE USER_PERMISSION_DENIED_LOC  "您的用户级权限不允许访问此功能。"

* _documentpicker and descendent classes
#DEFINE DOCUMENTPICKER_NO_DOCUMENTS_LOC   "注册文档不可用。"
#DEFINE DOCUMENTPICKER_NO_APP_LOC         "必须向由 _APPLICATION 继承下来的对象传递一个引用"

#DEFINE NEWOPEN_CAPTION_NEW_LOC           "选择要创建的文档"
#DEFINE NEWOPEN_CAPTION_OPEN_LOC          "选择要打开的文档"

#DEFINE REPORTPICKER_CAPTION_RUN_LOC      "选择要运行的报表"
* report editing may be offered at some point:
#DEFINE REPORTPICKER_CAPTION_MODIFY_LOC   "选择要修改的报表"

#DEFINE FAVORITEPICKER_CAPTION_ADD_LOC    "“收藏夹”中的可用文档"
#DEFINE FAVORITEPICKER_ADDBUTTON_LOC      "添加(\<A)"
#DEFINE FAVORITEPICKER_CLOSEBUTTON_LOC    "关闭(\<C)"
#DEFINE FAVORITEPICKER_CAPTION_START_LOC  "快速启动"
#DEFINE FAVORITEPICKER_DOC_ALREADY_LOC    "已经在“收藏夹”中选取。"

#DEFINE FAVORITEPICKER_PICKED_LOC         "* "
#DEFINE FAVORITEPICKER_PICKED_LEN         LEN(FAVORITEPICKER_PICKED_LOC)

* _errorlogviewer class
#DEFINE ERRORVIEWER_CAPTION_LOC        "错误日志查看器"
#DEFINE ERRORVIEWER_EMPTY_LOC          "错误日志中没有记录。"
#DEFINE ERRORVIEWER_UNAVAILABLE_LOC    "错误日志无效。"
#DEFINE ERRORVIEWER_IN_USE_LOC         "正在使用错误日志，请在进行下一步操作前先将其关闭。"

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


#DEFINE WINDOWTYPE_MODELESS   0
#DEFINE WINDOWTYPE_MODAL      1
#DEFINE WINDOWTYPE_READ       2
#DEFINE WINDOWTYPE_READMODAL  3

