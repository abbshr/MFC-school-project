// Debook.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Debook.h"
#include "master.h"
#include "fstream.h"
#include "Book.h"

CBook b3;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDebook dialog


CDebook::CDebook(CWnd* pParent /*=NULL*/)
	: CDialog(CDebook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDebook)
	//}}AFX_DATA_INIT
}


void CDebook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDebook)
	DDX_Control(pDX, IDC_LIST2, m_book);
	DDX_Control(pDX, IDC_LIST1, m_num);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDebook, CDialog)
	//{{AFX_MSG_MAP(CDebook)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDebook message handlers

void CDebook::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

void CDebook::OnOK() 
{
	// TODO: Add extra validation here
	CDialog::OnOK();
}

void CDebook::OnButton1() 
{
	CString chart, cho[20],classname;
	int i = 0,k = 0,s=0,c = -1,j[100];
	GetDlgItemText(IDC_EDIT1,classname);
CStdioFile file("fileclass.dat",CFile::modeRead|CFile::typeBinary);	
	while (file.ReadString(chart)) {
		if (chart == classname) {
			i++;
			j[c++] = i;
		}
	}
	file.SeekToBegin();
	file.Close();
file.Open("filename.dat",CFile::modeRead|CFile::typeBinary);	
	m_book.ResetContent();
	while (file.ReadString(chart)) {
		k++;
		if (k == j[s]) {
			cho[s] = chart;
			s++;
		}
	}
	for (i = 0; i < s; i++) {
		m_book.AddString(cho[i]);
	}
	file.SeekToBegin();
	file.Close();

file.Open("filenum.dat",CFile::modeRead|CFile::typeBinary);	
	s = 0;
	m_num.ResetContent();
	while (file.ReadString(chart)) {
		k++;
		if (k == j[s]) {
			cho[s] = chart;
			s++;
		}
	}
	for (i = 0; i < s; i++) {
		m_num.AddString(cho[i]);
	}
	file.SeekToBegin();
	file.Close();
}
