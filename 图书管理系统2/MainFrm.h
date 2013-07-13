// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__FEBC7246_0C42_4495_A00D_6DC90A452B2C__INCLUDED_)
#define AFX_MAINFRM_H__FEBC7246_0C42_4495_A00D_6DC90A452B2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnClose();
	afx_msg void OnNewadministor();
	afx_msg void OnRevadministor();
	afx_msg void OnDeladministor();
	afx_msg void OnNewbook();
	afx_msg void OnRevbook();
	afx_msg void OnDelbook();
	afx_msg void OnNewreader();
	afx_msg void OnRevreader();
	afx_msg void OnDelreader();
	afx_msg void OnClassifiedsearch();
	afx_msg void OnNamedsearch();
	afx_msg void OnDisplayallbook();
	afx_msg void OnMenuitem32785();
	afx_msg void OnMenuitem32786();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__FEBC7246_0C42_4495_A00D_6DC90A452B2C__INCLUDED_)
