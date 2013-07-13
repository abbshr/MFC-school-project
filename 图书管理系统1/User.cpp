// User.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "User.h"
#include "Borrow.h"
#include "asd.h"
#include "Info.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CUser dialog


CUser::CUser(CWnd* pParent /*=NULL*/)
	: CDialog(CUser::IDD, pParent)
{
	//{{AFX_DATA_INIT(CUser)
	//}}AFX_DATA_INIT
}


void CUser::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CUser)
	DDX_Control(pDX, IDC_LIST2, m_number);
	DDX_Control(pDX, IDC_LIST1, m_booklist);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CUser, CDialog)
	//{{AFX_MSG_MAP(CUser)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CUser message handlers

void CUser::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

void CUser::OnButton1() 
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

	m_number.ResetContent();
	while (file.ReadString(chart)) {
		m_number.AddString(chart);
	}
	file.SeekToBegin();
	file.Close();
}

void CUser::OnButton3() 
{
	CBorrow borrow;
	borrow.DoModal();	
}

void CUser::OnButton11() 
{
	Casd asd;
	asd.DoModal();
}

void CUser::OnButton4() 
{
	CInfo info;
	info.DoModal();
}
