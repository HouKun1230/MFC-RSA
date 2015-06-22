// Final RsaView.cpp : CFinalRsaView 类的实现
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_32771, &CFinalRsaView::On32771)
	ON_COMMAND(ID_32773, &CFinalRsaView::On32773)
END_MESSAGE_MAP()

// CFinalRsaView 构造/析构

CFinalRsaView::CFinalRsaView()
{
	// TODO: 在此处添加构造代码

}

CFinalRsaView::~CFinalRsaView()
{
}

BOOL CFinalRsaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CFinalRsaView 绘制

void CFinalRsaView::OnDraw(CDC* /*pDC*/)
{
	CFinalRsaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CFinalRsaView 打印

BOOL CFinalRsaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CFinalRsaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CFinalRsaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CFinalRsaView 诊断

#ifdef _DEBUG
void CFinalRsaView::AssertValid() const
{
	CView::AssertValid();
}

void CFinalRsaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinalRsaDoc* CFinalRsaView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinalRsaDoc)));
	return (CFinalRsaDoc*)m_pDocument;
}
#endif //_DEBUG


// CFinalRsaView 消息处理程序

void CFinalRsaView::On32771()
{
	CString PlayerFile;
	PlayerFile="RSATool.exe";
	UINT rs =WinExec(PlayerFile,SW_SHOW);
	// TODO: 在此添加命令处理程序代码
}

void CFinalRsaView::On32773()
{
	CString PlayerFile;
	PlayerFile="CSPtest.exe";
	UINT rs =WinExec(PlayerFile,SW_SHOW);
	// TODO: 在此添加命令处理程序代码
}
