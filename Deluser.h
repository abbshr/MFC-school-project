#if !defined(AFX_DELUSER_H__B20E47EB_C9D4_4064_BD40_E7488082061D__INCLUDED_)
#define AFX_DELUSER_H__B20E47EB_C9D4_4064_BD40_E7488082061D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Deluser.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDeluser dialog

class CDeluser : public CDialog
{
// Construction
public:
	CDeluser(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDeluser)
	enum { IDD = IDD_DIALOG13 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDeluser)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDeluser)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELUSER_H__B20E47EB_C9D4_4064_BD40_E7488082061D__INCLUDED_)
