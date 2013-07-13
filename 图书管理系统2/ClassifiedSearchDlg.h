#if !defined(AFX_CLASSIFIEDSEARCHDLG_H__2AA89673_6621_4939_A72D_F5157CE1B4B0__INCLUDED_)
#define AFX_CLASSIFIEDSEARCHDLG_H__2AA89673_6621_4939_A72D_F5157CE1B4B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ClassifiedSearchDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CClassifiedSearchDlg dialog

class CClassifiedSearchDlg : public CDialog
{
// Construction
public:
	CClassifiedSearchDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CClassifiedSearchDlg)
	enum { IDD = IDD_CLASSIFIEDSEARCH_DLG };
	CListCtrl	m_DisplayBook;
	int		m_CaseIndex;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClassifiedSearchDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CClassifiedSearchDlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLASSIFIEDSEARCHDLG_H__2AA89673_6621_4939_A72D_F5157CE1B4B0__INCLUDED_)
