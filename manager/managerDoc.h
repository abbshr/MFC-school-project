// managerDoc.h : interface of the CManagerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MANAGERDOC_H__DE8046CB_261C_46DF_8B77_98C6CDBDC8B5__INCLUDED_)
#define AFX_MANAGERDOC_H__DE8046CB_261C_46DF_8B77_98C6CDBDC8B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CManagerDoc : public CDocument
{
protected: // create from serialization only
	CManagerDoc();
	DECLARE_DYNCREATE(CManagerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CManagerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CManagerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CManagerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MANAGERDOC_H__DE8046CB_261C_46DF_8B77_98C6CDBDC8B5__INCLUDED_)
