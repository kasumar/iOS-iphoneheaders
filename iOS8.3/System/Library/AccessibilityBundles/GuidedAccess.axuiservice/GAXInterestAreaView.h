/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:36:34 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXEventStealerView.h>
#import <GuidedAccess/GAXInterestAreaFingerPathViewDataSource.h>
#import <GuidedAccess/GAXInterestAreaClippedViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol GAXInterestAreaViewDelegate, GAXInterestAreaViewDataSource;
@class GAXStyleProvider, UIColor, UIView, GAXInterestAreaClippedView, GAXInterestAreaFingerPathView, NSMutableArray, GAXInterestAreaViewButton, NSString;

@interface GAXInterestAreaView : GAXEventStealerView <GAXInterestAreaFingerPathViewDataSource, GAXInterestAreaClippedViewDelegate, UIGestureRecognizerDelegate> {

	char _specialControlsVisible;
	char _backgroundShouldCoverEverything;
	id<GAXInterestAreaViewDelegate> _delegate;
	id<GAXInterestAreaViewDataSource> _dataSource;
	GAXStyleProvider* _styleProvider;
	float _backgroundPatternScaleFactor;
	int _backgroundStyle;
	UIColor* _backgroundStripesPatternColor;
	UIView* _contentsView;
	UIView* _backgroundContainerView;
	GAXInterestAreaClippedView* _backgroundViewCoveringEverything;
	GAXInterestAreaFingerPathView* _fingerPathView;
	NSMutableArray* _clippedViews;
	NSMutableArray* _closeButtons;
	NSMutableArray* _resizingKnobButtons;
	GAXInterestAreaViewButton* _buttonBeingDragged;
	unsigned _indexOfInterestAreaPathBeingDragged;
	CGPoint _buttonBeingDraggedInitialCenter;
	CGRect _savedFrame;

}

@property (assign,nonatomic) id<GAXInterestAreaViewDataSource> dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<GAXInterestAreaViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) CGRect contentsBounds; 
@property (assign,nonatomic) float contentsCornerRadius; 
@property (assign,nonatomic) float backgroundPatternScaleFactor;                                         //@synthesize backgroundPatternScaleFactor=_backgroundPatternScaleFactor - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,getter=areSpecialControlsVisible,nonatomic) char specialControlsVisible;               //@synthesize specialControlsVisible=_specialControlsVisible - In the implementation block
@property (assign,nonatomic) char backgroundShouldCoverEverything;                                       //@synthesize backgroundShouldCoverEverything=_backgroundShouldCoverEverything - In the implementation block
@property (nonatomic,retain) UIColor * backgroundStripesPatternColor;                                    //@synthesize backgroundStripesPatternColor=_backgroundStripesPatternColor - In the implementation block
@property (nonatomic,retain) UIView * contentsView;                                                      //@synthesize contentsView=_contentsView - In the implementation block
@property (nonatomic,retain) UIView * backgroundContainerView;                                           //@synthesize backgroundContainerView=_backgroundContainerView - In the implementation block
@property (nonatomic,retain) GAXInterestAreaClippedView * backgroundViewCoveringEverything;              //@synthesize backgroundViewCoveringEverything=_backgroundViewCoveringEverything - In the implementation block
@property (nonatomic,retain) GAXInterestAreaFingerPathView * fingerPathView;                             //@synthesize fingerPathView=_fingerPathView - In the implementation block
@property (nonatomic,retain) NSMutableArray * clippedViews;                                              //@synthesize clippedViews=_clippedViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * closeButtons;                                              //@synthesize closeButtons=_closeButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * resizingKnobButtons;                                       //@synthesize resizingKnobButtons=_resizingKnobButtons - In the implementation block
@property (nonatomic,retain) GAXInterestAreaViewButton * buttonBeingDragged;                             //@synthesize buttonBeingDragged=_buttonBeingDragged - In the implementation block
@property (assign,nonatomic) CGPoint buttonBeingDraggedInitialCenter;                                    //@synthesize buttonBeingDraggedInitialCenter=_buttonBeingDraggedInitialCenter - In the implementation block
@property (assign,nonatomic) unsigned indexOfInterestAreaPathBeingDragged;                               //@synthesize indexOfInterestAreaPathBeingDragged=_indexOfInterestAreaPathBeingDragged - In the implementation block
@property (assign,nonatomic) CGRect savedFrame;                                                          //@synthesize savedFrame=_savedFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)closeButtons;
-(GAXInterestAreaFingerPathView *)fingerPathView;
-(CGRect)savedFrame;
-(void)setSavedFrame:(CGRect)arg1 ;
-(UIView *)contentsView;
-(NSMutableArray *)clippedViews;
-(CGRect)contentsBounds;
-(void)setSpecialControlsVisible:(char)arg1 animated:(char)arg2 ;
-(void)setContentsBounds:(CGRect)arg1 ;
-(void)setContentsCornerRadius:(float)arg1 ;
-(float)contentsCornerRadius;
-(void)setBackgroundShouldCoverEverything:(char)arg1 ;
-(void)setBackgroundContainerView:(UIView *)arg1 ;
-(void)setContentsView:(UIView *)arg1 ;
-(void)setFingerPathView:(GAXInterestAreaFingerPathView *)arg1 ;
-(void)setCloseButtons:(NSMutableArray *)arg1 ;
-(void)setResizingKnobButtons:(NSMutableArray *)arg1 ;
-(UIView *)backgroundContainerView;
-(void)setIndexOfInterestAreaPathBeingDragged:(unsigned)arg1 ;
-(void)setBackgroundPatternScaleFactor:(float)arg1 ;
-(GAXInterestAreaClippedView *)backgroundViewCoveringEverything;
-(void)setBackgroundStripesPatternColor:(UIColor *)arg1 ;
-(void)setButtonBeingDragged:(GAXInterestAreaViewButton *)arg1 ;
-(void)setBackgroundViewCoveringEverything:(GAXInterestAreaClippedView *)arg1 ;
-(void)setClippedViews:(NSMutableArray *)arg1 ;
-(void)reloadAllInterestAreaPaths;
-(void)_refreshBackgroundStripesPatternColor;
-(void)setBackgroundShouldCoverEverything:(char)arg1 animated:(char)arg2 ;
-(void)_resetAllSpecialControls;
-(void)_enumerateSpecialControlsUsingBlock:(/*^block*/id)arg1 ;
-(UIColor *)backgroundStripesPatternColor;
-(float)backgroundPatternScaleFactor;
-(void)_ensureBackgroundSizeOfBackgroundViewCoveringEverythingIsSet;
-(id)_interestAreaPathAtIndex:(unsigned)arg1 ;
-(void)_insertClippedViewForInterestAreaPathAtIndex:(unsigned)arg1 ;
-(GAXInterestAreaViewButton *)buttonBeingDragged;
-(unsigned)indexOfInterestAreaPathBeingDragged;
-(void)_getClippedViewPropertiesForInterestAreaPathAtIndex:(unsigned)arg1 frame:(CGRect*)arg2 constrainedFrame:(CGRect*)arg3 adjustedClippingPath:(id*)arg4 ;
-(NSMutableArray *)resizingKnobButtons;
-(unsigned)numberOfInterestAreaPathsForInterestAreaFingerPathView:(id)arg1 ;
-(unsigned)_numberOfInterestAreaPaths;
-(void)insertInterestAreaPathAtIndex:(unsigned)arg1 ;
-(id)_specialControlButtonAtLocation:(CGPoint)arg1 ;
-(void)setButtonBeingDraggedInitialCenter:(CGPoint)arg1 ;
-(void)_enumerateInterestAreaPathsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGPoint)buttonBeingDraggedInitialCenter;
-(void)reloadInterestAreaPathAtIndex:(unsigned)arg1 ;
-(id)_specialControlButtonAtLocation:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(CGRect)_constrainedFrameForInsetFrame:(CGRect)arg1 forInterestAreaPathAtIndex:(unsigned)arg2 ;
-(char)_shouldDisableSmartLayoutRelativeToEdgesForInterestAreaPathAtIndex:(unsigned)arg1 ;
-(char)areSpecialControlsVisible;
-(char)backgroundShouldCoverEverything;
-(float)_scaleFactorForSpecialControls;
-(void)_enumerateSpecialControlPropertiesForInterestAreaPath:(id)arg1 visibleKnobPositions:(unsigned)arg2 hasCloseButton:(char)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_enumerateInterestAreaPathsUsingBlock:(/*^block*/id)arg1 ;
-(CGPoint)centerForBackgroundOfInterestAreaClippedView:(id)arg1 ;
-(id)interestAreaFingerPathView:(id)arg1 interestAreaPathAtIndex:(unsigned)arg2 ;
-(void)deleteInterestAreaPathsAtIndices:(id)arg1 ;
-(void)setSpecialControlsVisible:(char)arg1 ;
-(void)deleteDynamicInterestAreaPathAtIndices:(id)arg1 ;
-(void)reloadAllAccessoryControls;
-(void)reloadDynamicInterestAreaPathAtIndex:(unsigned)arg1 ;
-(void)insertDynamicInterestAreaPathAtIndex:(unsigned)arg1 ;
-(void)adjustOutOfBoundsDrawingToCoverView:(id)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(void)reloadFrameOfInterestAreaPathAtIndex:(unsigned)arg1 ;
-(void)reloadAccessoryControlsForInterestAreaPathAtIndex:(unsigned)arg1 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id<GAXInterestAreaViewDataSource>)arg1 ;
-(void)setDelegate:(id<GAXInterestAreaViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id<GAXInterestAreaViewDataSource>)dataSource;
-(id<GAXInterestAreaViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_commonInit;
-(void)willMoveToWindow:(id)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 animated:(char)arg2 ;
@end

