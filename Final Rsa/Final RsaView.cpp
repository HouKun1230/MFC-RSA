// Final RsaView.cpp : CFinalRsaView ���ʵ��
//

#include "stdafx.h"
#include "Final Rsa.h"

#include "Final RsaDoc.h"
#include "Final RsaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFinalRsaView

IMPLEMENT_DYNCREATE(CFinalRsaView, CView)

BEGIN_MESSAGE_MAP(CFinalRsaView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CFinalRsaView::On32771)
	ON_COMMAND(ID_32773, &CFinalRsaView::On32773)
END_MESSAGE_MAP()

// CFinalRsaView ����/����

CFinalRsaView::CFinalRsaView()
{
	// TODO: �ڴ˴���ӹ������

}

CFinalRsaView::~CFinalRsaView()
{
}

BOOL CFinalRsaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CFinalRsaView ����

void CFinalRsaView::OnDraw(CDC* /*pDC*/)
{
	CFinalRsaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CFinalRsaView ��ӡ

BOOL CFinalRsaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CFinalRsaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CFinalRsaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CFinalRsaView ���

#ifdef _DEBUG
void CFinalRsaView::AssertValid() const
{
	CView::AssertValid();
}

void CFinalRsaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinalRsaDoc* CFinalRsaView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinalRsaDoc)));
	return (CFinalRsaDoc*)m_pDocument;
}
#endif //_DEBUG


// CFinalRsaView ��Ϣ�������

void CFinalRsaView::On32771()
{
	CString PlayerFile;
	PlayerFile="RSATool.exe";
	UINT rs =WinExec(PlayerFile,SW_SHOW);
	// TODO: �ڴ���������������
}

void CFinalRsaView::On32773()
{
	CString PlayerFile;
	PlayerFile="CSPtest.exe";
	UINT rs =WinExec(PlayerFile,SW_SHOW);
	// TODO: �ڴ���������������
}
