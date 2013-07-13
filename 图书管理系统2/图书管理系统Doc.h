// 图书管理系统Doc.h : interface of the CMyDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DOC_H__0D5FC057_E0F5_4185_A86A_87509B1AD5B8__INCLUDED_)
#define AFX_DOC_H__0D5FC057_E0F5_4185_A86A_87509B1AD5B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMyDoc : public CDocument
{
protected: // create from serialization only
	CMyDoc();
	DECLARE_DYNCREATE(CMyDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMyDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOC_H__0D5FC057_E0F5_4185_A86A_87509B1AD5B8__INCLUDED_)
