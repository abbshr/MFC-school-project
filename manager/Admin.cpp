// Admin.cpp: implementation of the CAdmin class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "manager.h"
#include "Admin.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CAdmin::CAdmin(CString thisid, CString thiskey, CString thismessagebox[], CString thisemail)
{
	id = thisid;
	key = thiskey;
	for (int i = 0; i < thismessagebox.length - 1; i++)
	{
		mesagebox[i] = thismessagebox[i];
	}
	email = thisemail;
}

void CAdmin::getAllUser()
{
}
void CAdmin::addBook(CString addbname, CString addauthor, CString addbclass, int addyear, int addhot, int addtnum)
{
}
void CAdmin::deleteBook(CString bname)
{
}
void CAdmin::ctrlBook(CString bname)
{
}
void CAdmin::searchUserViaName(CString username)
{
}
void CAdmin::searchUserViaId(CString id)
{
}
void CAdmin::setUserBorroable(CString username)
{
}


