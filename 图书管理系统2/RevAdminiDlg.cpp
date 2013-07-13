// RevAdminiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "RevAdminiDlg.h"
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
// CRevAdminiDlg dialog


CRevAdminiDlg::CRevAdminiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRevAdminiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRevAdminiDlg)
	m_oldName = _T("");
	m_oldCode = _T("");
	m_Name = _T("");
	m_Code = _T("");
	//}}AFX_DATA_INIT
}


void CRevAdminiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRevAdminiDlg)
	DDX_Text(pDX, IDC_EDIT1, m_oldName);
	DDX_Text(pDX, IDC_EDIT2, m_oldCode);
	DDX_Text(pDX, IDC_EDIT3, m_Name);
	DDX_Text(pDX, IDC_EDIT5, m_Code);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRevAdminiDlg, CDialog)
	//{{AFX_MSG_MAP(CRevAdminiDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRevAdminiDlg message handlers

void CRevAdminiDlg::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,j=0,n=0;
	string inputoldName,inputoldCode,inputName,inputCode;

	Administor p[10];
    //p = new Administor[10];

	CMyApp *app = (CMyApp *)AfxGetApp(); //生成指向应用程序类的指针 
    //app->num_Admini = 2; //访问变量x

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

	inputoldName=m_oldName.GetBuffer(0);
	inputoldCode=m_oldCode.GetBuffer(0);
	inputName=m_Name.GetBuffer(0);
	inputCode=m_Code.GetBuffer(0);

    for(i=0;i<app->num_Admini;i++)
	{
		if(inputoldName == p[i].strName)
   		{
		    if(inputoldCode != p[i].strCode)
			{
				MessageBox("密码不正确，请重新输入密码！");
				UpdateData(false);
				p[i].strCode="";
				GetDlgItem(IDC_EDIT2)->SetFocus();
				return;
			}
			else
			{
                p[i].strName=inputName;
				p[i].strCode=inputCode;
		    	MessageBox("修改成功！");
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
                return;
			}
		}
		else
		{
			j++;
		}
	}
	if(j==app->num_Admini)
	{
		MessageBox("输入的要修改的管理员姓名不存在","请重新输入",MB_OK);
		m_oldName="";
		m_oldCode="";
		m_Name="";
		m_Code="";
		GetDlgItem(IDC_EDIT1)->SetFocus();
		UpdateData(false);
		return;


	}

	filein.close();

	UpdateData(false);
	MessageBox("账户不存在","请重新输入",MB_OK);
	GetDlgItem(IDC_EDIT1)->SetFocus();
	GetDlgItem(IDC_EDIT2)->SetFocus();
	CDialog::OnOK();
}
