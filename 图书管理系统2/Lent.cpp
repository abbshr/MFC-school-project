// Lent.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "Lent.h"
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
#include <sstream>
using namespace std;
/////////////////////////////////////////////////////////////////////////////
// CLent dialog


CLent::CLent(CWnd* pParent /*=NULL*/)
	: CDialog(CLent::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLent)
		m_Name = _T("");
	//}}AFX_DATA_INIT
}


void CLent::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLent)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLent, CDialog)
	//{{AFX_MSG_MAP(CLent)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLent message handlers

void CLent::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,j=0,n=0;

	Book p[100];
	Book temp1;

	string inputName;
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

	//filein.seekg(0,ios::beg);//让文件指针移动到文件头部

	UpdateData(true);

	for(i=0;i<app->num_Book;i++)
	{
	    filein >> p[i].strName;
	    filein >> p[i].strIdentifier;
		filein >> p[i].strClass;
		filein >> p[i].strAcount;
	}

	//app->num_Book--;

	inputName=m_Name.GetBuffer(0);

	for(i=0;i<app->num_Book;i++)
    {
        if(p[i].strName == inputName)
        {
             int a;
            string str;
			p[i].strName = p[i].strName;
			p[i].strIdentifier = p[i].strIdentifier;
			p[i].strClass = p[i].strClass;
			str=p[i].strAcount;
			a=atoi(str.c_str());
			a=a+1;
			stringstream ss;
			ss<<a;
			ss>>p[i].strAcount;
			MessageBox("借阅成功！","恭喜！",MB_OK);
			break;
        }
		else
		{
			j++;
		}
    }

	if(j==app->num_Book)
	{
		MessageBox("输入的书本信息有误","请重新输入",MB_OK);
		m_Name="";
		UpdateData(false);
		GetDlgItem(IDC_EDIT1)->SetFocus();
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
