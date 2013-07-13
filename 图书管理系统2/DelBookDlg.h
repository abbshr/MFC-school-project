#if !defined(AFX_DELBOOKDLG_H__B5578A12_115A_42C0_BA05_45696761050C__INCLUDED_)
#define AFX_DELBOOKDLG_H__B5578A12_115A_42C0_BA05_45696761050C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DelBookDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDelBookDlg dialog

class CDelBookDlg : public CDialog
{
// Construction
public:
	CDelBookDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDelBookDlg)
	enum { IDD = IDD_DELBOOK_DLG };
	CString	m_Name;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelBookDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelBookDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELBOOKDLG_H__B5578A12_115A_42C0_BA05_45696761050C__INCLUDED_)
