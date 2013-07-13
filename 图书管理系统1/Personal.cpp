// Personal.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Personal.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPersonal dialog


CPersonal::CPersonal(CWnd* pParent /*=NULL*/)
	: CDialog(CPersonal::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPersonal)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CPersonal::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPersonal)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPersonal, CDialog)
	//{{AFX_MSG_MAP(CPersonal)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPersonal message handlers

void CPersonal::OnOK() 
{
	CString userid,userkey;
	GetDlgItemText(IDC_EDIT1,userid);
    GetDlgItemText(IDC_EDIT2,userkey);	
	CStdioFile file("userid.txt",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
    file.WriteString(userid+'\n');
	file.Close();

	file.Open("userkey.txt",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
    file.WriteString(userkey+'\n');
	file.Close();

	file.Open("userinfo.txt",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
    file.WriteString("info"+'\n');
	file.Close();

	file.Open("usernum.txt",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
    file.WriteString("0"+'\n');
	file.Close();

	CDialog::OnOK();
}
