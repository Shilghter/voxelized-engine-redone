
// VoxelizedEngineRedoneView.cpp : implementation of the CVoxelizedEngineRedoneView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "VoxelizedEngineRedone.h"
#endif

#include "VoxelizedEngineRedoneDoc.h"
#include "VoxelizedEngineRedoneView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVoxelizedEngineRedoneView

IMPLEMENT_DYNCREATE(CVoxelizedEngineRedoneView, CView)

BEGIN_MESSAGE_MAP(CVoxelizedEngineRedoneView, CView)
END_MESSAGE_MAP()

// CVoxelizedEngineRedoneView construction/destruction

CVoxelizedEngineRedoneView::CVoxelizedEngineRedoneView() noexcept
{
	// TODO: add construction code here

}

CVoxelizedEngineRedoneView::~CVoxelizedEngineRedoneView()
{
}

BOOL CVoxelizedEngineRedoneView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CVoxelizedEngineRedoneView drawing

void CVoxelizedEngineRedoneView::OnDraw(CDC* /*pDC*/)
{
	CVoxelizedEngineRedoneDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CVoxelizedEngineRedoneView diagnostics

#ifdef _DEBUG
void CVoxelizedEngineRedoneView::AssertValid() const
{
	CView::AssertValid();
}

void CVoxelizedEngineRedoneView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVoxelizedEngineRedoneDoc* CVoxelizedEngineRedoneView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVoxelizedEngineRedoneDoc)));
	return (CVoxelizedEngineRedoneDoc*)m_pDocument;
}
#endif //_DEBUG


// CVoxelizedEngineRedoneView message handlers
