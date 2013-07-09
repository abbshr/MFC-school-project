// Lent.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Lent.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLent dialog


CLent::CLent(CWnd* pParent /*=NULL*/)
	: CDialog(CLent::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLent)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CLent::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLent)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLent, CDialog)
	//{{AFX_MSG_MAP(CLent)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLent message handlers
