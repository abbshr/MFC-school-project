// Users.cpp: implementation of the CUsers class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "manager.h"
#include "Users.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CUsers::CUsers(CString thisname, CString thisid, CString thiskey, int thisbornum, CString thisbordboksnam[], CString thismessagebox[], CString thisemail)
{
	id = thisid;
	key = thiskey;
	name = thisname;
	email = thisemail;
	bornum = thisbornum;
	for (int i = 0; i < thisbordboksnam.length; i++)
	{
		bordboksnam[i] = thisbordboksnam[i];
	}
	for (int i = 0; i < thismessagebox.length; i++)
	{
		messagebox[i] = thismessagebox[i];
	}
}

void CUsers::borrowBook(int date)
{
	if(bornum == 3) 
	{
		//提示用户‘目前不可借’
		return;
	}
	bordate = date;
	bornum++;
	bordboksnam[bornum - 1] = book.bname;
}
void CUsers::setUserInfo(int chbornum, CString chbordboksnam[])
{
	bornum = chbornum;
	messagebox[0] = '管理员以确认将你的图书收回' + bornum + '本';
	messagebox[1] = '上次借了' + bordboksnam[0] + ',' + bordboksnam[1] + ',' + bordboksnam[2] + '。';
	for (int i = 0; i < 3; i++)
	{
		bordboksnam[i] = chbordboksnam[i];
	}	
	messagebox[2] = '当前还剩：' + bordboksnam[0] + ',' + bordboksnam[1] + ',' + bordboksnam[2] + '。';
}

CUsers::~CUsers()
{

}
