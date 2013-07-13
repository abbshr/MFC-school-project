// RevBookDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "RevBookDlg.h"
#include "NewBookDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include <stdlib.h>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CRevBookDlg dialog


CRevBookDlg::CRevBookDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRevBookDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRevBookDlg)
	m_oldName = _T("");
	m_CaseIndex = -1;
	m_Name = _T("");
	m_Identifier = _T("");
	m_Acount = _T("");
	//}}AFX_DATA_INIT
}


void CRevBookDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRevBookDlg)
	DDX_Text(pDX, IDC_EDIT1, m_oldName);
	DDX_Radio(pDX, IDC_RADIO1, m_CaseIndex);
	DDX_Text(pDX, IDC_EDIT2, m_Name);
	DDX_Text(pDX, IDC_EDIT3, m_Identifier);
	DDX_Text(pDX, IDC_EDIT4, m_Acount);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRevBookDlg, CDialog)
	//{{AFX_MSG_MAP(CRevBookDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRevBookDlg message handlers

void CRevBookDlg::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,j=0,n=0;

	Book p[100];
	string inputoldName,inputName,inputIdentifier,inputClass,inputAcount;

	string Book_Class[7]={"文学艺术","人文社科","经济管理","励志与成功","科技","生活","教材教辅"};

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

	ifstream filein;
	filein.open("Book.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	filein.seekg(0,ios::beg);//让文件指针移动到文件头部

	UpdateData(true);

	for(i=0;i<app->num_Book;i++)
	{
	    filein >> p[i].strName;
	    filein >> p[i].strIdentifier;
		filein >> p[i].strClass;
		filein >> p[i].strAcount;
	}

	inputoldName=m_oldName.GetBuffer(0);
	inputName=m_Name.GetBuffer(0);
	inputIdentifier=m_Identifier.GetBuffer(0);
    inputAcount=m_Acount.GetBuffer(0);
	

	for(j=0;j<7;j++)
	{
	    if(m_CaseIndex == j)
		{
			inputClass = Book_Class[j];
			//MessageBox("添加成功！","恭喜！",MB_OK);
			break;
		}
	}

	j=0;//very important!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	for(i=0;i<app->num_Book;i++)
	{
	    if(inputoldName == p[i].strName)
		{
			p[i].strName = inputName;
			p[i].strIdentifier = inputIdentifier;
			p[i].strClass = inputClass;
			p[i].strAcount = inputAcount;
			MessageBox("修改成功！","恭喜！",MB_OK);
			break;
		}
		else
		{
			j++;
		}
	}
	filein.close();
	if(j==app->num_Book)
	{
		MessageBox("输入的要修改的书本名称不存在","请重新输入",MB_OK);
		m_oldName="";
		m_Name="";
		m_Identifier="";
		m_Acount="";
		m_CaseIndex=0;
		GetDlgItem(IDC_EDIT1)->SetFocus();
		UpdateData(false);
		return;
	}

	ofstream fileout;
	fileout.open("Book.txt");
	if (!fileout)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	for(i=0;i<app->num_Book;i++)
	{
		fileout << setw(18) << p[i].strName << setw(12) << p[i].strIdentifier << setw(12) << p[i].strClass 
			<< setw(8) << p[i].strAcount << endl;
	}

	CDialog::OnOK();
}

BOOL CRevBookDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	((CButton*)GetDlgItem(IDC_RADIO1))->SetCheck(1);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
