; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CFind
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "library.h"

ClassCount=15
Class1=CLibraryApp
Class2=CLibraryDlg
Class3=CAboutDlg

ResourceCount=15
Resource1=IDD_DIALOG10
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=CMaster
Resource4=IDD_DIALOG4
Class5=CUser
Resource5=IDD_DIALOG9
Class6=CAddbook
Class7=CBook
Resource6=IDD_DIALOG3
Resource7=IDD_DIALOG1
Class8=CChangebook
Class9=CDebook
Resource8=IDD_DIALOG7
Class10=CShowAllBooks
Resource9=IDD_DIALOG8
Class11=CPersonal
Resource10=IDD_DIALOG5
Class12=CBorrow
Resource11=IDD_LIBRARY_DIALOG
Resource12=IDD_DIALOG6
Class13=Casd
Resource13=IDD_DIALOG11
Class14=CInfo
Resource14=IDD_DIALOG2
Class15=CFind
Resource15=IDD_DIALOG12

[CLS:CLibraryApp]
Type=0
HeaderFile=library.h
ImplementationFile=library.cpp
Filter=N

[CLS:CLibraryDlg]
Type=0
HeaderFile=libraryDlg.h
ImplementationFile=libraryDlg.cpp
Filter=D
LastObject=CLibraryDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=libraryDlg.h
ImplementationFile=libraryDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_LIBRARY_DIALOG]
Type=1
Class=CLibraryDlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631584
Control7=IDC_RADIO1,button,1342210057
Control8=IDC_RADIO2,button,1342177289

[DLG:IDD_DIALOG1]
Type=1
Class=CMaster
ControlCount=10
Control1=IDC_BUTTON5,button,1342242816
Control2=IDC_BUTTON6,button,1342242816
Control3=IDC_BUTTON7,button,1342242816
Control4=IDC_BUTTON8,button,1342242816
Control5=IDC_BUTTON9,button,1342242816
Control6=IDC_BUTTON10,button,1342242816
Control7=IDC_BUTTON2,button,1342242816
Control8=IDC_STATIC,static,1342308353
Control9=IDC_STATIC,static,1342308353
Control10=IDC_BUTTON1,button,1342242816

[CLS:CMaster]
Type=0
HeaderFile=Master.h
ImplementationFile=Master.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON2
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CUser
ControlCount=8
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON3,button,1342242816
Control3=IDC_BUTTON4,button,1342242816
Control4=IDC_BUTTON11,button,1342242816
Control5=IDC_LIST1,listbox,1352728835
Control6=IDC_LIST2,listbox,1352728835
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352

[CLS:CUser]
Type=0
HeaderFile=User.h
ImplementationFile=User.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_LIST2

[DLG:IDD_DIALOG3]
Type=1
Class=CAddbook
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT1,edit,1350631552
Control8=IDC_EDIT2,edit,1350631552
Control9=IDC_EDIT3,edit,1350631552
Control10=IDC_EDIT4,edit,1350631552

[CLS:CAddbook]
Type=0
HeaderFile=Addbook.h
ImplementationFile=Addbook.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CAddbook

[CLS:CBook]
Type=0
HeaderFile=Book.h
ImplementationFile=Book.cpp
BaseClass=CAnimateCtrl
Filter=W
LastObject=CBook

[DLG:IDD_DIALOG4]
Type=1
Class=CChangebook
ControlCount=8
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT2,edit,1350631552
Control4=IDC_LIST1,listbox,1352728835
Control5=IDC_STATIC,static,1342308352
Control6=IDC_LIST2,listbox,1352728835
Control7=IDC_STATIC,static,1342308352
Control8=IDC_BUTTON1,button,1342242816

[DLG:IDD_DIALOG5]
Type=1
Class=CDebook
ControlCount=7
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_BUTTON1,button,1342242816
Control5=IDC_LIST1,listbox,1352728835
Control6=IDC_LIST2,listbox,1352728835
Control7=IDC_STATIC,static,1342308352

[CLS:CChangebook]
Type=0
HeaderFile=Changebook.h
ImplementationFile=Changebook.cpp
BaseClass=CDialog
Filter=D
LastObject=CChangebook
VirtualFilter=dWC

[CLS:CDebook]
Type=0
HeaderFile=Debook.h
ImplementationFile=Debook.cpp
BaseClass=CDialog
Filter=D
LastObject=CDebook
VirtualFilter=dWC

[DLG:IDD_DIALOG6]
Type=1
Class=CShowAllBooks
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_LIST1,listbox,1352728835
Control5=IDC_STATIC,static,1342308353
Control6=IDC_LIST2,listbox,1352728835

[CLS:CShowAllBooks]
Type=0
HeaderFile=ShowAllBooks.h
ImplementationFile=ShowAllBooks.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_BUTTON1
VirtualFilter=dWC

[DLG:IDD_DIALOG7]
Type=1
Class=CPersonal
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_EDIT2,edit,1350631584

[CLS:CPersonal]
Type=0
HeaderFile=Personal.h
ImplementationFile=Personal.cpp
BaseClass=CDialog
Filter=D
LastObject=CPersonal
VirtualFilter=dWC

[DLG:IDD_DIALOG8]
Type=1
Class=CBorrow
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[CLS:CBorrow]
Type=0
HeaderFile=Borrow.h
ImplementationFile=Borrow.cpp
BaseClass=CDialog
Filter=D
LastObject=CBorrow
VirtualFilter=dWC

[DLG:IDD_DIALOG9]
Type=1
Class=?
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[DLG:IDD_DIALOG10]
Type=1
Class=Casd
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552

[CLS:Casd]
Type=0
HeaderFile=asd.h
ImplementationFile=asd.cpp
BaseClass=CDialog
Filter=D
LastObject=Casd
VirtualFilter=dWC

[DLG:IDD_DIALOG11]
Type=1
Class=CInfo
ControlCount=14
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT2,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT3,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT4,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT7,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_LIST1,listbox,1352728835
Control14=IDC_BUTTON1,button,1342242816

[CLS:CInfo]
Type=0
HeaderFile=Info.h
ImplementationFile=Info.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DIALOG12]
Type=1
Class=CFind
ControlCount=8
Control1=IDCANCEL,button,1342242816
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_LIST1,listbox,1352728835
Control6=IDC_LIST2,listbox,1352728835
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352

[CLS:CFind]
Type=0
HeaderFile=Find.h
ImplementationFile=Find.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

