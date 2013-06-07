// Users.h: interface for the CUsers class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USERS_H__6BB94B52_C58B_426F_AE4D_8B6EF38E7D16__INCLUDED_)
#define AFX_USERS_H__6BB94B52_C58B_426F_AE4D_8B6EF38E7D16__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"

class CUsers : public CPerson  
{
public:
	CUsers(CString thisname, CString thisid, CString thiskey, int thisbornum, CString thisbordboksnam[], CString thismessagebox = [' '], CString thisemail = ' ');
	void borrowBook(int date);
	void setUserInfo(int chbornum, CString chbordboksnam[]);
	virtual ~CUsers();
protected:
	CString name;            //用户实名
	CString bordboksnam[3];  //借书书名
	int bordate;            //借书日期
	int bornum;             //本次借书数量
};

#endif // !defined(AFX_USERS_H__6BB94B52_C58B_426F_AE4D_8B6EF38E7D16__INCLUDED_)
