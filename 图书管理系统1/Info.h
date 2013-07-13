#if !defined(AFX_INFO_H__BEC4292D_1865_41A6_A0F9_FE058CAACBC4__INCLUDED_)
#define AFX_INFO_H__BEC4292D_1865_41A6_A0F9_FE058CAACBC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo dialog

class CInfo : public CDialog
{
// Construction
public:
	CInfo(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo)
	enum { IDD = IDD_DIALOG11 };
	CListBox	m_info;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo)
	virtual void OnOK();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO_H__BEC4292D_1865_41A6_A0F9_FE058CAACBC4__INCLUDED_)
