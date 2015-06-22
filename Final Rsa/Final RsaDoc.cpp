// Final RsaDoc.cpp : CFinalRsaDoc 类的实现
//

#include "stdafx.h"
#include "Final Rsa.h"

#include "Final RsaDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinalRsaDoc

IMPLEMENT_DYNCREATE(CFinalRsaDoc, CDocument)

BEGIN_MESSAGE_MAP(CFinalRsaDoc, CDocument)
END_MESSAGE_MAP()


// CFinalRsaDoc 构造/析构

CFinalRsaDoc::CFinalRsaDoc()
{
	// TODO: 在此添加一次性构造代码

}

CFinalRsaDoc::~CFinalRsaDoc()
{
}

BOOL CFinalRsaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CFinalRsaDoc 序列化

void CFinalRsaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CFinalRsaDoc 诊断

#ifdef _DEBUG
void CFinalRsaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFinalRsaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CFinalRsaDoc 命令
