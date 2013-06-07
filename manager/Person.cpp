// Person.cpp: implementation of the CPerson class.
//
//////////////////////////////////////////////////////////////////////

#include "manager.h"
#include "Person.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPerson::CPerson(CString id, CString key, CString messagebox = ' ', CString email = ' '):
	id(id), key(key), messagebox(messagebox), email(email)
{
}

CString CPerson::getId()
{
	return id;
}

CString CPerson::getEmail()
{
	return email;
}

void CPerson::searchBookViaName(CString bname)
{
	for (int i = 0; i < booklib.length; i++)
	{
		if (bname == booklib[i].bname)
		{
			//将符合条件的数组元素重组为一个新数组;
		}
	}
}

void CPerson::searchBookViaAuthor(CString author)
{
	for (int i = 0; i < booklib.length; i++)
	{
		if (author == booklib[i].author)
		{
			//将符合条件的数组元素重组为一个新数组;
		}
	}
}

void CPerson::searchBookViaClass(CString bclass)
{
	for (int i = 0; i < booklib.length; i++)
	{
		if (bclass == booklib[i].bclass)
		{
			//将符合条件的数组元素重组为一个新数组;
		}
	}
}

void CPerson::searchBookViaHot()
{
	int k, temp;
	for (int i = 0; i < booklib.length - 2; i++)
	{
		k = i;
		for (int j = i+1; j < booklib.length - 1; j++)
		{
			if (booklib[k].tnum < booklib[j].tnum)
			{
				k = j;
			}
		}
		temp = booklib[i].tnum;
		booklib[i].tnum = booklib[k].tnum;
		booklib[k].tnum = temp;
	}
}

void CPerson::searchBookViaYear(int year)
{
	for (int i = 0; i < booklib.length; i++)
	{
		if (year == booklib[i].year)
		{
			//将符合条件的数组元素重新组合成一个数组；
		}
	}
}

void CPerson::configMyProfile(CString newkey, CString newemail)
{
	key = newkey;
	email = newemail;
}

void CPerson::addMessageToBox(CString msg)
{
	messagebox = msg;
}

CPerson::~CPerson()
{

}