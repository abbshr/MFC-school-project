// managerDoc.cpp : implementation of the CManagerDoc class
//

#include "stdafx.h"
#include "manager.h"

#include "managerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CManagerDoc

IMPLEMENT_DYNCREATE(CManagerDoc, CDocument)

BEGIN_MESSAGE_MAP(CManagerDoc, CDocument)
	//{{AFX_MSG_MAP(CManagerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CManagerDoc construction/destruction

CManagerDoc::CManagerDoc()
{
	// TODO: add one-time construction code here

}

CManagerDoc::~CManagerDoc()
{
}

BOOL CManagerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CManagerDoc serialization

void CManagerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CManagerDoc diagnostics

#ifdef _DEBUG
void CManagerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CManagerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CManagerDoc commands
