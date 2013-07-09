// Borrow.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Borrow.h"
#include <stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBorrow dialog


CBorrow::CBorrow(CWnd* pParent /*=NULL*/)
	: CDialog(CBorrow::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBorrow)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CBorrow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBorrow)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBorrow, CDialog)
	//{{AFX_MSG_MAP(CBorrow)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBorrow message handlers

void CBorrow::OnOK() 
{
	int i = 0,j=0,chartint;
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
			if (chartint > 0)
				chartint--;
			break;
		}
	}
	file.SeekToBegin();
	file.Close();

	CDialog::OnOK();
}
