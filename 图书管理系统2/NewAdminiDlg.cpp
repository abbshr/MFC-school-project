// NewAdminiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "NewAdminiDlg.h"
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
// CNewAdminiDlg dialog


CNewAdminiDlg::CNewAdminiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNewAdminiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewAdminiDlg)
	m_Name = _T("");
	m_Code = _T("");
	//}}AFX_DATA_INIT
}


void CNewAdminiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewAdminiDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	DDX_Text(pDX, IDC_EDIT2, m_Code);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewAdminiDlg, CDialog)
	//{{AFX_MSG_MAP(CNewAdminiDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewAdminiDlg message handlers

void CNewAdminiDlg::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,n=0;
	string inputName,inputCode;

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

	inputName=m_Name.GetBuffer(0);
	inputCode=m_Code.GetBuffer(0);
	
    app->num_Admini++;
    p[app->num_Admini-1].strName=inputName;
	p[app->num_Admini-1].strCode=inputCode;

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
	MessageBox("添加成功！","恭喜！",MB_OK);



	CDialog::OnOK();
}
