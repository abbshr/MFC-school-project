#if !defined(AFX_REVREADERDLG_H__EB878B6D_6722_41EA_8283_2915CD2FA500__INCLUDED_)
#define AFX_REVREADERDLG_H__EB878B6D_6722_41EA_8283_2915CD2FA500__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RevReaderDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CRevReaderDlg dialog

class CRevReaderDlg : public CDialog
{
// Construction
public:
	CRevReaderDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CRevReaderDlg)
	enum { IDD = IDD_REVREADER_DLG };
	CString	m_OldName;
	CString	m_OldIdentifier;
	CString	m_Name;
	CString	m_Identifier;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRevReaderDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CRevReaderDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REVREADERDLG_H__EB878B6D_6722_41EA_8283_2915CD2FA500__INCLUDED_)
