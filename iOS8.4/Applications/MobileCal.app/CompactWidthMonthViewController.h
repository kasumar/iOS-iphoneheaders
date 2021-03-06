/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/CompactMonthViewController.h>
#import <MobileCal/CompactMonthViewInteractionDelegate.h>
#import <MobileCal/CompactMonthListViewControllerDelegate.h>
#import <MobileCal/EKEventViewDelegate.h>
#import <MobileCal/ABPersonViewControllerDelegate.h>
#import <MobileCal/EKEventViewDelegatePrivate.h>

@class EKCalendarDate, TappableDayNumber, CompactMonthWeekView, CompactMonthListViewController, UIView, NSCalendar, UIColor, NSArray, NSString;

@interface CompactWidthMonthViewController : CompactMonthViewController <CompactMonthViewInteractionDelegate, CompactMonthListViewControllerDelegate, EKEventViewDelegate, ABPersonViewControllerDelegate, EKEventViewDelegatePrivate> {

	char _shouldSetSelectedDate;
	EKCalendarDate* _pressedDay;
	TappableDayNumber* _pressHighlight;
	CompactMonthWeekView* _pressedMonthView;
	CompactMonthListViewController* _listViewController;
	UIView* _listViewContainer;
	UIView* _listViewContainerTopLine;
	CompactMonthWeekView* _selectedMonthWeekView;
	char _loadingOccurrenceCache;
	char _needToReloadEventsOnAppear;
	char _eventLoadingSuspendedForScroll;
	char _reloadAfterStoppedScrolling;
	char _dividedListMode;
	char _dividedListModeAnimationInProgress;
	EKCalendarDate* _currentBackButtonDate;
	UIView* _topLineView;
	NSCalendar* _weekCalculationCalendar;
	char _inAnimationSplitState;
	char _splitOpen;
	UIColor* _originalBackgroundColor;
	UIColor* _originalScrollViewBackgroundColor;
	CGRect _splitCutOutRect;
	float _topBoundaryY;
	NSArray* _clipViews;
	NSArray* _originalSubviewYs;
	NSArray* _viewsToMove;
	char _editorDismissedFromDelete;
	char _suspendEventLoading;

}

@property (assign,nonatomic) char suspendEventLoading;              //@synthesize suspendEventLoading=_suspendEventLoading - In the implementation block
@property (nonatomic,readonly) char dividedListMode; 
@property (nonatomic,readonly) CGRect frameOfListView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameForTodayHighlight;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(char)arg2 ;
-(void)updatePalette:(id)arg1 ;
-(id)bestDateForNewEvent;
-(int)supportedToggleMode;
-(char)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1 ;
-(void)localeChanged;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(float)decelerationDistanceThresholdForPreferringMonthBoundary;
-(float)decelerationDistanceThresholdForDisplayingMonthBanner;
-(void)didEndScrolling;
-(void)calendarModelTimeZoneChanged;
-(float)decelerationDistanceThresholdToStopShowingMonthBanner;
-(float)showDateVerticalOffset;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)frameForWeekContainingDate:(id)arg1 ;
-(id)cellFramesForWeekContainingDate:(id)arg1 ;
-(id)pushedDayViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(void)enterAnimationSplitStateWithCutOutArea:(CGRect)arg1 topBoundary:(float)arg2 ;
-(void)setSplitStateOpen:(char)arg1 ;
-(void)endAnimationSplitState;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)_cachedOccurrencesChanged:(id)arg1 ;
-(void)compactMonthListViewController:(id)arg1 didSelectEvent:(id)arg2 ;
-(char)dividedListMode;
-(id)pushedListViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(char)shouldUpdateSelectedDateWithCentralView;
-(void)didLoadInitialViews;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_showEventsPreferenceChanged;
-(void)_setupListViewController;
-(void)_updateListViewFrame;
-(void)_updateDividedListTopLineForDividedMode:(char)arg1 animated:(char)arg2 ;
-(void)_setSelectedDay:(id)arg1 onMonthWeekView:(id)arg2 animated:(char)arg3 ;
-(void)_loadEventsForAllSubviews;
-(void)_removeMonthHighlight;
-(id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)suspendEventLoading;
-(char)_shouldAnimateDots;
-(void)_updateNavigationControllerBackButton;
-(void)_showDetailsForEvent:(id)arg1 animated:(char)arg2 showComments:(char)arg3 ;
-(float)_showDateVerticalOffsetForMode:(char)arg1 ;
-(void)_updateViewsForTimeZoneChange;
-(id)_dayInMonth:(id)arg1 fromTouches:(id)arg2 ;
-(void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2 ;
-(id)_viewFromTouches:(id)arg1 ;
-(void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2 ;
-(float)_scrollViewVerticalVelocity;
-(void)_setDividedListView:(char)arg1 ;
-(void)_setDividedListView:(char)arg1 animated:(char)arg2 ;
-(void)_completeDividedListViewAnimation:(char)arg1 animated:(char)arg2 ;
-(void)_resetSelectionForDividedListState:(char)arg1 ;
-(id)_snapshotViewForDividedListTransition:(id)arg1 useFastPath:(char)arg2 ;
-(CGPoint)_originForSelectedMonthViewInScrollViewWithState:(char)arg1 ;
-(void)_setToCompressedState:(char)arg1 ;
-(CGRect)_frameForSelectedMonthView;
-(void)_showDetailsForEvent:(id)arg1 animated:(char)arg2 ;
-(void)monthView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3 ;
-(id)monthWeekViewForCalendarDate:(id)arg1 ;
-(int)eventCountDisplayedForDate:(id)arg1 ;
-(CGRect)frameOfListView;
-(id)dateForCurrentMonthOnScreen;
-(void)forceUpdateListView;
-(void)toggleDividedListView;
-(void)setSuspendEventLoading:(char)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)eventViewControllerWillDisappear:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(char)arg3 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)didScroll;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end

