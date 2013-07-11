// ShowAllBooks.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "master.h"
#include "user.h"
#include "ShowAllBooks.h"
#include "Public.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CShowAllBooks dialog


CShowAllBooks::CShowAllBooks(CWnd* pParent /*=NULL*/)
	: CDialog(CShowAllBooks::IDD, pParent)
{
	//{{AFX_DATA_INIT(CShowAllBooks)
	//}}AFX_DATA_INIT
}


void CShowAllBooks::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CShowAllBooks)
	DDX_Control(pDX, IDC_LIST2, m_num);
	DDX_Control(pDX, IDC_LIST1, m_booklist);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CShowAllBooks, CDialog)
	//{{AFX_MSG_MAP(CShowAllBooks)
	ON_BN_CLICKED(IDC_BUTTON1, OnCheckAll)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CShowAllBooks message handlers

void CShowAllBooks::OnCheckAll() 
{
		CString chart;
	CStdioFile file("filename.dat",CFile::modeRead|CFile::typeBinary);	
	m_booklist.ResetContent();
	while (file.ReadString(chart)) {
		m_booklist.AddString(chart);
	}
	file.SeekToBegin();
    file.Close();

	file.Open("filenum.dat",CFile::modeRead|CFile::typeBinary);	
	m_num.ResetContent();
	while (file.ReadString(chart)) {
		m_num.AddString(chart);
	}
	file.SeekToBegin();
    file.Close();
}
