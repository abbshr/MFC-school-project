#if !defined(AFX_SHOWALLBOOKS_H__B8130041_0682_4A21_9BEF_B5004C9081DB__INCLUDED_)
#define AFX_SHOWALLBOOKS_H__B8130041_0682_4A21_9BEF_B5004C9081DB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowAllBooks.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CShowAllBooks dialog

class CShowAllBooks : public CDialog
{
// Construction
public:
	CShowAllBooks(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CShowAllBooks)
	enum { IDD = IDD_DIALOG6 };
	CListBox	m_num;
	CListBox	m_booklist;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CShowAllBooks)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CShowAllBooks)
	afx_msg void OnCheckAll();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWALLBOOKS_H__B8130041_0682_4A21_9BEF_B5004C9081DB__INCLUDED_)
