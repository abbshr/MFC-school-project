// Debook.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Debook.h"
#include "master.h"
#include "fstream.h"
#include "Book.h"
#include "Public.h"

CBook b3;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDebook dialog


CDebook::CDebook(CWnd* pParent /*=NULL*/)
	: CDialog(CDebook::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDebook)
	//}}AFX_DATA_INIT
}


void CDebook::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDebook)

	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDebook, CDialog)
	//{{AFX_MSG_MAP(CDebook)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDebook message handlers

void CDebook::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

void CDebook::OnOK() 
{
	// TODO: Add extra validation here
	CDialog::OnOK();
}

void CDebook::OnButton1() 
{
	CString bookname,name;
	CStringArray newname, newnum, newclass, newid;
	int i=0,j;
	GetDlgItemText(IDC_EDIT1,bookname);	
	CStdioFile file("filename.dat",CFile::modeRead|CFile::typeBinary);
	while (file.ReadString(name)) {
		i++;
		if (name != bookname) {
			newname.Add(name);
		} else {
			j = i;
		}
	}
	file.SeekToBegin();
	file.Close();
	
	file.Open("filenum.dat",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newnum.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("fileclass.dat",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newclass.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("fileid.dat",CFile::modeRead|CFile::typeBinary);
	i=0;
	while (file.ReadString(name)) {
		i++;
		if (i != j) {
			newid.Add(name);
		}
	}
	file.SeekToBegin();
	file.Close();

	file.Open("filename.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("filenum.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("fileclass.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("fileid.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();

	
	file.Open("filename.dat",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newname.GetSize()) {
		file.WriteString(newname.GetAt(i) + '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("filenum.dat",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newnum.GetSize()) {
		file.WriteString(newnum.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("fileclass.dat",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newclass.GetSize()) {
		file.WriteString(newclass.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();

	file.Open("fileid.dat",CFile::modeWrite|CFile::typeBinary);
	i=0;
	while (i < newid.GetSize()) {
		file.WriteString(newid.GetAt(i)+ '\n');
		i++;
	}
	file.SeekToBegin();
	file.Close();
}
