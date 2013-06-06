#if !defined(AFX_CTRLLOG_H__9E47875F_A093_494D_85DB_F58FC9DD30AE__INCLUDED_)
#define AFX_CTRLLOG_H__9E47875F_A093_494D_85DB_F58FC9DD30AE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CTRLLOG.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCTRLLOG dialog

class CCTRLLOG : public CDialog
{
// Construction
public:
	CCTRLLOG(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCTRLLOG)
	enum { IDD = IDD_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCTRLLOG)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCTRLLOG)
	afx_msg void OnAdminLog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CTRLLOG_H__9E47875F_A093_494D_85DB_F58FC9DD30AE__INCLUDED_)
