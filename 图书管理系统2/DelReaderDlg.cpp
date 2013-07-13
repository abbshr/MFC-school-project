// DelReaderDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "DelReaderDlg.h"
#include "NewReaderDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDelReaderDlg dialog


CDelReaderDlg::CDelReaderDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDelReaderDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDelReaderDlg)
	m_Name = _T("");
	//}}AFX_DATA_INIT
}


void CDelReaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDelReaderDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDelReaderDlg, CDialog)
	//{{AFX_MSG_MAP(CDelReaderDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDelReaderDlg message handlers

void CDelReaderDlg::OnOK() 
{
	// TODO: Add extra validation here
		int i=0,j=0,n=0;

	Reader p[100];

	string inputName;

	CMyApp *app = (CMyApp *)AfxGetApp();// ++++++++++++++important

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

	app->num_Reader=n;

	ifstream filein;
	filein.open("Reader.txt");
	if (!filein)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	filein.seekg(0,ios::beg);//让文件指针移动到文件头部

	UpdateData(true);

	for(i=0;i<app->num_Reader;i++)
	{
	    filein >> p[i].strName;
	    filein >> p[i].strIdentifier;
	}

	inputName=m_Name.GetBuffer(0);
    for(i=0;i<app->num_Reader;i++)
	{
		if(inputName==p[i].strName)
		{
			//app->num_Reader--;
			for(j=i;j<app->num_Reader-1;j++)
			{
				p[i]=p[i+1];
			}
			break;
		}
		else
		{
			j++;
		}
	}

	if(j==app->num_Reader)
	{
		MessageBox("输入的读者信息有误","请重新输入",MB_OK);
		m_Name="";
		UpdateData(false);
		GetDlgItem(IDC_EDIT1)->SetFocus();
		return;
	}

	app->num_Reader--;
    MessageBox("删除成功！","恭喜！",MB_OK);

	ofstream fileout;
	fileout.open("Reader.txt");
	if (!fileout)
    {
        MessageBox("打开失败！","请重新登录！",MB_OK);
        abort();
    }

	for(i=0;i<app->num_Reader;i++)
	{
		fileout << setw(12) << p[i].strName << setw(12) << p[i].strIdentifier << endl;
	}
	fileout.close();
	CDialog::OnOK();
}
