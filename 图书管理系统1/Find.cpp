// Find.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Find.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFind dialog


CFind::CFind(CWnd* pParent /*=NULL*/)
	: CDialog(CFind::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFind)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CFind::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFind)
	DDX_Control(pDX, IDC_LIST2, m_num);
	DDX_Control(pDX, IDC_LIST1, m_user);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFind, CDialog)
	//{{AFX_MSG_MAP(CFind)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFind message handlers

void CFind::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString user;
	CString username,number;
	int i = 0, j = 0;
	GetDlgItemText(IDC_EDIT1,username);
	m_user.ResetContent();
	CStdioFile file("userid.txt",CFile::modeRead|CFile::typeBinary);
	while (file.ReadString(user)) {
		i++;
		if (user == username) {
			m_user.AddString(username);
			break;
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("usernum.txt",CFile::modeRead|CFile::typeBinary);
	m_num.ResetContent();
	while (file.ReadString(number)) {
		j++;
		if (i==j) {
			m_num.AddString(number);
			break;
		}
	}
	file.SeekToBegin();
	file.Close();
}
