// DisplayAllBookDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "DisplayAllBookDlg.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include <stdlib.h>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDisplayAllBookDlg dialog


CDisplayAllBookDlg::CDisplayAllBookDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDisplayAllBookDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDisplayAllBookDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDisplayAllBookDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDisplayAllBookDlg)
	DDX_Control(pDX, IDC_LIST1, m_DisplayBook);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDisplayAllBookDlg, CDialog)
	//{{AFX_MSG_MAP(CDisplayAllBookDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDisplayAllBookDlg message handlers

BOOL CDisplayAllBookDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_DisplayBook.InsertColumn(0,"书名",0,150);
	m_DisplayBook.InsertColumn(1,"编号",0,150);
	m_DisplayBook.InsertColumn(2,"类别",0,150);
	m_DisplayBook.InsertColumn(3,"书目",0,150);

	int i=0,j=0,n=0;

	char s[4][20];
	CMyApp *app = (CMyApp *)AfxGetApp();// ++++++++++++++important

	string temp;
    ifstream fileline;
    fileline.open("Book.txt",ios::in);
    if (!fileline)
    {
        cout<<"open error!"<<endl;
        abort();
    }
    while(getline(fileline,temp))
    {
       n++;
    }
   
	fileline.close();

	app->num_Book=n;


	ifstream filein;
	filein.open("Book.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	for(i=0;i<app->num_Book;i++)
	{
	    filein >> s[0];
	    filein >> s[1];
		filein >> s[2];
		filein >> s[3];

			m_DisplayBook.InsertItem(i,"");
			m_DisplayBook.SetItemText(i,0,s[0]);
			m_DisplayBook.SetItemText(i,1,s[1]);
			m_DisplayBook.SetItemText(i,2,s[2]);
			m_DisplayBook.SetItemText(i,3,s[3]);


	}




	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CDisplayAllBookDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
