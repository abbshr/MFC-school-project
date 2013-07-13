// Deluser.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Deluser.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDeluser dialog


CDeluser::CDeluser(CWnd* pParent /*=NULL*/)
	: CDialog(CDeluser::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDeluser)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDeluser::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDeluser)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDeluser, CDialog)
	//{{AFX_MSG_MAP(CDeluser)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDeluser message handlers

void CDeluser::OnOK() 
{
	CString username,name;
	CStringArray newid, newkey, newinfo, newnum;
	int i=0,j;
	GetDlgItemText(IDC_EDIT1,username);	
	CStdioFile file("userid.txt",CFile::modeRead|CFile::typeBinary);
	while (file.ReadString(name)) {
		i++;
		if (name != username) {
			newid.Add(name);
		} else {
			j = i;
		}
	}
	file.SeekToBegin();
	file.Close();
	
	file.Open("usernum.txt",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newnum.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("userkey.txt",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newkey.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("userinfo.txt",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newinfo.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("userid.txt",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("userkey.txt",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("usernum.txt",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("userinfo.txt",CFile::modeWrite|CFile::modeCreate);
	file.Close();

	
	file.Open("userid.txt",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newid.GetSize()) {
		file.WriteString(newid.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("usernum.txt",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newnum.GetSize()) {
		file.WriteString(newnum.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("userinfo.txt",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newinfo.GetSize()) {
		file.WriteString(newinfo.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("userkey.txt",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newkey.GetSize()) {
		file.WriteString(newkey.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	CDialog::OnOK();
}
