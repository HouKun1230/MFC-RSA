// Final RsaDoc.cpp : CFinalRsaDoc ���ʵ��
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


// CFinalRsaDoc ����/����

CFinalRsaDoc::CFinalRsaDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CFinalRsaDoc::~CFinalRsaDoc()
{
}

BOOL CFinalRsaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CFinalRsaDoc ���л�

void CFinalRsaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CFinalRsaDoc ���

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


// CFinalRsaDoc ����
