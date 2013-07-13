#if !defined(AFX_LENT_H__7E9EC05D_04FD_42CB_8F65_2BCEA500282A__INCLUDED_)
#define AFX_LENT_H__7E9EC05D_04FD_42CB_8F65_2BCEA500282A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Lent.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLent dialog

class CLent : public CDialog
{
// Construction
public:
	CLent(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLent)
	enum { IDD = IDD_DIALOG1 };
	CString	m_Name;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLent)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLent)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LENT_H__7E9EC05D_04FD_42CB_8F65_2BCEA500282A__INCLUDED_)
