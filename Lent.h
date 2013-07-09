#if !defined(AFX_LENT_H__CFF35F68_FF01_4E19_97F0_1C47A87FB6A5__INCLUDED_)
#define AFX_LENT_H__CFF35F68_FF01_4E19_97F0_1C47A87FB6A5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Lent.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLent dialog

class CLent : public CDialog
{
// Construction
public:
	CLent(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLent)
	enum { IDD = IDD_DIALOG9 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLent)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLent)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LENT_H__CFF35F68_FF01_4E19_97F0_1C47A87FB6A5__INCLUDED_)
