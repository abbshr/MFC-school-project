#if !defined(AFX_LEND_H__3C3EAF83_1C89_4EF4_B7DE_99806B4B00AC__INCLUDED_)
#define AFX_LEND_H__3C3EAF83_1C89_4EF4_B7DE_99806B4B00AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Lend.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLend dialog

class CLend : public CDialog
{
// Construction
public:
	CLend(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLend)
	enum { IDD = IDD_DIALOG9 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLend)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLend)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEND_H__3C3EAF83_1C89_4EF4_B7DE_99806B4B00AC__INCLUDED_)
