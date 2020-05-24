
// VoxelizedEngineRedoneView.h : interface of the CVoxelizedEngineRedoneView class
//

#pragma once


class CVoxelizedEngineRedoneView : public CView
{
protected: // create from serialization only
	CVoxelizedEngineRedoneView() noexcept;
	DECLARE_DYNCREATE(CVoxelizedEngineRedoneView)

// Attributes
public:
	CVoxelizedEngineRedoneDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CVoxelizedEngineRedoneView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VoxelizedEngineRedoneView.cpp
inline CVoxelizedEngineRedoneDoc* CVoxelizedEngineRedoneView::GetDocument() const
   { return reinterpret_cast<CVoxelizedEngineRedoneDoc*>(m_pDocument); }
#endif

