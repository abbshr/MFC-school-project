// asd.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "asd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Casd dialog


Casd::Casd(CWnd* pParent /*=NULL*/)
	: CDialog(Casd::IDD, pParent)
{
	//{{AFX_DATA_INIT(Casd)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Casd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Casd)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Casd, CDialog)
	//{{AFX_MSG_MAP(Casd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Casd message handlers

void Casd::OnOK() 
{
	int i = 0,j = 0,chartint;
	CString chart,bookname;
	GetDlgItemText(IDC_EDIT1,bookname);
	CStdioFile file("filename.dat",CFile::modeRead|CFile::typeBinary);	
	while(file.ReadString(chart)) {
		i++;
		if (chart == bookname) {
			break;
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("filenum.dat",CFile::modeReadWrite|CFile::typeBinary);	
	file.SeekToBegin();
	while(file.ReadString(chart)) {
		j++;
		if (i == j) {
			chartint = atoi(chart);
			chartint++;
			break;
		}
	}
	file.SeekToBegin();
	file.Close();
		
	CDialog::OnOK();
}
