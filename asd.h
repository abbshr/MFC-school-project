#if !defined(AFX_ASD_H__A9CC1714_21EE_4E79_BD0B_AFAE080C8528__INCLUDED_)
#define AFX_ASD_H__A9CC1714_21EE_4E79_BD0B_AFAE080C8528__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// asd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Casd dialog

class Casd : public CDialog
{
// Construction
public:
	Casd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Casd)
	enum { IDD = IDD_DIALOG10 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Casd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Casd)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASD_H__A9CC1714_21EE_4E79_BD0B_AFAE080C8528__INCLUDED_)
