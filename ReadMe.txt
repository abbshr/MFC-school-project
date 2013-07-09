========================================================================
       MICROSOFT FOUNDATION CLASS LIBRARY : library
========================================================================

###各位同学大家好，这里是一个被MFC坑了的苦逼学生，院里的‘程序设计实践课’可谓是要多坑有多坑啊~~~。。

这是个用上个世纪流行的库————MFC所编写的**图书管理系统**，苦逼的界面、苦逼的MFCAPI、苦逼的功能。。。

今天是7月9号，也是deadline，我忙乎了整整一下午终于把之前两个月丝毫未动的任务完成了，不过做得相当水。。。

不过现在不要管水不水了，能做完就不错了。。。MFC坑人坑到家了。。。。。

今天特此将这个纸糊的建筑送到git上，不是为了发牢骚，主要目的是不想下届的再次被坑了，感觉MFC真没啥含金量，真不如好好学学C++的核心东西。。

13级往后的同学，如果你们在为mfc焦头烂额时无意间翻到了这个傻傻的PO，它应该会帮到你们的~

AppWizard has created this library application for you.  This application
not only demonstrates the basics of using the Microsoft Foundation classes
but is also a starting point for writing your application.

This file contains a summary of what you will find in each of the files that
make up your library application.

library.dsp
    This file (the project file) contains information at the project level and
    is used to build a single project or subproject. Other users can share the
    project (.dsp) file, but they should export the makefiles locally.

library.h
    This is the main header file for the application.  It includes other
    project specific headers (including Resource.h) and declares the
    CLibraryApp application class.

library.cpp
    This is the main application source file that contains the application
    class CLibraryApp.

library.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
	Visual C++.

library.clw
    This file contains information used by ClassWizard to edit existing
    classes or add new classes.  ClassWizard also uses this file to store
    information needed to create and edit message maps and dialog data
    maps and to create prototype member functions.

res\library.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file library.rc.

res\library.rc2
    This file contains resources that are not edited by Microsoft 
	Visual C++.  You should place all resources not editable by
	the resource editor in this file.




/////////////////////////////////////////////////////////////////////////////

AppWizard creates one dialog class:

libraryDlg.h, libraryDlg.cpp - the dialog
    These files contain your CLibraryDlg class.  This class defines
    the behavior of your application's main dialog.  The dialog's
    template is in library.rc, which can be edited in Microsoft
	Visual C++.


/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named library.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Visual C++ reads and updates this file.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

If your application uses MFC in a shared DLL, and your application is 
in a language other than the operating system's current language, you
will need to copy the corresponding localized resources MFC42XXX.DLL
from the Microsoft Visual C++ CD-ROM onto the system or system32 directory,
and rename it to be MFCLOC.DLL.  ("XXX" stands for the language abbreviation.
For example, MFC42DEU.DLL contains resources translated to German.)  If you
don't do this, some of the UI elements of your application will remain in the
language of the operating system.

/////////////////////////////////////////////////////////////////////////////
