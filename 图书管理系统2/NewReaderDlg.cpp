// NewReaderDlg.cpp : implementation file
//

#include "stdafx.h"
#include "图书管理系统.h"
#include "NewReaderDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewReaderDlg dialog


CNewReaderDlg::CNewReaderDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNewReaderDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewReaderDlg)
	m_Name = _T("");
	m_Identifier = _T("");
	//}}AFX_DATA_INIT
}


void CNewReaderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewReaderDlg)
	DDX_Text(pDX, IDC_EDIT1, m_Name);
	DDX_Text(pDX, IDC_EDIT2, m_Identifier);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewReaderDlg, CDialog)
	//{{AFX_MSG_MAP(CNewReaderDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewReaderDlg message handlers

void CNewReaderDlg::OnOK() 
{
	// TODO: Add extra validation here
		int i=0,j=0,n=0;

	Reader p[100];

	string inputName,inputIdentifier;

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

	app->num_Reader++;

	inputName=m_Name.GetBuffer(0);
	inputIdentifier=m_Identifier.GetBuffer(0);
    p[app->num_Reader-1].strName = inputName;
	p[app->num_Reader-1].strIdentifier = inputIdentifier;
    MessageBox("添加成功！","恭喜！",MB_OK);

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
