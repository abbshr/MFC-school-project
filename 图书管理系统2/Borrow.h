#if !defined(AFX_BORROW_H__0903F1F0_008B_4D19_A4D4_5E53B0293435__INCLUDED_)
#define AFX_BORROW_H__0903F1F0_008B_4D19_A4D4_5E53B0293435__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Borrow.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBorrow dialog

class CBorrow : public CDialog
{
// Construction
public:
	CBorrow(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBorrow)
	enum { IDD = IDD_DIALOG2 };
	CString	m_Name;
	CString strAcount;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBorrow)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBorrow)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BORROW_H__0903F1F0_008B_4D19_A4D4_5E53B0293435__INCLUDED_)
