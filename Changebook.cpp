// Changebook.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Changebook.h"
#include "Addbook.h"
#include "master.h"
#include "Book.h"
#include "fstream.h"
#include "Public.h"
CBook b2;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChangebook dialog


CChangebook::CChangebook(CWnd* pParent /*=NULL*/)
: CDialog(CChangebook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChangebook)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChangebook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChangebook)
	DDX_Control(pDX, IDC_LIST2, m_number);
	DDX_Control(pDX, IDC_LIST1, m_book);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChangebook, CDialog)
//{{AFX_MSG_MAP(CChangebook)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChangebook message handlers

void CChangebook::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void CChangebook::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CString bookname,booknumber;
	CString name, number;
	int i = 0, j = 0;
	GetDlgItemText(IDC_EDIT2,bookname);
	m_book.ResetContent();
	m_number.ResetContent();

	CStdioFile file("filename.dat",CFile::modeRead|CFile::typeBinary);
	file.SeekToBegin();
	while (file.ReadString(name)) {
		i++;
		if (name == bookname) {
			m_book.AddString(name);
			break;
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("filenum.dat",CFile::modeRead|CFile::typeBinary);
	file.SeekToBegin();
	while (file.ReadString(number)) {
		j++;
		if (i==j) {
			m_number.AddString(number);
			break;
		}
	}
	
	file.SeekToBegin();
	file.Close();

}
