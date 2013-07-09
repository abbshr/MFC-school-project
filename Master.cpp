// Master.cpp : implementation file
//

#include "stdafx.h"
#include "library.h"
#include "Master.h"
#include "Addbook.h"
#include "ShowAllBooks.h"
#include "Changebook.h"
#include "Debook.h"
#include "Personal.h"
#include "Find.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMaster dialog


CMaster::CMaster(CWnd* pParent /*=NULL*/)
	: CDialog(CMaster::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMaster)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CMaster::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMaster)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMaster, CDialog)
	//{{AFX_MSG_MAP(CMaster)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON2, OnGetAllBook)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMaster message handlers

void CMaster::OnButton5() 
{
	// TODO: Add your control notification handler code here
	CAddbook add;
	add.DoModal();
	
}

void CMaster::OnButton6() 
{
	// TODO: Add your control notification handler code here
	CChangebook cb;
	cb.DoModal();
}

void CMaster::OnButton7() 
{
	// TODO: Add your control notification handler code here
	CDebook db;
	db.DoModal();
}

void CMaster::OnGetAllBook() 
{
	CShowAllBooks show;
	show.DoModal();
}

void CMaster::OnButton8() 
{
	CPersonal person;
	person.DoModal();	
}

void CMaster::OnButton1() 
{
	CStdioFile file("filename.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("filenum.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("fileid.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("fileclass.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
	file.Open("filename.dat",CFile::modeWrite|CFile::modeCreate);
	file.Close();
}

void CMaster::OnButton10() 
{
	// TODO: Add your control notification handler code here
	CFind find;
	find.DoModal();
	
}
