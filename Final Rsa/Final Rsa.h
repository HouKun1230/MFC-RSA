// Final Rsa.h : Final Rsa Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CFinalRsaApp:
// �йش����ʵ�֣������ Final Rsa.cpp
//

class CFinalRsaApp : public CWinApp
{
public:
	CFinalRsaApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CFinalRsaApp theApp;