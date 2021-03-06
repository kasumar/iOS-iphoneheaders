/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/DirectionsManagerObserver.h>
#import <Maps/DirectionsManagerDelegate.h>
#import <Maps/MNNavigationModeControllerDelegate.h>

@protocol DirectionsControllerDelegate;
@class DirectionsManager, MNNavigationModeController, MNRoute, SearchPinsManager, SelectedRouteStepAnnotation, NSMutableSet, FullscreenGuidanceModeController, DirectionsAnnotationsManager, UIImageView, MKMapView, DirectionsHistoryItem, MNRouteStep, VKAttributedRouteMatch;

@interface DirectionsController : NSObject <DirectionsManagerObserver, DirectionsManagerDelegate, MNNavigationModeControllerDelegate> {

	<DirectionsControllerDelegate>* _delegate;
	DirectionsManager* _directionsManager;
	MNNavigationModeController* _navViewController;
	int _directionsMode;
	MNRoute* _selectedRoute;
	int _stepIndex;
	BOOL _isShowingNavigationDisplay;
	BOOL _needToShowRoute;
	BOOL _pansAndZoomsToRouteOverview;
	BOOL _showsAlternateRoutes;
	SearchPinsManager* _pinsManager;
	int _searchMode;
	BOOL _isShowingAlternateRouteAnnotationMarkers;
	SCD_Struct_Si13 _routePositionViewCoordinate;
	SelectedRouteStepAnnotation* _selectedRouteStepAnnotation;
	NSMutableSet* _guidanceOutputs;
	FullscreenGuidanceModeController* _fullscreenMode;
	BOOL _showingRoute;
	DirectionsAnnotationsManager* _directionsAnnotationsManager;
	UIImageView* _routePositionView;
	MKMapView* _mapView;
	DirectionsHistoryItem* _currentHistoryItem;

}

@property (assign,nonatomic) BOOL isShowingNavigationDisplay;                                                 //@synthesize isShowingNavigationDisplay=_isShowingNavigationDisplay - In the implementation block
@property (assign,nonatomic) BOOL needToShowRoute;                                                            //@synthesize needToShowRoute=_needToShowRoute - In the implementation block
@property (assign,nonatomic) BOOL pansAndZoomsToRouteOverview;                                                //@synthesize pansAndZoomsToRouteOverview=_pansAndZoomsToRouteOverview - In the implementation block
@property (assign,nonatomic) BOOL showingRoute;                                                               //@synthesize showingRoute=_showingRoute - In the implementation block
@property (assign,nonatomic) BOOL showsAlternateRoutes;                                                       //@synthesize showsAlternateRoutes=_showsAlternateRoutes - In the implementation block
@property (assign,nonatomic,__weak) DirectionsAnnotationsManager * directionsAnnotationsManager;              //@synthesize directionsAnnotationsManager=_directionsAnnotationsManager - In the implementation block
@property (assign,nonatomic,__weak) <DirectionsControllerDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int directionsMode;                                                              //@synthesize directionsMode=_directionsMode - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                                      //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) int stepIndex;                                                                   //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) unsigned selectedRouteIndex; 
@property (assign,nonatomic) int searchMode;                                                                  //@synthesize searchMode=_searchMode - In the implementation block
@property (assign,nonatomic,__weak) SearchPinsManager * pinsManager;                                          //@synthesize pinsManager=_pinsManager - In the implementation block
@property (nonatomic,readonly) DirectionsManager * directionsManager;                                         //@synthesize directionsManager=_directionsManager - In the implementation block
@property (nonatomic,readonly) MNRouteStep * step; 
@property (nonatomic,retain) MNRoute * selectedRoute;                                                         //@synthesize selectedRoute=_selectedRoute - In the implementation block
@property (nonatomic,readonly) VKAttributedRouteMatch * currentRouteMatch; 
@property (nonatomic,retain) UIImageView * routePositionView;                                                 //@synthesize routePositionView=_routePositionView - In the implementation block
@property (nonatomic,retain) DirectionsHistoryItem * currentHistoryItem;                                      //@synthesize currentHistoryItem=_currentHistoryItem - In the implementation block
-(int)searchMode;
-(void)setDirectionsMode:(int)arg1 ;
-(int)directionsMode;
-(void)setSearchMode:(int)arg1 ;
-(void)directionsManagerWillReset:(id)arg1 ;
-(id)navigationSession;
-(BOOL)isNavigating;
-(void)directionsManagerDidReset:(id)arg1 ;
-(BOOL)directionsManagerShouldAllowAlternateRoutesForTransportType:(int)arg1 ;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(id)directionsSession;
-(void)directionsManagerUpdatedETA:(id)arg1 ;
-(void)directionsManagerUpdatedTrafficIncidents:(id)arg1 ;
-(void)directionsManagerUpdatedMatchedLocation:(id)arg1 matchedLocation:(id)arg2 ;
-(void)directionsManager:(id)arg1 didChangeNavigatorState:(int)arg2 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidFailToReceiveRoute:(id)arg1 ;
-(void)directionsManagerWillRecalculateRoute:(id)arg1 ;
-(void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2 ;
-(void)directionsManagerDidCancelLoad:(id)arg1 ;
-(void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2 ;
-(void)directionsManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 ;
-(void)directionsManager:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5 ;
-(void)directionsManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di8*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)directionsManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di8*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)directionsManagerHideSecondaryStep:(id)arg1 ;
-(void)directionsManagerHasArrived:(id)arg1 ;
-(void)directionsManager:(id)arg1 willStartNavigationSessionOfType:(int)arg2 options:(int)arg3 ;
-(void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(int)arg2 ;
-(void)setStepIndex:(int)arg1 ;
-(BOOL)isShowingNavigationDisplay;
-(id)currentRouteMatch;
-(void)endNavigation;
-(void)navigationModeWillDismiss:(id)arg1 isNavigationEnding:(BOOL)arg2 ;
-(id)directionsAnnotationsManager;
-(void)navigationModeDidFinish:(id)arg1 ;
-(void)willStartNavigation;
-(void)willPauseNavigation;
-(void)willResumeNavigation;
-(void)willEndNavigation;
-(void)navigationModeDidSwitchToNewRoute:(id)arg1 ;
-(void)navigationModeTransportTypeChanged:(id)arg1 transportType:(int)arg2 ;
-(void)saveToDefaults:(id)arg1 ;
-(id)navigationMapView;
-(id)currentNavigator;
-(void)setPinsManager:(id)arg1 ;
-(void)setDirectionsEnabled:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setDirectionsAnnotationsManager:(id)arg1 ;
-(BOOL)showingRoute;
-(void)restoreFromDefaults:(id)arg1 ;
-(void)setShowsAlternateRoutes:(BOOL)arg1 ;
-(void)presentNavigationController;
-(void)goToRouteStepAnimated:(BOOL)arg1 ;
-(void)goToRemainingRouteAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)goToMainRoutesAnimated:(BOOL)arg1 onCompletion:(/*^block*/ id)arg2 ;
-(id)directionsManager;
-(BOOL)isDirectionsSessionActive;
-(void)willStartDirections;
-(id)directionsRecorder;
-(void)startPresentingFullscreenGuidanceInsteadOfNavigation;
-(void)stopPresentingFullscreenGuidanceInsteadOfNavigation;
-(void)presentNavigationControllerAnimated:(BOOL)arg1 ;
-(void)setSelectedRouteNoNotify:(id)arg1 ;
-(void)_setShowingRoutes:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)switchToNavigationType:(int)arg1 ;
-(BOOL)_shouldCreateHistoryItemOnRouteLoad;
-(void)_createHistoryItem;
-(id)_historyItemForSelectedRouteWithTimestamp:(double)arg1 ;
-(void)setCurrentHistoryItem:(id)arg1 ;
-(id)currentHistoryItem;
-(void)setIsShowingNavigationDisplay:(BOOL)arg1 ;
-(void)_didChangeSelectedRouteIndex:(unsigned)arg1 ;
-(SCD_Struct_Se14)_mapRectForRemainingRoute:(id)arg1 ;
-(void)goToRouteStepAnimated:(BOOL)arg1 onCompletion:(/*^block*/ id)arg2 ;
-(BOOL)pansAndZoomsToRouteOverview;
-(SCD_Struct_Se14)_mapRectForStep:(id)arg1 inRoute:(id)arg2 ;
-(BOOL)needToShowRoute;
-(void)setNeedToShowRoute:(BOOL)arg1 ;
-(void)_showPreparedRouteAnimated:(BOOL)arg1 ;
-(void)setShowingRoute:(BOOL)arg1 ;
-(void)_presentNavigationType:(int)arg1 useSimulation:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_createNavigationModeControllerForType:(int)arg1 ;
-(void)directionsManagerDidFailToRecalculateRoute:(id)arg1 ;
-(BOOL)_needsToPanRoutePositionView;
-(CGRect)mapFrame;
-(void)setPansAndZoomsToRouteOverview:(BOOL)arg1 ;
-(id)pinsManager;
-(id)routePositionView;
-(void)setRoutePositionView:(id)arg1 ;
-(BOOL)showsAlternateRoutes;
-(id)_displayedRoutes;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(unsigned)selectedRouteIndex;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(void)setSelectedRoute:(id)arg1 ;
-(id)selectedRoute;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
-(int)stepIndex;
-(id)step;
@end

