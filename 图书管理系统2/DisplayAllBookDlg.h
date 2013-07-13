#if !defined(AFX_DISPLAYALLBOOKDLG_H__A223CB37_31AF_460D_8EE8_F22A2FDEB03A__INCLUDED_)
#define AFX_DISPLAYALLBOOKDLG_H__A223CB37_31AF_460D_8EE8_F22A2FDEB03A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DisplayAllBookDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDisplayAllBookDlg dialog

class CDisplayAllBookDlg : public CDialog
{
// Construction
public:
	CDisplayAllBookDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDisplayAllBookDlg)
	enum { IDD = IDD_DISPLAYALLBOOK_DLG };
	CListCtrl	m_DisplayBook;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDisplayAllBookDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDisplayAllBookDlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DISPLAYALLBOOKDLG_H__A223CB37_31AF_460D_8EE8_F22A2FDEB03A__INCLUDED_)
