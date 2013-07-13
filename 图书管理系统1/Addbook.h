#if !defined(AFX_ADDBOOK_H__6DA16663_E340_49FF_973B_48AFAD1345A0__INCLUDED_)
#define AFX_ADDBOOK_H__6DA16663_E340_49FF_973B_48AFAD1345A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Addbook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAddbook dialog

class CAddbook : public CDialog
{
// Construction
public:
	CAddbook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAddbook)
	enum { IDD = IDD_DIALOG3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAddbook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAddbook)
	afx_msg void OnChangeEdit1();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDBOOK_H__6DA16663_E340_49FF_973B_48AFAD1345A0__INCLUDED_)
