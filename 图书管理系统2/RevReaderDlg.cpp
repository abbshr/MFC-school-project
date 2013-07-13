// RevReaderDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "RevReaderDlg.h"
#include "NewReaderDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRevReaderDlg dialog


CRevReaderDlg::CRevReaderDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRevReaderDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRevReaderDlg)
	m_OldName = _T("");
	m_OldIdentifier = _T("");
	m_Name = _T("");
	m_Identifier = _T("");
	//}}AFX_DATA_INIT
}


void CRevReaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRevReaderDlg)
	DDX_Text(pDX, IDC_EDIT1, m_OldName);
	DDX_Text(pDX, IDC_EDIT2, m_OldIdentifier);
	DDX_Text(pDX, IDC_EDIT3, m_Name);
	DDX_Text(pDX, IDC_EDIT5, m_Identifier);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRevReaderDlg, CDialog)
	//{{AFX_MSG_MAP(CRevReaderDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRevReaderDlg message handlers

void CRevReaderDlg::OnOK() 
{
	// TODO: Add extra validation here
	int i=0,j=0,n=0;
	string inputOldName,inputOldIdentifier,inputName,inputIdentifier;

	Reader p[10];

	CMyApp *app = (CMyApp *)AfxGetApp(); //生成指向应用程序类的指针 
	string temp;
    ifstream fileline;
    fileline.open("Reader.txt",ios::in);
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

	app->num_Reader = n;

	ifstream filein;
	filein.open("Reader.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	UpdateData(true);

	for(i=0;i<app->num_Reader;i++)
	{
	    filein >> p[i].strName;
	    filein >> p[i].strIdentifier;
	}

	inputOldName=m_OldName.GetBuffer(0);
	inputOldIdentifier=m_OldIdentifier.GetBuffer(0);
	inputName=m_Name.GetBuffer(0);
	inputIdentifier=m_Identifier.GetBuffer(0);

    for(i=0;i<app->num_Reader;i++)
	{
		if(inputOldName == p[i].strName)
   		{
		    if(inputOldIdentifier != p[i].strIdentifier)
			{
				MessageBox("编号不正确，请重新输入编号！");
				UpdateData(false);
				p[i].strIdentifier="";
				GetDlgItem(IDC_EDIT2)->SetFocus();
				return;
			}
			else
			{
                p[i].strName=inputName;
				p[i].strIdentifier=inputIdentifier;
		    	MessageBox("修改成功！");
				ofstream fileout;
	            fileout.open("Reader.txt");
	            if (!fileout)
				{
                    MessageBox("打开失败！","请重新登录！",MB_OK);
                    abort();
				}
				for(i=0;i<app->num_Reader;i++)
				{
		            fileout << setw(12) << p[i].strName << setw(12) <<p[i].strIdentifier << endl;
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

	filein.close();

	if(j==app->num_Reader)
	{
		MessageBox("输入的要修改的读者姓名不存在","请重新输入",MB_OK);
		m_OldName="";
		m_OldIdentifier="";
		m_Name="";
		m_Identifier="";
		GetDlgItem(IDC_EDIT1)->SetFocus();
		UpdateData(false);
		return;
	}


	CDialog::OnOK();
}
