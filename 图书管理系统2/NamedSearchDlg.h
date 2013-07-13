#if !defined(AFX_NAMEDSEARCHDLG_H__5D253A6F_D66F_4D33_B992_6AD05B097B8E__INCLUDED_)
#define AFX_NAMEDSEARCHDLG_H__5D253A6F_D66F_4D33_B992_6AD05B097B8E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NamedSearchDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNamedSearchDlg dialog

class CNamedSearchDlg : public CDialog
{
// Construction
public:
	CNamedSearchDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNamedSearchDlg)
	enum { IDD = IDD_NAMEDSEARCH_DLG };
	CListCtrl	m_DisplayBook;
	CString	m_Name;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNamedSearchDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNamedSearchDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAMEDSEARCHDLG_H__5D253A6F_D66F_4D33_B992_6AD05B097B8E__INCLUDED_)
