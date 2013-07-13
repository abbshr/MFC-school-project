// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "图书管理系统.h"

#include "MainFrm.h"

#include "NewBookDlg.h"
#include "RevBookDlg.h"
#include "DelBookDlg.h"
#include "NewAdminiDlg.h"
#include "RevAdminiDlg.h"
#include "DelAdminiDlg.h"
#include "NewReaderDlg.h"
#include "RevReaderDlg.h"
#include "DelReaderDlg.h"
#include "ClassifiedSearchDlg.h"
#include "NamedSearchDlg.h"
#include "DisplayAllBookDlg.h"
#include "Borrow.h"
#include "Lent.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_CLOSE()
	ON_COMMAND(ID_NEWADMINISTOR, OnNewadministor)
	ON_COMMAND(ID_REVADMINISTOR, OnRevadministor)
	ON_COMMAND(ID_DELADMINISTOR, OnDeladministor)
	ON_COMMAND(ID_NEWBOOK, OnNewbook)
	ON_COMMAND(ID_REVBOOK, OnRevbook)
	ON_COMMAND(ID_DELBOOK, OnDelbook)
	ON_COMMAND(ID_NEWREADER, OnNewreader)
	ON_COMMAND(ID_REVREADER, OnRevreader)
	ON_COMMAND(ID_DELREADER, OnDelreader)
	ON_COMMAND(ID_CLASSIFIEDSEARCH, OnClassifiedsearch)
	ON_COMMAND(ID_NAMEDSEARCH, OnNamedsearch)
	ON_COMMAND(ID_DISPLAYALLBOOK, OnDisplayallbook)
	ON_COMMAND(ID_MENUITEM32785, OnMenuitem32785)
	ON_COMMAND(ID_MENUITEM32786, OnMenuitem32786)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	if(AfxMessageBox("您确定要退出系统吗?",MB_OKCANCEL)==IDCANCEL)
	{
		return;
	}			
	CFrameWnd::OnClose();
}

void CMainFrame::OnNewadministor() 
{
	// TODO: Add your command handler code here
	CNewAdminiDlg Dlg;
    Dlg.DoModal();
	
}

void CMainFrame::OnRevadministor() 
{
	// TODO: Add your command handler code here
	CRevAdminiDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnDeladministor() 
{
	// TODO: Add your command handler code here
	CDelAdminiDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnNewbook() 
{
	// TODO: Add your command handler code here
	CNewBookDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnRevbook() 
{
	// TODO: Add your command handler code here
	CRevBookDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnDelbook() 
{
	// TODO: Add your command handler code here
	CDelBookDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnNewreader() 
{
	// TODO: Add your command handler code here
	CNewReaderDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnRevreader() 
{
	// TODO: Add your command handler code here
	CRevReaderDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnDelreader() 
{
	// TODO: Add your command handler code here
	CDelReaderDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnClassifiedsearch() 
{
	// TODO: Add your command handler code here
	CClassifiedSearchDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnNamedsearch() 
{
	// TODO: Add your command handler code here
	CNamedSearchDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnDisplayallbook() 
{
	// TODO: Add your command handler code here
	CDisplayAllBookDlg Dlg;
    Dlg.DoModal();
}

void CMainFrame::OnMenuitem32785() 
{
	// TODO: Add your command handler code here
	CBorrow Dlg;
	Dlg.DoModal();
}

void CMainFrame::OnMenuitem32786() 
{
	// TODO: Add your command handler code here
	CLent Dlg;
	Dlg.DoModal();
}
