/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol QLScrubViewDataSource;
@class NSOperationQueue, NSMutableSet, NSMutableDictionary, NSMutableArray, QLThumbnailView, QLPageNumberView;

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {

	<QLScrubViewDataSource>* _dataSource;
	id _delegate;
	BOOL _runOnMainThread;
	BOOL _needsThumbLayout;
	float _thumbOrigin;
	float _thumbEnd;
	float _thumbHeight;
	int _pageCount;
	int _selectedPage;
	NSOperationQueue* _queue;
	NSMutableSet* _operations;
	NSMutableDictionary* _thumbViews;
	NSMutableArray* _visibleThumbIndexes;
	QLThumbnailView* _selectedThumbnailView;
	QLPageNumberView* _pageNumberLabel;

}

@property (assign) <QLScrubViewDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL runOnMainThread; 
+(float)defaultWidth;
-(void)selectPageNumber:(int)arg1 ;
-(void)reloadThumbnails;
-(void)setRunOnMainThread:(BOOL)arg1 ;
-(void)panReceived:(id)arg1 ;
-(void)tapReceived:(id)arg1 ;
-(void)longTapReceived:(id)arg1 ;
-(void)_cancelAllOperations;
-(void)_removeThumbviews;
-(void)_updateSelectedThumbnailView;
-(void)_notifyPageChanged;
-(void)_updatePageLabelPosition;
-(void)_notifyScrubingStarted;
-(void)_showPageLabel;
-(void)_handleSwipAtLocation:(CGPoint)arg1 ;
-(void)_notifyScrubingEnded;
-(void)_hidePageLabel;
-(CGRect)_thumbnailFrameForPageAtIndex:(int)arg1 ;
-(BOOL)runOnMainThread;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)dataSource;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

