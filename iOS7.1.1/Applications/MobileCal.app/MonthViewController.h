/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/InfiniteScrollViewController.h>
#import <MobileCal/MainViewController.h>

@class CalendarModel, EKCalendarDate, MonthTitleView, UIFont;

@interface MonthViewController : InfiniteScrollViewController <MainViewController> {

	CalendarModel* _model;
	EKCalendarDate* _backButtonDate;
	BOOL _backButtonShowingInterval;
	BOOL _currentlyDisplayed;
	float _decelerationTargetY;
	EKCalendarDate* _decelerationTargetDate;
	MonthTitleView* _monthTitleView;
	BOOL _monthTitleViewIsVisible;
	BOOL _shouldShowMonthTitleHUDWhenScrolling;
	UIFont* _headerFont;

}

@property (readonly) UIFont * headerFont;                                            //@synthesize headerFont=_headerFont - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMonthTitleHUDWhenScrolling;              //@synthesize shouldShowMonthTitleHUDWhenScrolling=_shouldShowMonthTitleHUDWhenScrolling - In the implementation block
-(CGRect)frameForTodayHighlight;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(id)bestDateForNewEvent;
-(void)localeChanged;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)_significantTimeChangeOccurred:(id)arg1 ;
-(void)_calendarModelTimeZoneChanged:(id)arg1 ;
-(void)_selectedDateChanged:(id)arg1 ;
-(id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)_slowComputeCalendarDateForWeekFromStartDate:(id)arg1 weekOffset:(int)arg2 ;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(void)willBeginDragging;
-(void)_updateMonthTitle;
-(float)decelerationDistanceThresholdForPreferringMonthBoundary;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 ;
-(float)decelerationDistanceThresholdForDisplayingMonthBanner;
-(void)didEndScrolling;
-(BOOL)updateSelectedDateWithCentralView;
-(void)_updateSelectedDateWithCentralView;
-(void)calendarModelTimeZoneChanged;
-(void)_reloadAllViews;
-(float)decelerationDistanceThresholdToStopShowingMonthBanner;
-(BOOL)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(id)monthTitleView;
-(CGRect)frameForWeekContainingDate:(id)arg1 ;
-(id)cellWidthsForWeekContainingDate:(id)arg1 ;
-(id)headerFont;
-(BOOL)shouldShowMonthTitleHUDWhenScrolling;
-(void)setShouldShowMonthTitleHUDWhenScrolling:(BOOL)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didScroll;
-(void).cxx_destruct;
-(void)_localeChanged:(id)arg1 ;
@end
