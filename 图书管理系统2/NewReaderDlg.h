#if !defined(AFX_NEWREADERDLG_H__C8DE86DF_070A_449C_BE8C_CEC66F48DE52__INCLUDED_)
#define AFX_NEWREADERDLG_H__C8DE86DF_070A_449C_BE8C_CEC66F48DE52__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewReaderDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewReaderDlg dialog


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Reader
{
public:
	string strName;
	string strIdentifier;
};

class CNewReaderDlg : public CDialog
{
// Construction
public:
	CNewReaderDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNewReaderDlg)
	enum { IDD = IDD_NEWREADER_DLG };
	CString	m_Name;
	CString	m_Identifier;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewReaderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewReaderDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWREADERDLG_H__C8DE86DF_070A_449C_BE8C_CEC66F48DE52__INCLUDED_)
