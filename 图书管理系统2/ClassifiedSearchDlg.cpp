// ClassifiedSearchDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "ClassifiedSearchDlg.h"
//#include "NewBookDlg.h"

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
// CClassifiedSearchDlg dialog


CClassifiedSearchDlg::CClassifiedSearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CClassifiedSearchDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CClassifiedSearchDlg)
	m_CaseIndex = -1;
	//}}AFX_DATA_INIT
}


void CClassifiedSearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CClassifiedSearchDlg)
	DDX_Control(pDX, IDC_LIST1, m_DisplayBook);
	DDX_Radio(pDX, IDC_RADIO1, m_CaseIndex);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CClassifiedSearchDlg, CDialog)
	//{{AFX_MSG_MAP(CClassifiedSearchDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClassifiedSearchDlg message handlers


BOOL CClassifiedSearchDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_DisplayBook.InsertColumn(0,"书名",0,150);
	m_DisplayBook.InsertColumn(1,"编号",0,150);
	m_DisplayBook.InsertColumn(2,"类别",0,150);
	m_DisplayBook.InsertColumn(3,"书目",0,150);

	((CButton*)GetDlgItem(IDC_RADIO1))->SetCheck(1);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CClassifiedSearchDlg::OnOK() 
{
	// TODO: Add extra validation here
	    int i=0,j=0,n=0;

	//Book p[100];

	string inputClass;
	string Book_Class[7]={"文学艺术","人文社科","经济管理","励志与成功","科技","生活","教材教辅"};
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

	for(j=0;j<7;j++)
	{
	    if(m_CaseIndex == j)
		{
			inputClass=Book_Class[j];
			break;
		}
	}

	j=0;//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


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
		if(inputClass==s[2])
		{

			m_DisplayBook.InsertItem(j,"");
			m_DisplayBook.SetItemText(j,0,s[0]);
			m_DisplayBook.SetItemText(j,1,s[1]);
			m_DisplayBook.SetItemText(j,2,s[2]);
			m_DisplayBook.SetItemText(j,3,s[3]);
			j++;



	        //fileout << setw(18) << p[i].strName << setw(12) << p[i].strIdentifier << setw(12) << p[i].strClass 
	        //<< setw(8) << p[i].strAcount << endl;
		}
	}
	m_DisplayBook.SetRedraw(TRUE);
	//CDialog::OnOK();
}
