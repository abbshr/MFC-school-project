// NamedSearchDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "NamedSearchDlg.h"

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
// CNamedSearchDlg dialog


CNamedSearchDlg::CNamedSearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNamedSearchDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNamedSearchDlg)
	m_Name = _T("");
	//}}AFX_DATA_INIT
}


void CNamedSearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNamedSearchDlg)
	DDX_Control(pDX, IDC_LIST1, m_DisplayBook);
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNamedSearchDlg, CDialog)
	//{{AFX_MSG_MAP(CNamedSearchDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNamedSearchDlg message handlers

void CNamedSearchDlg::OnOK() 
{
	// TODO: Add extra validation here
	

	// TODO: Add extra validation here
	    int i=0,j=0,n=0;

	//Book p[100];

	string inputName;
	
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
    //cout << n << endl;
	fileline.close();

	app->num_Book=n;

	UpdateData(true);
	inputName=m_Name.GetBuffer(0);




	ifstream filein;
	filein.open("Book.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	filein.seekg(0,ios::beg);//让文件指针移动到文件头部



	//m_DisplayBook.InsertItem(0,"");

	for(i=0;i<app->num_Book;i++)
	{
	    filein >> s[0];
	    filein >> s[1];
		filein >> s[2];
		filein >> s[3];
		if(inputName==s[0])
		{

			m_DisplayBook.InsertItem(j,"");
			m_DisplayBook.SetItemText(j,0,s[0]);
			m_DisplayBook.SetItemText(j,1,s[1]);
			m_DisplayBook.SetItemText(j,2,s[2]);
			m_DisplayBook.SetItemText(j,3,s[3]);
			j++;



	        
		}
	}
	m_DisplayBook.SetRedraw(TRUE);



	//CDialog::OnOK();
}

BOOL CNamedSearchDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_DisplayBook.InsertColumn(0,"书名",0,150);
	m_DisplayBook.InsertColumn(1,"编号",0,150);
	m_DisplayBook.InsertColumn(2,"类别",0,150);
	m_DisplayBook.InsertColumn(3,"书目",0,150);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
