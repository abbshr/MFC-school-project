#if !defined(AFX_USER_H__E03D0A0F_F3EC_4F72_A63E_4232A0329E06__INCLUDED_)
#define AFX_USER_H__E03D0A0F_F3EC_4F72_A63E_4232A0329E06__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// User.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CUser dialog

class CUser : public CDialog
{
// Construction
public:
	CUser(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CUser)
	enum { IDD = IDD_DIALOG2 };
	CListBox	m_number;
	CListBox	m_booklist;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CUser)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CUser)
	afx_msg void OnButton1();
	afx_msg void OnButton3();
	afx_msg void OnButton11();
	afx_msg void OnButton4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_USER_H__E03D0A0F_F3EC_4F72_A63E_4232A0329E06__INCLUDED_)
