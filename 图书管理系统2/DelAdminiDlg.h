#if !defined(AFX_DELADMINIDLG_H__D8D4D23D_B4A7_49A7_BCB0_E6D46E73A46A__INCLUDED_)
#define AFX_DELADMINIDLG_H__D8D4D23D_B4A7_49A7_BCB0_E6D46E73A46A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DelAdminiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDelAdminiDlg dialog

class CDelAdminiDlg : public CDialog
{
// Construction
public:
	CDelAdminiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDelAdminiDlg)
	enum { IDD = IDD_DELADMINISTOR_DLG };
	CString	m_Name;
	CString	m_Code;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelAdminiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelAdminiDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELADMINIDLG_H__D8D4D23D_B4A7_49A7_BCB0_E6D46E73A46A__INCLUDED_)
