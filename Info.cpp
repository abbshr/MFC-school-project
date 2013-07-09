// Info.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Info.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CInfo dialog


CInfo::CInfo(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo)
	DDX_Control(pDX, IDC_LIST1, m_info);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo, CDialog)
	//{{AFX_MSG_MAP(CInfo)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo message handlers

void CInfo::OnOK() 
{
		
	CDialog::OnOK();
}

void CInfo::OnButton1() 
{
	CString chart;
	CStdioFile file("userinfo.txt",CFile::modeRead|CFile::typeBinary);	
	m_info.ResetContent();
	while (file.ReadString(chart)) {
		m_info.AddString(chart);
	}
	file.SeekToBegin();
	file.Close();	
}
