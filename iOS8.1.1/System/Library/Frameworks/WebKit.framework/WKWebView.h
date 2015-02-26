/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class WKBrowsingContextHandle, NSURL, NSArray, NSString, NSData, _WKSessionState, _WKWebViewPrintFormatter, WKWebViewConfiguration, WKBackForwardList, UIScrollView;

@interface WKWebView : UIView <UIScrollViewDelegate> {

	RetainPtr<WKWebViewConfiguration>* _configuration;
	RefPtr<WebKit::WebPageProxy>* _page;
	unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> >* _navigationState;
	unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> >* _uiDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;
	unsigned long long _observedRenderingProgressEvents;
	WeakObjCPtr<id<_WKFormDelegate> > _formDelegate;
	RetainPtr<WKScrollView>* _scrollView;
	RetainPtr<WKContentView>* _contentView;
	BOOL _overridesMinimumLayoutSize;
	CGSize _minimumLayoutSizeOverride;
	BOOL _overridesMinimumLayoutSizeForMinimalUI;
	CGSize _minimumLayoutSizeOverrideForMinimalUI;
	BOOL _overridesMaximumUnobscuredSize;
	CGSize _maximumUnobscuredSizeOverride;
	BOOL _usesMinimalUI;
	BOOL _needsToNotifyDelegateAboutMinimalUI;
	CGRect _inputViewBounds;
	double _viewportMetaTagWidth;
	UIEdgeInsets _obscuredInsets;
	BOOL _haveSetObscuredInsets;
	BOOL _isChangingObscuredInsetsInteractively;
	long long _interfaceOrientationOverride;
	BOOL _overridesInterfaceOrientation;
	BOOL _hasCommittedLoadForMainFrame;
	BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
	unsigned long long _firstPaintAfterCommitLoadTransactionID;
	int _dynamicViewportUpdateMode;
	CATransform3D _resizeAnimationTransformAdjustments;
	unsigned long long _resizeAnimationTransformTransactionID;
	RetainPtr<UIView>* _resizeAnimationView;
	double _lastAdjustmentForScroller;
	BOOL _needsToRestoreExposedRect;
	FloatRect _exposedRectToRestore;
	BOOL _needsToRestoreUnobscuredCenter;
	FloatPoint _unobscuredCenterToRestore;
	unsigned long long _firstTransactionIDAfterPageRestore;
	double _scaleToRestore;
	unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> >* _gestureController;
	BOOL _allowsBackForwardNavigationGestures;
	RetainPtr<UIView<WKWebViewContentProvider> >* _customContentView;
	RetainPtr<UIView>* _customContentFixedOverlayView;
	Color _scrollViewBackgroundColor;
	BOOL _delayUpdateVisibleContentRects;
	BOOL _hadDelayedUpdateVisibleContentRects;
	BOOL _pageIsPrintingToPDF;
	RetainPtr<CGPDFDocument *>* _printedDocument;

}

@property (assign,setter=_setPrintedDocument:,nonatomic) CGPDFDocumentRef _printedDocument; 
@property (nonatomic,readonly) id _remoteObjectRegistry; 
@property (nonatomic,readonly) WKBrowsingContextHandle * _handle; 
@property (assign,setter=_setObservedRenderingProgressEvents:,nonatomic) unsigned long long _observedRenderingProgressEvents; 
@property (assign,setter=_setHistoryDelegate:,nonatomic,__weak) id<WKHistoryDelegatePrivate> _historyDelegate; 
@property (nonatomic,readonly) NSURL * _unreachableURL; 
@property (nonatomic,readonly) NSArray * _certificateChain; 
@property (nonatomic,readonly) NSURL * _committedURL; 
@property (nonatomic,readonly) NSString * _MIMEType; 
@property (setter=_setApplicationNameForUserAgent:,copy) NSString * _applicationNameForUserAgent; 
@property (setter=_setCustomUserAgent:,copy) NSString * _customUserAgent; 
@property (nonatomic,readonly) int _webProcessIdentifier; 
@property (nonatomic,readonly) NSData * _sessionStateData; 
@property (nonatomic,readonly) _WKSessionState * _sessionState; 
@property (assign,setter=_setAllowsRemoteInspection:,nonatomic) BOOL _allowsRemoteInspection; 
@property (assign,setter=_setAddsVisitedLinks:,nonatomic) BOOL _addsVisitedLinks; 
@property (nonatomic,readonly) BOOL _networkRequestsInProgress; 
@property (getter=_isShowingNavigationGestureSnapshot,nonatomic,readonly) BOOL _showingNavigationGestureSnapshot; 
@property (assign,setter=_setMinimumLayoutSizeOverride:,nonatomic) CGSize _minimumLayoutSizeOverride; 
@property (assign,setter=_setMinimumLayoutSizeOverrideForMinimalUI:,nonatomic) CGSize _minimumLayoutSizeOverrideForMinimalUI; 
@property (assign,setter=_setMaximumUnobscuredSizeOverride:,nonatomic) CGSize _maximumUnobscuredSizeOverride; 
@property (nonatomic,readonly) BOOL _usesMinimalUI; 
@property (assign,setter=_setObscuredInsets:,nonatomic) UIEdgeInsets _obscuredInsets; 
@property (assign,setter=_setInterfaceOrientationOverride:,nonatomic) long long _interfaceOrientationOverride; 
@property (assign,setter=_setBackgroundExtendsBeyondPage:,nonatomic) BOOL _backgroundExtendsBeyondPage; 
@property (getter=_isDisplayingPDF,nonatomic,readonly) BOOL _displayingPDF; 
@property (nonatomic,readonly) NSData * _dataForDisplayedPDF; 
@property (nonatomic,readonly) NSString * _suggestedFilenameForDisplayedPDF; 
@property (nonatomic,readonly) double _viewportMetaTagWidth; 
@property (nonatomic,readonly) _WKWebViewPrintFormatter * _webViewPrintFormatter; 
@property (assign,setter=_setPaginationMode:,nonatomic) long long _paginationMode; 
@property (assign,setter=_setPaginationBehavesLikeColumns:,nonatomic) BOOL _paginationBehavesLikeColumns; 
@property (assign,setter=_setPageLength:,nonatomic) double _pageLength; 
@property (assign,setter=_setGapBetweenPages:,nonatomic) double _gapBetweenPages; 
@property (readonly) unsigned long long _pageCount; 
@property (nonatomic,readonly) BOOL _supportsTextZoom; 
@property (assign,setter=_setTextZoomFactor:,nonatomic) double _textZoomFactor; 
@property (assign,setter=_setPageZoomFactor:,nonatomic) double _pageZoomFactor; 
@property (assign,setter=_setFindDelegate:,nonatomic,__weak) id<_WKFindDelegate> _findDelegate; 
@property (assign,setter=_setFormDelegate:,nonatomic,__weak) id<_WKFormDelegate> _formDelegate; 
@property (getter=_isDisplayingStandaloneImageDocument,nonatomic,readonly) BOOL _displayingStandaloneImageDocument; 
@property (nonatomic,copy,readonly) WKWebViewConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<WKNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<WKUIDelegate> UIDelegate; 
@property (nonatomic,readonly) WKBackForwardList * backForwardList; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (assign,nonatomic) BOOL allowsBackForwardNavigationGestures; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,setter=_setUsesMinimalUI:,nonatomic) BOOL _usesMinimalUI; 
@property (nonatomic,readonly) UIEdgeInsets _computedContentInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)_printFormatterClass;
-(CGPDFDocumentRef)_printedDocument;
-(long long)_computePageCountAndStartDrawingToPDFForFrame:(id)arg1 printInfo:(const PrintInfo*)arg2 firstPage:(unsigned)arg3 computedTotalScaleFactor:(double*)arg4 ;
-(void)_endPrinting;
-(void)_setPrintedDocument:(CGPDFDocumentRef)arg1 ;
-(WKBrowsingContextHandle *)_handle;
-(id<_WKFormDelegate>)_formDelegate;
-(long long)_paginationMode;
-(void)_setPaginationMode:(long long)arg1 ;
-(BOOL)_paginationBehavesLikeColumns;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(double)_pageLength;
-(void)_setPageLength:(double)arg1 ;
-(double)_gapBetweenPages;
-(void)_setGapBetweenPages:(double)arg1 ;
-(unsigned long long)_pageCount;
-(void)_setFormDelegate:(id)arg1 ;
-(id)_remoteObjectRegistry;
-(CGSize)_minimumLayoutSizeOverride;
-(UIEdgeInsets)_obscuredInsets;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)_beginInteractiveObscuredInsetsChange;
-(void)_endInteractiveObscuredInsetsChange;
-(void)_setBackgroundExtendsBeyondPage:(BOOL)arg1 ;
-(BOOL)_backgroundExtendsBeyondPage;
-(void)_endAnimatedResize;
-(unsigned long long)_observedRenderingProgressEvents;
-(CGSize)_minimumLayoutSizeOverrideForMinimalUI;
-(CGSize)_maximumUnobscuredSizeOverride;
-(double)_viewportMetaTagWidth;
-(long long)_interfaceOrientationOverride;
-(void)_beginAnimatedResizeWithUpdates:(/*^block*/id)arg1 ;
-(void)_setMinimumLayoutSizeOverride:(CGSize)arg1 ;
-(void)_setMinimumLayoutSizeOverrideForMinimalUI:(CGSize)arg1 ;
-(void)_setMaximumUnobscuredSizeOverride:(CGSize)arg1 ;
-(BOOL)_isDisplayingPDF;
-(id<WKHistoryDelegatePrivate>)_historyDelegate;
-(void)_setHistoryDelegate:(id)arg1 ;
-(NSURL *)_unreachableURL;
-(void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(NSArray *)_certificateChain;
-(NSURL *)_committedURL;
-(NSString *)_MIMEType;
-(NSString *)_applicationNameForUserAgent;
-(void)_setApplicationNameForUserAgent:(id)arg1 ;
-(NSString *)_customUserAgent;
-(void)_setCustomUserAgent:(id)arg1 ;
-(int)_webProcessIdentifier;
-(void)_killWebContentProcess;
-(void)_didRelaunchProcess;
-(NSData *)_sessionStateData;
-(_WKSessionState *)_sessionState;
-(void)_restoreFromSessionStateData:(id)arg1 ;
-(id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2 ;
-(BOOL)_allowsRemoteInspection;
-(void)_setAllowsRemoteInspection:(BOOL)arg1 ;
-(BOOL)_addsVisitedLinks;
-(void)_setAddsVisitedLinks:(BOOL)arg1 ;
-(BOOL)_networkRequestsInProgress;
-(void)_setObservedRenderingProgressEvents:(unsigned long long)arg1 ;
-(void)_getMainResourceDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getWebArchiveDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_supportsTextZoom;
-(double)_textZoomFactor;
-(void)_setTextZoomFactor:(double)arg1 ;
-(double)_pageZoomFactor;
-(void)_setPageZoomFactor:(double)arg1 ;
-(id<_WKFindDelegate>)_findDelegate;
-(void)_setFindDelegate:(id)arg1 ;
-(void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_hideFindUI;
-(BOOL)_isDisplayingStandaloneImageDocument;
-(BOOL)_isShowingNavigationGestureSnapshot;
-(void)_setInterfaceOrientationOverride:(long long)arg1 ;
-(void)_resizeWhileHidingContentWithUpdates:(/*^block*/id)arg1 ;
-(void)_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
-(void)_snapshotRect:(CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_overrideLayoutParametersWithMinimumLayoutSize:(CGSize)arg1 minimumLayoutSizeForMinimalUI:(CGSize)arg2 maximumUnobscuredSizeOverride:(CGSize)arg3 ;
-(id)_viewForFindUI;
-(NSData *)_dataForDisplayedPDF;
-(NSString *)_suggestedFilenameForDisplayedPDF;
-(_WKWebViewPrintFormatter *)_webViewPrintFormatter;
-(void)_close;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)reload;
-(NSString *)title;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UIScrollView *)scrollView;
-(NSURL *)URL;
-(id)loadRequest:(id)arg1 ;
-(id)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(WKBackForwardList *)backForwardList;
-(BOOL)isLoading;
-(void)setUIDelegate:(id<WKUIDelegate>)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)_frameOrBoundsChanged;
-(void)stopLoading;
-(id)goBack;
-(id)goForward;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(double)estimatedProgress;
-(void)_windowDidRotate:(id)arg1 ;
-(WKWebViewConfiguration *)configuration;
-(void)_zoomOutWithOrigin:(FloatPoint)arg1 ;
-(BOOL)_zoomToRect:(FloatRect)arg1 withOrigin:(FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6 ;
-(UIEdgeInsets)_computedContentInset;
-(id)browsingContextController;
-(void)_updateVisibleContentRects;
-(void)_didFinishScrolling;
-(void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(BOOL)allowsBackForwardNavigationGestures;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)_updateScrollViewBackground;
-(CGPoint)_adjustedContentOffset:(CGPoint)arg1 ;
-(id)_currentContentView;
-(CGRect)_contentRectForUserInteraction;
-(void)_zoomToPoint:(FloatPoint)arg1 atScale:(double)arg2 ;
-(BOOL)_scrollToRect:(FloatRect)arg1 origin:(FloatPoint)arg2 minimumScrollDistance:(float)arg3 ;
-(void)_zoomToRect:(FloatRect)arg1 atScale:(double)arg2 origin:(FloatPoint)arg3 ;
-(BOOL)usesStandardContentView;
-(id<WKNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<WKNavigationDelegate>)arg1 ;
-(id)goToBackForwardListItem:(id)arg1 ;
-(BOOL)hasOnlySecureContent;
-(id)reloadFromOrigin;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const String*)arg2 ;
-(void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const String*)arg1 data:(id)arg2 ;
-(void)_setViewportMetaTagWidth:(float)arg1 ;
-(void)_willInvokeUIScrollViewDelegateCallback;
-(void)_didInvokeUIScrollViewDelegateCallback;
-(void)_setUsesMinimalUI:(BOOL)arg1 ;
-(BOOL)_usesMinimalUI;
-(void)_processDidExit;
-(void)_didCommitLoadForMainFrame;
-(void)_didCommitLayerTree:(const RemoteLayerTreeTransaction*)arg1 ;
-(void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3 ;
-(void)_restorePageStateToExposedRect:(FloatRect)arg1 scale:(double)arg2 ;
-(void)_restorePageStateToUnobscuredCenter:(FloatPoint)arg1 scale:(double)arg2 ;
-(PassRefPtr<WebKit::ViewSnapshot>*)_takeViewSnapshot;
-(void)_scrollToContentOffset:(FloatPoint)arg1 ;
-(void)_zoomToFocusRect:(FloatRect)arg1 selectionRect:(FloatRect)arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(BOOL)arg6 forceScroll:(BOOL)arg7 ;
-(id)_contentSizeCategory;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id<WKUIDelegate>)UIDelegate;
@end
