// CTRLLOG.cpp : implementation file
//

#include "stdafx.h"
#include "manager.h"
#include "CTRLLOG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCTRLLOG dialog


CCTRLLOG::CCTRLLOG(CWnd* pParent /*=NULL*/)
	: CDialog(CCTRLLOG::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCTRLLOG)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CCTRLLOG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCTRLLOG)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCTRLLOG, CDialog)
	//{{AFX_MSG_MAP(CCTRLLOG)
	ON_BN_CLICKED(IDOK, OnAdminLog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCTRLLOG message handlers

void CCTRLLOG::OnAdminLog() 
{
	CString adlogid, adlogkey; 
	GetDlgItemText(ID_TEXT_ADLOGID, adlogid);
	GetDlgItemText(ID_TEXT_ADLOGKEY, adlogkey);
	CCTRLLOG::OnAdminLog();	
}
