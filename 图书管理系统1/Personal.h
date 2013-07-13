#if !defined(AFX_PERSONAL_H__AAC363FF_6150_4F25_AF8A_5E13D2E0D58E__INCLUDED_)
#define AFX_PERSONAL_H__AAC363FF_6150_4F25_AF8A_5E13D2E0D58E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Personal.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPersonal dialog

class CPersonal : public CDialog
{
// Construction
public:
	CPersonal(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPersonal)
	enum { IDD = IDD_DIALOG7 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPersonal)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPersonal)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PERSONAL_H__AAC363FF_6150_4F25_AF8A_5E13D2E0D58E__INCLUDED_)
