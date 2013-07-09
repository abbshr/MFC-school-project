#if !defined(AFX_CHANGEBOOK_H__E0D0976A_F6EC_4167_8918_CFA08554DCC8__INCLUDED_)
#define AFX_CHANGEBOOK_H__E0D0976A_F6EC_4167_8918_CFA08554DCC8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Changebook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CChangebook dialog

class CChangebook : public CDialog
{
// Construction
public:
	CChangebook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CChangebook)
	enum { IDD = IDD_DIALOG4 };
	CListBox	m_number;
	CListBox	m_book;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChangebook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CChangebook)
	virtual void OnOK();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHANGEBOOK_H__E0D0976A_F6EC_4167_8918_CFA08554DCC8__INCLUDED_)
