#if !defined(AFX_NEWBOOKDLG_H__705DEA85_01DD_4B59_BEB0_EA5981591E0C__INCLUDED_)
#define AFX_NEWBOOKDLG_H__705DEA85_01DD_4B59_BEB0_EA5981591E0C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewBookDlg.h : header file
//

#include <iostream>
#include <fstream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CNewBookDlg dialog
class Book
{ 
public:
	string strName;
	string strIdentifier;
	string strClass;
	string strAcount;
};

class CNewBookDlg : public CDialog
{
// Construction
public:
	CNewBookDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNewBookDlg)
	enum { IDD = IDD_NEWBOOK_DLG };
	CString	m_Name;
	CString	m_Identifier;
	CString	m_Acount;
	int		m_CaseIndex;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewBookDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewBookDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWBOOKDLG_H__705DEA85_01DD_4B59_BEB0_EA5981591E0C__INCLUDED_)
