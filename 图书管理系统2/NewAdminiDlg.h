#if !defined(AFX_NEWADMINIDLG_H__6D904B04_FA8D_4FF1_ABEE_A8ACC82E3926__INCLUDED_)
#define AFX_NEWADMINIDLG_H__6D904B04_FA8D_4FF1_ABEE_A8ACC82E3926__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewAdminiDlg.h : header file
//


/////////////////////////////////////////////////////////////////////////////
// CNewAdminiDlg dialog

class CNewAdminiDlg : public CDialog
{
// Construction
public:
	CNewAdminiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNewAdminiDlg)
	enum { IDD = IDD_NEWADMINISTOR_DLG };
	CString	m_Name;
	CString	m_Code;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewAdminiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewAdminiDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWADMINIDLG_H__6D904B04_FA8D_4FF1_ABEE_A8ACC82E3926__INCLUDED_)
