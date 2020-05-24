
// VoxelizedEngineRedone.h : main header file for the VoxelizedEngineRedone application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CVoxelizedEngineRedoneApp:
// See VoxelizedEngineRedone.cpp for the implementation of this class
//

class CVoxelizedEngineRedoneApp : public CWinApp
{
public:
	CVoxelizedEngineRedoneApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVoxelizedEngineRedoneApp theApp;
