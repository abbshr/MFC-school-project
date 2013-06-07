; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMainFrame
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "manager.h"
LastPage=0

ClassCount=9
Class1=CDOLOG
Class2=CDOREG
Class3=CMainFrame
Class4=CManagerApp
Class5=CAboutDlg
Class6=CManagerDoc
Class7=CManagerView

ResourceCount=10
Resource1=IDD_DIALOG2
Resource2=IDR_MAINFRAME
Resource3=IDD_USER_REG
Resource4=IDD_APP_README
Class8=CHelp
Resource5=IDD_USER_LOG
Class9=CCTRLLOG
Resource6=IDD_ADMIN_LOG
Resource7=IDD_DIALOG3
Resource8=IDD_ABOUTBOX
Resource9=IDD_DIALOG1
Resource10=IDD_DIALOG4

[CLS:CDOLOG]
Type=0
BaseClass=CDialog
HeaderFile=DOLOG.h
ImplementationFile=DOLOG.cpp

[CLS:CDOREG]
Type=0
BaseClass=CDialog
HeaderFile=DOREG.h
ImplementationFile=DOREG.cpp

[CLS:CMainFrame]
Type=0
BaseClass=CFrameWnd
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
LastObject=ID_ADMIN_LOG
Filter=T
VirtualFilter=fWC

[CLS:CManagerApp]
Type=0
BaseClass=CWinApp
HeaderFile=manager.h
ImplementationFile=manager.cpp

[CLS:CAboutDlg]
Type=0
BaseClass=CDialog
HeaderFile=manager.cpp
ImplementationFile=manager.cpp
LastObject=CAboutDlg

[CLS:CManagerDoc]
Type=0
BaseClass=CDocument
HeaderFile=managerDoc.h
ImplementationFile=managerDoc.cpp

[CLS:CManagerView]
Type=0
BaseClass=CView
HeaderFile=managerView.h
ImplementationFile=managerView.cpp

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=3
Control1=IDC_STATIC,static,1342308480
Control2=IDC_STATIC,static,1342308352
Control3=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_APP_REG
Command2=ID_USER_LOG
Command3=ID_APP_EXIT
Command4=ID_CTRL_INFO
Command5=ID_CTRL_MESSAGEBOX
Command6=ID_CTRL_SEARCH_BY_NAME
Command7=ID_CTRL_SEARCH_BY_CLASS
Command8=ID_CTRL_SEARCH_BY_AUTHOR
Command9=ID_CTRL_SEARCH_BY_AGE
Command10=ID_CTRL_SEARCH_BY_HOT
Command11=ID_VIEW_LATEST
Command12=ID_VIEW_HOTTEST
Command13=ID_ADMIN_LOG
Command14=ID_ADMIN_CTRL_USERS_ADD
Command15=ID_ADMIN_CTRL_USERS_DELETE
Command16=ID_ADMIN_CTRL_USERS_VIEW
Command17=ID_ADMIN_CTRL_SEARCH_BY_NAME
Command18=ID_ADMIN_CTRL_SEARCH_BY_ID
Command19=ID_ADMIN_CTRL_SEARCH_BY_TRUE
Command20=ID_ADMIN_CTRL_BOOK_ADD
Command21=ID_ADMIN_CTRL_BOOK_DELETE
Command22=ID_ADMIN_CTRL_BOOK_CHG
Command23=ID_APP_ABOUT
Command24=ID_APP_HELP
CommandCount=24

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[CLS:CHelp]
Type=0
HeaderFile=Help.h
ImplementationFile=Help.cpp
BaseClass=CDialog
Filter=D
LastObject=CHelp
VirtualFilter=dWC

[CLS:CCTRLLOG]
Type=0
HeaderFile=CTRLLOG.h
ImplementationFile=CTRLLOG.cpp
BaseClass=CDialog
Filter=D
LastObject=CCTRLLOG
VirtualFilter=dWC

[DLG:IDD_USER_REG]
Type=1
Class=CDOREG
ControlCount=6
Control1=IDREG,button,1342242816
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_REGID,edit,1350631552
Control4=ID_TEXT_REGKEY,edit,1350631584
Control5=ID_LABEL_ID,static,1342308353
Control6=ID_LABEL_KEY,static,1342308353

[DLG:IDD_USER_LOG]
Type=1
Class=CDOLOG
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_LOGID,edit,1350631552
Control4=ID_TEXT_LOGKEY,edit,1350631584
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_ADMIN_LOG]
Type=1
Class=CCTRLLOG
ControlCount=6
Control1=ID_ON_AD_LOG,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_ADLOGID,edit,1350631552
Control4=ID_TEXT_ADLOGKEY,edit,1350631584
Control5=IDC_ID,static,1342308352
Control6=IDC_KEY,static,1342308352

[DLG:IDD_APP_README]
Type=1
Class=CHelp
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308353

[DLG:IDD_DIALOG4]
Type=1
Class=?
ControlCount=6
Control1=ID_ON_AD_LOG,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_ADLOGID,edit,1350631552
Control4=ID_TEXT_ADLOGKEY,edit,1350631584
Control5=IDC_ID,static,1342308352
Control6=IDC_KEY,static,1342308352

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=6
Control1=IDREG,button,1342242816
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_REGID,edit,1350631552
Control4=ID_TEXT_REGKEY,edit,1350631584
Control5=ID_LABEL_ID,static,1342308353
Control6=ID_LABEL_KEY,static,1342308353

[DLG:IDD_DIALOG2]
Type=1
Class=?
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_TEXT_LOGID,edit,1350631552
Control4=ID_TEXT_LOGKEY,edit,1350631584
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG3]
Type=1
Class=?
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308353

