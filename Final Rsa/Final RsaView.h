// Final RsaView.h : CFinalRsaView ��Ľӿ�
//


#pragma once


class CFinalRsaView : public CView
{
protected: // �������л�����
	CFinalRsaView();
	DECLARE_DYNCREATE(CFinalRsaView)

// ����
public:
	CFinalRsaDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CFinalRsaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32773();
};

#ifndef _DEBUG  // Final RsaView.cpp �еĵ��԰汾
inline CFinalRsaDoc* CFinalRsaView::GetDocument() const
   { return reinterpret_cast<CFinalRsaDoc*>(m_pDocument); }
#endif

