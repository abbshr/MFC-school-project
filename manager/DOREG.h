#if !defined(AFX_DOREG_H__666A6BF6_1E51_4342_8D4C_74BD265EBB4A__INCLUDED_)
#define AFX_DOREG_H__666A6BF6_1E51_4342_8D4C_74BD265EBB4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DOREG.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDOREG dialog

class CDOREG : public CDialog
{
// Construction
public:
	CDOREG(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDOREG)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDOREG)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDOREG)
	afx_msg void OnReg();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOREG_H__666A6BF6_1E51_4342_8D4C_74BD265EBB4A__INCLUDED_)
