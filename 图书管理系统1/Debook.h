#if !defined(AFX_DEBOOK_H__3D7810AE_069B_41B1_B4E4_F4D13D5E9C95__INCLUDED_)
#define AFX_DEBOOK_H__3D7810AE_069B_41B1_B4E4_F4D13D5E9C95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Debook.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDebook dialog

class CDebook : public CDialog
{
// Construction
public:
	CDebook(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDebook)
	enum { IDD = IDD_DIALOG5 };
	CListBox	m_book;
	CListBox	m_num;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDebook)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDebook)
	virtual void OnOK();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEBOOK_H__3D7810AE_069B_41B1_B4E4_F4D13D5E9C95__INCLUDED_)
