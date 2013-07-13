// DelAdminiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "DelAdminiDlg.h"

#include "LoginDlg.h"

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
// CDelAdminiDlg dialog


CDelAdminiDlg::CDelAdminiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDelAdminiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDelAdminiDlg)
	m_Name = _T("");
	m_Code = _T("");
	//}}AFX_DATA_INIT
}


void CDelAdminiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDelAdminiDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	DDX_Text(pDX, IDC_EDIT2, m_Code);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDelAdminiDlg, CDialog)
	//{{AFX_MSG_MAP(CDelAdminiDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDelAdminiDlg message handlers

void CDelAdminiDlg::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,j=0,n=0;
	string inputName,inputCode;

	Administor p[10];
	Administor temp1;
    //p = new Administor[10];

	CMyApp *app = (CMyApp *)AfxGetApp(); 
    //app->num_Admini = 2; 

	string temp;
    ifstream fileline;
    fileline.open("Administor.txt",ios::in);
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

	app->num_Admini = n;

	ifstream filein;
	filein.open("Administor.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	UpdateData(true);

	for(i=0;i<app->num_Admini;i++)
	{
	    filein >> p[i].strName;
	    filein >> p[i].strCode;
	}

	inputName=m_Name.GetBuffer(0);
	inputCode=m_Code.GetBuffer(0);

	for(i=0;i<app->num_Admini;i++)
    {
        if(p[i].strName == inputName && p[i].strCode == inputCode)
        {
            temp1 = p[i];
            p[i] = p[app->num_Admini-1];
            p[app->num_Admini-1] = temp1;
			MessageBox("删除成功！","恭喜！",MB_OK);
			break;
        }
		else
		{
			j++;
		}
    }
	if(j==app->num_Admini)
	{
		MessageBox("输入的管理员信息有误","请重新输入",MB_OK);
		m_Name="";
		m_Code="";
		UpdateData(false);
		GetDlgItem(IDC_EDIT1)->SetFocus();
		return;
	}

	app->num_Admini--;

	ofstream fileout;
	fileout.open("Administor.txt");
	if (!fileout)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }
	for(i=0;i<app->num_Admini;i++)
	{
	    fileout << setw(12) << p[i].strName << setw(12) <<p[i].strCode << endl;
	}

	CDialog::OnOK();
}
