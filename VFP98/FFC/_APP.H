* _app.h

***********************************************************
localization strings and constants for _app.vcx 
***********************************************************

* _datasession class
#DEFINE DATA_MESSAGEBOX_TITLE_LOC    "������Ϣ"
#DEFINE DATA_OK_TO_SAVE_LOC          "ȷ������༭�����"
#DEFINE DATA_OK_TO_REVERT_LOC        "ȷ��ȡ��������"
#DEFINE DATA_UPDATE_CONFLICT_LOC     "��¼�ѱ������û�������"+CHR(13)+CHR(13) +                                     "ֻ����ȡ�����������󣬲��ܸ�����Щ��¼��"



#DEFINE DATA_HAS_BEEN_EDITED_LOC     "������ʼ�༭�������˿����ѱ༭�������ݡ�"+CHR(13)+CHR(13) +"ѡ��ȷ�������Ը��������˵ĸ��ģ�"+CHR(13)+                                     "����ȡ���Դ˱��м�¼�����ı༭��"


#DEFINE DATA_SAVE_BEFORE_CLOSE_LOC   "���Ѿ��ڴ˽����޸ġ�"+CHR(13)+CHR(13)+"�Ƿ��ڹر�ǰ������ģ�"

#DEFINE DATA_CANCEL_UNFINISHED_LOC   "���Ѿ��ڴ˽����޸ģ�����û�б��档"+CHR(13)+CHR(14)+"�Ƿ���Ҫ�رգ�ȡ�����ģ�"

                                     

* _error class
* error logging
#DEFINE ERROR_MESSAGEBOX_TITLE_LOC   "������Ϣ"
#DEFINE ERROR_IN_ERROR_METHOD_LOC    "����������"
#DEFINE ERROR_SERIOUS_CLASS_LOC      "�෢�����ش���"
#DEFINE ERROR_CANNOT_BE_LOGGED_LOC   "Ӧ�ó����˳��������޷������ڸô������Ϣ���ӵ�������־�С�"
#DEFINE ERROR_LOCK_LOC               "�ļ����¼��Ч"
#DEFINE ERROR_PRINT_LOC              "������Ĵ�ӡ�����ӡ������������Ч"
#DEFINE ERROR_USER_FIX_LOC           "�봦�������⣬���һ�����ԡ�"
#DEFINE ERROR_USER_NOTE_LOC          "��ע��˴�����Ϣ��"

* error log display
#DEFINE ERROR_LOG_EMPTY_LOC          "������־��û�м�¼��"
#DEFINE ERROR_LOG_UNAVAILABLE_LOC    "������־��Ч��"

* error continuation choices
#DEFINE ERROR_USER_CHOICES_LOC       "����ִ�г�����"

#DEFINE ERROR_DEVEND_LOC             ERROR_USER_CHOICES_LOC+CHR(13)+CHR(13)+                                     "ѡȡ: "+CHR(13)+CHR(13)+                                     "���ǡ����Լ���ִ�г���"+CHR(13)+                                     "���񡱽�������� "+CHR(13)+                                     "��ȡ��������ȫ�˳�����"






#DEFINE ERROR_USEREND_LOC            ERROR_USER_CHOICES_LOC+CHR(13)+CHR(13)+                                     "ѡȡ: "+CHR(13)+CHR(13)+                                     "���ǡ����Լ���ִ�г���"+CHR(13)+                                     "��ȡ��������ȫ�˳�����"




               
#DEFINE ERROR_OCCURRED_LOC           "�ѷ�������"
#DEFINE ERROR_LOG_LOC                "�ڴ�����־�ļ��м�¼��ϸ��Ϣ��"


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
#DEFINE TB_FORMDESIGNER_LOC  "���������"
#DEFINE TB_STANDARD_LOC      "����"
#DEFINE TB_LAYOUT_LOC        "����"
#DEFINE TB_QUERY_LOC		 "��ѯ�����"
#DEFINE TB_VIEWDESIGNER_LOC  "��ͼ�����"
#DEFINE TB_COLORPALETTE_LOC  "��ɫ��"
#DEFINE TB_FORMCONTROLS_LOC  "�����ؼ�"
#DEFINE TB_DATADESIGNER_LOC  "���ݿ������"
#DEFINE TB_REPODESIGNER_LOC  "���������"
#DEFINE TB_REPOCONTROLS_LOC  "�����ؼ�"
#DEFINE TB_PRINTPREVIEW_LOC  "����Ԥ��"
