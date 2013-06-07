// Book.h: interface for the CBook class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_)
#define AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBook  
{
public:
	CBook(CString bname, CString author, CString bclass, int year, int tnum, int hot);
	bool available();     //检查该书是否可借,tnum是否>0
	void addHot();        //增加热度
	int getYear();        //获取年代
	CString getName();    //获取书名
	CString getAuthor();  //获取作者
	int getHot();         //获取热度
	CString getClass();   //获取分类
	int getNum();         //获取当前数量
	void delNum();        //减少数量,每借一本时 
	void addNum();        //增加数量,每还一本时
	void setBookInfo(CString newbname, CString newauthor, CString newbclass, int newyear, int newtnum);   //为管理员提供图书模型修改操作接口
protected:
	CString bname,    //书名
		author,       //作者
		bclass;       //所属分类
	int year,         //年代
		tnum,         //当前数量
		hot;          //热度
};

#endif // !defined(AFX_BOOK_H__8F1878CD_3FF2_49C2_86D4_9B0F230959D4__INCLUDED_)
