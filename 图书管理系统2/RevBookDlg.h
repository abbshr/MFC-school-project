#if !defined(AFX_REVBOOKDLG_H__8FFE060C_EF59_45DC_999C_0BEDEA760E85__INCLUDED_)
#define AFX_REVBOOKDLG_H__8FFE060C_EF59_45DC_999C_0BEDEA760E85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RevBookDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRevBookDlg dialog

class CRevBookDlg : public CDialog
{
// Construction
public:
	CRevBookDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRevBookDlg)
	enum { IDD = IDD_REVBOOK_DLG };
	CString	m_oldName;
	int		m_CaseIndex;
	CString	m_Name;
	CString	m_Identifier;
	CString	m_Acount;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRevBookDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRevBookDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REVBOOKDLG_H__8FFE060C_EF59_45DC_999C_0BEDEA760E85__INCLUDED_)
