// Admin.h: interface for the CAdmin class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADMIN_H__EEDAD00B_AE97_47FB_A8FB_4BA71E407C1E__INCLUDED_)
#define AFX_ADMIN_H__EEDAD00B_AE97_47FB_A8FB_4BA71E407C1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"

class CAdmin : public CPerson  
{
public:
	CAdmin(CString thisid, CString thiskey, CString thismessagebox = [' '], CString thisemail = ' ');
	void getAllUser();
	void addBook(CString addbname, CString addauthor, CString addbclass, int addyear, int addhot, int addtnum);
	void deleteBook(CString bname);
	void ctrlBook(CString bname);
	void searchUserViaName(CString username);
	void searchUserViaId(CString id);
	void setUserBorroable(CString username);
};

#endif // !defined(AFX_ADMIN_H__EEDAD00B_AE97_47FB_A8FB_4BA71E407C1E__INCLUDED_)
