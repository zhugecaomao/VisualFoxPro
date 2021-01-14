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

#DEFINE FIND_LOOKFOR_LOC          "����(\<L):"
#DEFINE FIND_LOOKIN_LOC           "����(\<I):"
#DEFINE FIND_OPTIONS_LOC          "ѡ��"
#DEFINE FIND_WRAPAROUND_LOC       "����(\<D)"
#DEFINE FIND_MATCHCASE_LOC        "���ִ�Сд(\<M)"
#DEFINE FIND_SKIPMEMOS_LOC        "������ע(\<S)"
#DEFINE FIND_FIND_LOC             "����(\<F)"
#DEFINE FIND_FINDNEXT_LOC         "������һ��(\<N)"
#DEFINE FIND_CANCEL_LOC           "ȡ��(\<C)"
#DEFINE FIND_NOFIND_LOC           "û���ҵ�"
#DEFINE FIND_CAPTION_LOC          "����"
#DEFINE FIND_FINDIN_LOC           "���ҷ�Χ"

***********************************
* _TableSetFilterDialog strings:

#DEFINE SETFILTER_CAPTION_LOC     "����ɸѡ����(\<S)"
#DEFINE SETFILTER_APPLY_LOC       "Ӧ��(\<A)"
#DEFINE SETFILTER_MAXLENGTH_LOC   "ɸѡ��������С�� 255 ���ַ���"
#DEFINE SETFILTER_INVALID_LOC     "ɸѡ���������ͱ���Ϊ�߼�ֵ��"
#DEFINE SETFILTER_BUILDEXPR_LOC   "�������ʽ(\<B)"
#DEFINE SETFILTER_SIMPLE_LOC      "��"
#DEFINE SETFILTER_COMPLEX_LOC     "����"
#DEFINE SETFILTER_CANCEL_LOC      "ȡ��(\<C)"
#DEFINE SETFILTER_EDIT_LOC        "�༭(\<E)"
#DEFINE SETFILTER_NEED_LIB_LOC    "��Ҫ _TABLE.VCX �⣡"


**********************************
* _TableSimpleFilterDialog strings:

#DEFINE FILTER_CANCELLED_LOC             "��ȡ��"
#DEFINE FILTER_SECONDS_LOC               "��"
#DEFINE FILTER_TOO_LONG_LOC              "����ʽ̫��"
#DEFINE FILTER_RECORDS_LOC               "��¼"
#DEFINE FILTER_NUMERIC_REQUIRED_LOC      "��ֵ���ֶΣ�ϣ����һ����ֵ"
#DEFINE FILTER_NUMERIC_NO_QUOTES_LOC     "��ֵ���ֶΣ�������������"
#DEFINE FILTER_MISSING_VALUE_LOC         "ȱ��ֵ"
#DEFINE FILTER_CHECKING_OPEN_TABLES_LOC  "���ڼ��򿪵��ļ�..."
#DEFINE FILTER_NO_SINGLE_QUOTES_LOC      "ֵ�е����Ų����"
#DEFINE FILTER_QUERY_LIST_FULL_LOC       "��ѯ�б�������"

***********************************
* _Table class strings:

#DEFINE TABLE_MESSAGE_TITLE_ROW_CHANGED_LOC "���������Ѿ����ġ�"

#DEFINE TABLE_MESSAGE_ROW_CHANGED_LOC       "���Ƶ�������¼֮ǰ��"+CHR(13)+"ϣ���� "+CHR(13)+CHR(13)+                                            "  ������� (��)"+CHR(13)+                                            "  �ָ����� (��) or"+CHR(13)+                                            "  ������¼ (ȡ��)��"




************************
* _dialog fonts
#DEFINE SYSTEM_LARGEFONTS            FONTMETRIC(1, '����', 9, '') # 13 OR ;
                                     FONTMETRIC(4, '����', 9, '') # 2 OR ;
                                     FONTMETRIC(6, '����', 9, '') # 5 OR ;
                                     FONTMETRIC(7, '����', 9, '') # 11

#DEFINE DIALOG_SMALLFONT_NAME        "����"
#DEFINE DIALOG_LARGEFONT_NAME        "����"
