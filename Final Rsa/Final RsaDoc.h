// Final RsaDoc.h : CFinalRsaDoc ��Ľӿ�
//


#pragma once


class CFinalRsaDoc : public CDocument
{
protected: // �������л�����
	CFinalRsaDoc();
	DECLARE_DYNCREATE(CFinalRsaDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CFinalRsaDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


