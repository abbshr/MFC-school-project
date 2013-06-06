// DOLOG.cpp : implementation file
//

#include "stdafx.h"
#include "manager.h"
#include "DOLOG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDOLOG dialog


CDOLOG::CDOLOG(CWnd* pParent /*=NULL*/)
	: CDialog(CDOLOG::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDOLOG)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDOLOG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDOLOG)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDOLOG, CDialog)
	//{{AFX_MSG_MAP(CDOLOG)
	ON_BN_CLICKED(IDOK, OnLog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDOLOG message handlers

void CDOLOG::OnLog() 
{
	CString logid, logkey; 
	GetDlgItemText(ID_TEXT_LOGID, logid);
	GetDlgItemText(ID_TEXT_LOGKEY, logkey);
	CDOLOG::OnLog();
	
}
