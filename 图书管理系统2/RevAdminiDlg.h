#if !defined(AFX_REVADMINIDLG_H__76497ABA_57BA_4399_9D5B_999C2CCE0A69__INCLUDED_)
#define AFX_REVADMINIDLG_H__76497ABA_57BA_4399_9D5B_999C2CCE0A69__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RevAdminiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRevAdminiDlg dialog

class CRevAdminiDlg : public CDialog
{
// Construction
public:
	CRevAdminiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRevAdminiDlg)
	enum { IDD = IDD_REVADMINISTOR_DLG };
	CString	m_oldName;
	CString	m_oldCode;
	CString	m_Name;
	CString	m_Code;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRevAdminiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRevAdminiDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REVADMINIDLG_H__76497ABA_57BA_4399_9D5B_999C2CCE0A69__INCLUDED_)
