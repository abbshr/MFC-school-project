// DOREG.cpp : implementation file
//

#include "stdafx.h"
#include "manager.h"
#include "DOREG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDOREG dialog


CDOREG::CDOREG(CWnd* pParent /*=NULL*/)
	: CDialog(CDOREG::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDOREG)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDOREG::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDOREG)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDOREG, CDialog)
	//{{AFX_MSG_MAP(CDOREG)
	ON_BN_CLICKED(IDOK, OnReg)
	ON_BN_CLICKED(IDREG, OnReg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDOREG message handlers

void CDOREG::OnReg() 
{
	CString regid, regkey;
	GetDlgItemText(ID_TEXT_REGID, regid);
	GetDlgItemText(ID_TEXT_REGKEY, regkey);
	CDOREG::OnReg();	
}
