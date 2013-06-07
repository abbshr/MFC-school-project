// Person.h: interface for the CPerson class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__9F6C5C42_6135_4D5A_AE9B_7656F1D1ADEE__INCLUDED_)
#define AFX_PERSON_H__9F6C5C42_6135_4D5A_AE9B_7656F1D1ADEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPerson  
{
public:
	CString getId();
	CString getEmail();
	void searchBookViaName(CString bname);
	void seaarchBookViaAuthor(CString author);
	void searchBookViaClass(CString bclass);
	void searchBookViaHot();
	void searchBookViaYear(int year);
	virtual void configMyProfile(CString newkey, CString newemail);
	void addMessageToBox(CString msg);
	CString id,
			key,
			email,
			messagebox;
};

#endif // !defined(AFX_PERSON_H__9F6C5C42_6135_4D5A_AE9B_7656F1D1ADEE__INCLUDED_)
