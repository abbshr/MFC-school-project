#if !defined(AFX_DOLOG_H__3EA3FBA0_D909_406F_8ABB_4110F8185549__INCLUDED_)
#define AFX_DOLOG_H__3EA3FBA0_D909_406F_8ABB_4110F8185549__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DOLOG.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDOLOG dialog

class CDOLOG : public CDialog
{
// Construction
public:
	CDOLOG(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDOLOG)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDOLOG)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDOLOG)
	afx_msg void OnLog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOLOG_H__3EA3FBA0_D909_406F_8ABB_4110F8185549__INCLUDED_)
