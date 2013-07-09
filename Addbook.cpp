// Addbook.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Addbook.h"
#include "master.h"
#include "Book.h"
#include "fstream.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAddbook dialog


CAddbook::CAddbook(CWnd* pParent /*=NULL*/)
	: CDialog(CAddbook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddbook)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAddbook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddbook)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAddbook, CDialog)
	//{{AFX_MSG_MAP(CAddbook)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddbook message handlers

void CAddbook::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}



void CAddbook::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAddbook::OnOK() 
{
	// TODO: Add extra validation here
	CString bookname,booktype,booknum;
	CString booknumber;
	GetDlgItemText(IDC_EDIT1,bookname);
    GetDlgItemText(IDC_EDIT3,booknumber);
	GetDlgItemText(IDC_EDIT4,booktype);
	GetDlgItemText(IDC_EDIT2,booknum);
	CStdioFile file("filename.dat",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
    file.WriteString(bookname+'\n');
	file.Close();

	file.Open("fileid.dat",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
	file.WriteString(booknum+'\n');
	file.Close();

	file.Open("fileclass.dat",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
	file.WriteString(booktype+'\n');
	file.Close();

	file.Open("filenum.dat",CFile::modeWrite|CFile::typeBinary);
	file.SeekToEnd();
	file.WriteString(booknumber+'\n');
	file.Close();

	CDialog::OnOK();
}
