// Public.cpp: implementation of the CPublic class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "library.h"
#include "Public.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

int CPublic::usmark = 0;
int CPublic::mar(int x) {//记录当前用户
	CPublic::usmark = x;
	return CPublic::usmark;
}
CPublic::~CPublic()
{

}
