#if !defined(AFX_DELREADERDLG_H__7B22C86E_3F10_4BFA_AD25_DB6781646265__INCLUDED_)
#define AFX_DELREADERDLG_H__7B22C86E_3F10_4BFA_AD25_DB6781646265__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DelReaderDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDelReaderDlg dialog

class CDelReaderDlg : public CDialog
{
// Construction
public:
	CDelReaderDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDelReaderDlg)
	enum { IDD = IDD_DELREADER_DLG };
	CString	m_Name;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDelReaderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDelReaderDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELREADERDLG_H__7B22C86E_3F10_4BFA_AD25_DB6781646265__INCLUDED_)
