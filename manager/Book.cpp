// Book.cpp: implementation of the CBook class.
//
//////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "manager.h"
#include "Book.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBook::CBook(CString bname, CString author, CString bclass, int year, int tnum, int hot): 
	bname(bname), author(author), bclass(bclass), year(year), tnum(tnum), hot(hot)
{
}

bool CBook::available() 
{
	if (tnum) 
	{
		return true;
	}
	return false;
}

void CBook::addHot()
{
	hot++;
}

int CBook::getYear()
{
	return year;
}

CString CBook::getName()
{
	return bname;
}

CString CBook::getAuthor()
{
	return author;
}

int CBook::getHot()
{
	return hot;
}

CString CBook::getClass()
{
	return bclass;
}

int CBook::getNum()
{
	return tnum;
}

void CBook::delNum()
{
	tnum--;
}

void CBook::addNum()
{
	tnum++;
}

void CBook::setBookInfo(CString newbname, CString newauthor, CString newbclass, int newyear, int newtnum)
{
	bname = newbname;
	author = newauthor;
	bclass = newbclass;
	year = newyear;
	tnum = newtnum;
}

