#if !defined(AFX_LOGINDLG_H__25C0A630_0988_444A_A317_B7F9929D9153__INCLUDED_)
#define AFX_LOGINDLG_H__25C0A630_0988_444A_A317_B7F9929D9153__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoginDlg.h : header file
//

#include <iostream>
#include <fstream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog

class Administor
{
public:
	string strName;
	string strCode;
};

class CLoginDlg : public CDialog
{
// Construction
public:
	CLoginDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLoginDlg)
	enum { IDD = IDD_LOGIN_DLG };
	CString	m_Name;
	CString	m_Code;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoginDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLoginDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINDLG_H__25C0A630_0988_444A_A317_B7F9929D9153__INCLUDED_)
