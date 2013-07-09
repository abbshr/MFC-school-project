#if !defined(AFX_FIND_H__04AED435_EBDF_4B25_9EC2_6DB8E5095525__INCLUDED_)
#define AFX_FIND_H__04AED435_EBDF_4B25_9EC2_6DB8E5095525__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Find.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFind dialog

class CFind : public CDialog
{
// Construction
public:
	CFind(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFind)
	enum { IDD = IDD_DIALOG12 };
	CListBox	m_num;
	CListBox	m_user;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFind)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFind)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIND_H__04AED435_EBDF_4B25_9EC2_6DB8E5095525__INCLUDED_)
