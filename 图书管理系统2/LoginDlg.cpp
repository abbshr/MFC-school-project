// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
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
// CLoginDlg dialog


CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDlg)
	m_Name = _T("");
	m_Code = _T("");
	//}}AFX_DATA_INIT
}


void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	DDX_Text(pDX, IDC_EDIT2, m_Code);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg message handlers

void CLoginDlg::OnOK() 
{
	// TODO: Add extra validation here
		int i=0,j=0,n=0;
	string inputName,inputCode;

	Administor p[10];
    //p = new Administor[10];

	CMyApp *app = (CMyApp *)AfxGetApp(); 
    //app->num_Admini = 2; 

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
		inputName=m_Name.GetBuffer(0);
	    inputCode=m_Code.GetBuffer(0);
		if(inputName == p[i].strName)
   		{
		    if(inputCode != p[i].strCode)
			{
				MessageBox("密码不正确，请重新输入密码");
				UpdateData(false);
				p[i].strCode="";
				GetDlgItem(IDC_EDIT2)->SetFocus();
				return;
			}
			
			else
			{
		    	MessageBox("登录成功");
		    	CDialog::OnOK();
                return;
			}
		}
		else
		{
			j++;
		}
	
	}
    filein.close();
	if(j==app->num_Admini)
	{
		MessageBox("请重新输入","账户不存在",MB_OK);
		m_Name="";
		m_Code="";
		GetDlgItem(IDC_EDIT1)->SetFocus();
		UpdateData(false);
		return;
	}
	/*p[i].strName="";
	p[i].strCode="";
	UpdateData(false);
	MessageBox("账户不存在","请重新输入",MB_OK);
	GetDlgItem(IDC_EDIT1)->SetFocus();
	GetDlgItem(IDC_EDIT2)->SetFocus();*/
	CDialog::OnOK();
}
