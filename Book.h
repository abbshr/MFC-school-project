#if !defined(AFX_BOOK_H__95555512_F9C2_4D5F_9647_DBF3C78D483F__INCLUDED_)
#define AFX_BOOK_H__95555512_F9C2_4D5F_9647_DBF3C78D483F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Book.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBook window

class CBook : public CAnimateCtrl
{
// Construction
public:
	CBook();

	char bookname[10];
    int booknumber;
	char booktype[10];
	int booknum;
// Attributes
public:
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBook)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBook();

	// Generated message map functions
protected:
	//{{AFX_MSG(CBook)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOK_H__95555512_F9C2_4D5F_9647_DBF3C78D483F__INCLUDED_)
