* _RUNACTIVEDOC
* Runs Activedocument menu item from Tools menu.


#DEFINE C_NOTACTDOC_LOC	"下列文件不是 Visual FoxPro Active Document: "
#DEFINE C_NOFILE_LOC	"下列文件不存在: "
#DEFINE C_CAPTION_LOC	"运行 Active Document"
#DEFINE C_RUNOPTIONS_LOC	"在浏览器中,单独执行,在浏览器中 (调试),单独执行 (调试)"
#DEFINE C_RUNBTN_LOC	"运行(\<R)"
#DEFINE C_CANCELBTN_LOC	"取消"
#DEFINE C_ENTERFILENAME_LOC	"请键入一个文件名。"
#DEFINE C_BADMODE_LOC	"模式值不正确"
#DEFINE	C_BADFILENAME_LOC	"选择的 Active Document 不正确。"
#DEFINE	ACTIVEDOC_EXTN	"APP"
#DEFINE RESFILE_ID	"ADOCFILES"
#DEFINE CRLF	CHR(13)+CHR(10)
#DEFINE HADERROR_LOC	"在 Active Document 启动器中发生了错误。"
#DEFINE ERROR1_LOC		"错误代码: "
#DEFINE ERROR2_LOC		"错误方法程序: "
#DEFINE ERROR3_LOC		"错误行: "

LPARAMETERS cFilename, nMethod
LOCAL oForm
oForm = CREATEOBJECT('myForm',cFileName,nMethod)
oForm.Show(1)
RETURN

DEFINE CLASS myform AS Form
	AutoCenter = .T. 
	BorderStyle = 2
	Caption = C_CAPTION_LOC
	MinButton = .F.
	MaxButton = .F.
	Height = 106
	Width = 384
	HelpContextID = 229996600

	ADD OBJECT lblDoc AS Label WITH ;
		Height = 23 ,;
		Left = 12 ,;
		Top = 12 ,;
		Width = 252,;
		Caption = "Active Document:"

	ADD OBJECT lblHost AS Label WITH ;
		Height = 23 ,;
		Left = 12 ,;
		Top = 56 ,;
		Width = 252,;
		Caption = "包容于::"

	ADD OBJECT cboADocs AS ComboBox WITH ;
		Height = 21 ,;
		Left = 12 ,;
		Top = 28 ,;
		Width = 252,;
		InputMask = REPLICATE("X",255)
		
	ADD OBJECT cmdGetFile AS CommandButton WITH ;
		Caption = '...' ,;
		Height = 23 ,;
		Left = 268 ,;
		Top = 28 ,;
		Width = 22
		
	ADD OBJECT cboMode AS ComboBox WITH ;
		Height = 21 ,;
		Left = 12 ,;
		RowSource = C_RUNOPTIONS_LOC ,;
		RowSourceType = 1 ,;
		Style = 2 ,;
		Top = 72 ,;
		Width = 280
		
	ADD OBJECT cmdRun AS CommandButton WITH ;
		Caption = C_RUNBTN_LOC ,;
		Default = .T. ,;
		Height = 23 ,;
		Left = 300 ,;
		Top = 28 ,;
		Width = 72 
	
	ADD OBJECT cmdCancel AS CommandButton WITH ;
		Cancel = .T. ,;
		Caption = C_CANCELBTN_LOC ,;
		Height = 23 ,;
		Left = 300 ,;
		Top = 57 ,;
		Width = 72
		
	ADD OBJECT hyperLink AS HyperLink
	
	PROCEDURE Init
		LPARAMETERS cFilename, nMode
		
		IF PARAMETERS() < 2
			nMode = 1
		ENDIF

		IF PARAMETERS() < 1
			cFilename = ""
		ENDIF

		IF VARTYPE(cFileName) # 'C'
			cFileName = ""
		ENDIF

		IF VARTYPE(nMode) # 'N' OR nMode < 1 OR nMode > 4
			nMode= 1
		ENDIF

		this.cboADocs.Value = cFileName
		this.cboMode.Value = nMode
		THIS.GetPref()
		
		IF  fontmetric(1, '宋体', 9, '') # 13 OR ;
			fontmetric(4, '宋体', 9, '') # 2 OR ;
			fontmetric(6, '宋体', 9, '') # 5 OR ;
			fontmetric(7, '宋体', 9, '') # 11
			this.setall('fontname', '宋体')
		ELSE
			this.setall('fontname','宋体')
		ENDIF
		this.setall('fontsize',9)
	ENDPROC
	
	PROCEDURE Error
		LPARAMETERS nError, cMethod, nLine
		IF INLIST(nError,1705)	&&ignore certain errors and handle in method
			RETURN
		ENDIF
		THIS.MSGBOX(HADERROR_LOC+CRLF+;
					ERROR1_LOC+TRANS(nError)+CRLF+;
					ERROR2_LOC+cMethod+CRLF+;
					ERROR3_LOC+TRANS(nLine))		
	ENDPROC
	
	PROCEDURE MsgBox
		LPARAMETERS cMsg
		MessageBox(cMsg, thisform.Caption)
	ENDPROC
	
	PROCEDURE cmdRun.Click
		LOCAL lcFileName, nMethod, cCmd
		lcFileName = ALLTRIM(thisform.cboADocs.Text)
		IF EMPTY(lcFilename)
			thisform.MsgBox(C_ENTERFILENAME_LOC)
			thisform.cboADocs.SetFocus
			RETURN
		ENDIF
		lcFileName = FULLPATH(lcFileName)
		IF NOT FILE(lcFilename)
			thisform.MsgBox(C_NOFILE_LOC + lcFileName)
			thisform.cboADocs.SetFocus
			RETURN
		ENDIF
		IF UPPER(JUSTEXT(lcFileName)) # ACTIVEDOC_EXTN
			thisform.MsgBox(C_NOTACTDOC_LOC + lcFileName)
			thisform.cboADocs.SetFocus
			RETURN		
		ENDIF
		nMethod = thisform.cboMode.Value
		thisform.Hide()
		thisform.SavePref()
		DO CASE
			CASE nMethod = 1	&& runtime, hosted in browser
				thisform.hyperLink.NavigateTo(lcFilename)
				
			CASE nMethod = 2	&& runtime, stand alone
				thisform.Shelldoc(lcFileName)
				
			CASE nMethod = 3	&& ide, hosted in browser
				CLOSE ALL
				SYS(4204)
				thisform.hyperLink.NavigateTo(lcFilename)
				
			CASE nMethod = 4	&& ide, stand alone
				DO (lcFilename)
				
			OTHERWISE
				ASSERT(C_BADMODE_LOC)
		ENDCASE
		thisform.release	
	ENDPROC
	
	PROCEDURE cmdCancel.Click
		thisform.release
	ENDPROC
			
	PROCEDURE cmdGetFile.Click
		LOCAL lcFile,i
		lcFile = GETFILE(ACTIVEDOC_EXTN)
		IF EMPTY(lcFile)
			RETURN
		ENDIF

		IF FILE(lcFile) AND UPPER(JUSTEXT(lcFile))=ACTIVEDOC_EXTN
			FOR i = 1 TO thisform.cboADocs.ListCount
				IF LOWER(ALLTRIM(lcFile)) == LOWER(ALLTRIM(thisform.cboADocs.List[m.i]))
					thisform.cboADocs.Value = LOWER(lcFile)
					RETURN
				ENDIF
			ENDFOR
			thisform.cboADocs.AddItem(LOWER(IIF(LEFT(lcFile,1)="\","\","")+lcFile))
			thisform.cboADocs.Value = LOWER(lcFile)
		ELSE
			thisform.MsgBox(C_BADFILENAME_LOC)
		ENDIF
	ENDPROC

	PROCEDURE shelldoc(tcFileName)
		LOCAL lcFileName
		IF EMPTY(tcFileName)
			RETURN -1
		ENDIF
		lcFileName=ALLTRIM(tcFileName)
		DECLARE INTEGER ShellExecute ;
			    IN SHELL32.DLL ;
			    INTEGER nWinHandle,;
			    STRING cOperation,;   
			    STRING cFileName,;
			    STRING cParameters,;
			    STRING cDirectory,;
			    INTEGER nShowWindow
		RETURN ShellExecute(0,"run",lcFilename,"","",1)
	ENDPROC
	
	PROCEDURE OpenResFile
		LOCAL lnSaveArea
		lnSaveArea=SELECT()
		IF !FILE(SYS(2005))    && resource file not found.
		   RETURN .F.
		ENDIF
		SELECT 0
		USE (SYS(2005)) AGAIN SHARED
		IF EMPTY(ALIAS())
			SELECT (lnSaveArea)
			RETURN .F.
		ENDIF
	ENDPROC
	
	PROCEDURE GetPref
		* Read preferences from resource file
		LOCAL lnSaveArea,lnMemwidth,i
		lnSaveArea=SELECT()
		lnMemwidth = SET('MEMOWIDTH')
		SET MEMOWIDTH TO 255
		IF !THIS.OpenResFile()
			RETURN
		ENDIF
		LOCATE FOR UPPER(ALLTRIM(type)) == "PREFW";
   			AND UPPER(ALLTRIM(id)) == RESFILE_ID;
   			AND !DELETED()

		IF FOUND() AND !EMPTY(data) AND ;
		  ckval=VAL(SYS(2007,data))
			RESTORE FROM MEMO data ADDITIVE
			IF TYPE("vfp_Save_aDocFiles[1]")="C"
				FOR i = 1 TO ALEN(vfp_Save_aDocFiles)
					IF FILE(vfp_Save_aDocFiles[m.i])
						THIS.cboADocs.AddItem(IIF(LEFT(vfp_Save_aDocFiles[m.i],1)="\","\","")+vfp_Save_aDocFiles[m.i])
					ENDIF
				ENDFOR
				IF THIS.cboADocs.ListCount#0
					THIS.cboADocs.Value = THIS.cboADocs.List[1]
				ENDIF
			ENDIF
		ENDIF
		USE
		SELECT (lnSaveArea)
		SET MEMOWIDTH TO lnMemwidth
	ENDPROC
	
	PROCEDURE SavePref
		* Record user preferences in the resource file

		LOCAL filarray, filpos, fileattr, lnSaveArea, i, lnLen
		lnSaveArea = SELECT()

		IF !FILE(SYS(2005))    && resource file not found.
		   RETURN .F.
		ENDIF

		* Don't update if this is a read-only file
		fileattr = ""
		DIMENSION filarray[1]   && resized automatically by ADIR()
		IF ADIR(filarray,SYS(2005)) > 0
		   filpos = ASCAN(filarray,JUSTFNAME(SYS(2005)))
		   IF m.filpos > 0
		      fileattr = filarray[m.filpos,5]
		   ENDIF
		ENDIF
		IF ATC("R",m.fileattr)#0
		   RETURN .F.
		ENDIF

		IF !THIS.OpenResFile()
			RETURN .F.
		ENDIF

		IF IsReadonly()
			USE
			SELECT (lnSaveArea)
			RETURN .f.
		ENDIF

		DIMENSION vfp_Save_aDocFiles[1]
		vfp_Save_aDocFiles[1]=ALLTRIM(THIS.cboADocs.Value)
		FOR i = 1 TO THIS.cboADocs.ListCount
			IF !(ALLTRIM(THIS.cboADocs.List[m.i])==ALLTRIM(THIS.cboADocs.Value))
				lnLen = ALEN[vfp_Save_aDocFiles]
				DIMENSION vfp_Save_aDocFiles[lnLen+1]
				vfp_Save_aDocFiles[lnLen+1] = THIS.cboADocs.List[m.i]
			ENDIF
		ENDFOR

		LOCATE FOR UPPER(ALLTRIM(type)) == "PREFW" ;
		   AND UPPER(ALLTRIM(id)) == RESFILE_ID
	
		IF !FOUND()
		   APPEND BLANK
		   SAVE TO MEMO data ALL LIKE vfp_Save_aDocFiles
		   REPLACE type     WITH "PREFW",;
		           id       WITH RESFILE_ID,;
		           ckval    WITH VAL(SYS(2007,data)),;
		           updated  WITH DATE(),;
		           readonly WITH .F.
		ELSE
		   IF readonly   && resource *record* (not file) is read-only
		      USE
		      SELECT (lnSaveArea)
		      RETURN .F.
		   ELSE
		      SAVE TO MEMO data ALL LIKE vfp_Save_aDocFiles
			  REPLACE ckval WITH VAL(SYS(2007,data))
		   ENDIF
		ENDIF
		USE
		SELECT (lnSaveArea)
		RETURN .T.
	ENDPROC
ENDDEFINE
