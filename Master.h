#if !defined(AFX_MASTER_H__EB3E19CF_1C25_4C4E_90FA_5C49EEAB4CF5__INCLUDED_)
#define AFX_MASTER_H__EB3E19CF_1C25_4C4E_90FA_5C49EEAB4CF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Master.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMaster dialog

class CMaster : public CDialog
{
// Construction
public:
	CMaster(CWnd* pParent = NULL);   // standard constructor
// Dialog Data
	//{{AFX_DATA(CMaster)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMaster)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMaster)
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnGetAllBook();
	afx_msg void OnButton8();
	afx_msg void OnButton1();
	afx_msg void OnButton10();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MASTER_H__EB3E19CF_1C25_4C4E_90FA_5C49EEAB4CF5__INCLUDED_)
