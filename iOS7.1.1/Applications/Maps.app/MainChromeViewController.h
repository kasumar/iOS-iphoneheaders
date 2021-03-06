/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ChromeViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <Maps/AdvisorySheetViewDelegate.h>
#import <Maps/MainChromeViews.h>
#import <Maps/AudioSettingsViewControllerDelegate.h>

@protocol MapsChromeTopBarContent;
@class FloatingControlsView, AdvisorySheet, MapsChromeCommonControls, SearchPinsManager, BlurView, EasyCallbackAlertView, UIButton, AudioSettingsViewController, UINavigationController, UIPopoverController, NSHashTable, UIToolbar, UIView, NSError, MainChromeViewItem, MKMapView;

@interface MainChromeViewController : ChromeViewController <UINavigationControllerDelegate, GEOResourceManifestTileGroupObserver, AdvisorySheetViewDelegate, MainChromeViews, AudioSettingsViewControllerDelegate> {

	<MapsChromeTopBarContent>* _topBarContent;
	CGRect _statusBarFrame;
	int _statusBarStyle;
	SCD_Struct_Di7 _bars;
	SCD_Struct_Di7 _previousBars;
	BOOL _hasEnqueuedBarStateChange;
	BOOL _hasPerformedBarStateChange;
	double _barStateChangeDuration;
	BOOL _appearing;
	BOOL _rotating;
	BOOL _advisoryVisible;
	BOOL _displayed;
	BOOL _showingSettingsTopBarStyle;
	BOOL _animatingTopBars;
	unsigned _viewCallbacksSuppressionCount;
	BOOL _hasCalledViewAppearMethods;
	/*^block*/ id _lastUpdateTopBarContentCompletionBlock;
	AdvisorySheet* _advisorySheet;
	BOOL _animatingPresentAdvisory;
	BOOL _animatingDismissAdvisory;
	BOOL _hasDoneInitalLayoutForControlBar;
	MapsChromeCommonControls* _commonControls;
	SearchPinsManager* _searchPinsManager;
	BlurView* _topBlurView;
	EasyCallbackAlertView* _locationServicesAlertView;
	UIButton* _audioControl;
	AudioSettingsViewController* _audioSettingsViewController;
	UINavigationController* _audioSettingsNavController;
	UIPopoverController* _audioPopoverController;
	int _viewMode;
	BOOL _isObservingNonselectingTaps;
	BOOL _hasScheduledTapToHideToggle;
	BOOL _shouldSuppressTapToHideToggle;
	NSHashTable* _interruptions;
	int _topBarLightness;
	FloatingControlsView* _controlBar;
	UIToolbar* _topBar;
	/*^block*/ id _didFinishAnimatingSettingsView;
	UIView* _mapViewReplacement;
	UIView* _customTopBarView;
	NSError* _displayedLocationError;

}

@property (getter=isShowingLocationServicesAlert,nonatomic,readonly) BOOL showingLocationServicesAlert; 
@property (nonatomic,retain) <MapsChromeTopBarContent> * topBarContent;                                              //@synthesize topBarContent=_topBarContent - In the implementation block
@property (nonatomic,readonly) UINavigationController * phoneNavigationController; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (nonatomic,readonly) BOOL topBarHidden; 
@property (nonatomic,readonly) BOOL animatingTopBars;                                                                //@synthesize animatingTopBars=_animatingTopBars - In the implementation block
@property (readonly) MapsChromeCommonControls * commonControls;                                                      //@synthesize commonControls=_commonControls - In the implementation block
@property (nonatomic,retain) UIToolbar * topBar;                                                                     //@synthesize topBar=_topBar - In the implementation block
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed; 
@property (nonatomic,copy) id didFinishAnimatingSettingsView;                                                        //@synthesize didFinishAnimatingSettingsView=_didFinishAnimatingSettingsView - In the implementation block
@property (nonatomic,retain) FloatingControlsView * controlBar;                                                      //@synthesize controlBar=_controlBar - In the implementation block
@property (nonatomic,retain) UIView * mapViewReplacement;                                                            //@synthesize mapViewReplacement=_mapViewReplacement - In the implementation block
@property (setter=_setCustomTopBarView:,nonatomic,retain) UIView * _customTopBarView;                                //@synthesize customTopBarView=_customTopBarView - In the implementation block
@property (nonatomic,copy) id lastUpdateTopBarContentCompletionBlock;                                                //@synthesize lastUpdateTopBarContentCompletionBlock=_lastUpdateTopBarContentCompletionBlock - In the implementation block
@property (nonatomic,retain) NSError * displayedLocationError;                                                       //@synthesize displayedLocationError=_displayedLocationError - In the implementation block
@property (nonatomic,readonly) MainChromeViewItem * topItem; 
@property (nonatomic,readonly) MKMapView * mapView; 
@property (nonatomic,readonly) UIView * containingView; 
+(int)_blurViewStyleForBarBackdropKind:(int)arg1 ;
+(Class)chromeViewItemClass;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)topBarSizeWillChange:(CGSize)arg1 ;
-(void)topBarSizeDidChange:(CGSize)arg1 ;
-(id)commonControls;
-(BOOL)supportsSuppression;
-(void)setTopBarContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBlurColor:(id)arg1 forMode:(id)arg2 ;
-(void)hideTopBarShadow:(BOOL)arg1 forMode:(id)arg2 ;
-(void)setBackdropKind:(int)arg1 forMode:(id)arg2 ;
-(void)setBottomLineHidden:(BOOL)arg1 forMode:(id)arg2 ;
-(void)insertSubviewBelowTopBar:(id)arg1 ;
-(id)controlBar;
-(void)dismissAdvisorySheetWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCurrentMode:(id)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 topBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateTopBarContentAnimated:(BOOL)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setExtendedBlurFrame:(CGRect)arg1 forMode:(id)arg2 ;
-(/*^block*/ id)presentUnhandledInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)pushMode:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)arg1 ;
-(void)setSuppressed:(BOOL)arg1 ;
-(void)configureNavigationController:(id)arg1 forLightLevel:(int)arg2 ;
-(void)presentAdvisorySheetAnimated:(BOOL)arg1 identifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonTitle:(id)arg5 delegate:(id)arg6 ;
-(BOOL)isTapToHideEnabledForMode:(id)arg1 ;
-(void)setTapToHideEnabled:(BOOL)arg1 forMode:(id)arg2 ;
-(BOOL)isShowingLocationServicesAlert;
-(void)ignoreCurrentTapForTapToHide;
-(void)quiesceMapView;
-(void)unquiesceMapView;
-(void)setTopBlurViewHidden:(BOOL)arg1 ;
-(void)setControlBarHidden:(BOOL)arg1 ;
-(id)presentViewController:(id)arg1 willInvokeViewAppearanceCallbacks:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)advisorySheetButtonWasTapped:(id)arg1 ;
-(void)willPresentSettings;
-(void)willDismissSettings;
-(id)initChromeAndContainer:(id*)arg1 ;
-(BOOL)getPreferredUserInterfaceIdiom:(out int*)arg1 ;
-(BOOL)animatingTopBars;
-(void)_userDefaultsDidChange;
-(void)_updateCurrentEnvironmentName;
-(void)_animateBarsToCurrentStateWithDuration:(double)arg1 ;
-(int)_currentTopBarBackdropStyle;
-(void)setControlBar:(id)arg1 ;
-(void)_layoutTopBlurView;
-(void)_layoutControlBar;
-(void)_layoutTopBar;
-(void)_layoutMapView;
-(float)_statusBarMaxY;
-(id)_customTopBarView;
-(id)_topBarIfAvailable;
-(BOOL)_shouldSlideTopBar;
-(CGRect)_topBlurViewFrame;
-(void)_updateBottomLineHidden;
-(id)topBarContent;
-(CGRect)_advisorySheetFrameForPresentation;
-(void)_updateAudioRoutingButtonVisability;
-(void)_setStatusBarHidden:(BOOL)arg1 topBarHidden:(BOOL)arg2 controlBarHidden:(BOOL)arg3 animated:(BOOL)arg4 ;
-(id)topContainer;
-(void)_updateAdvisorySheetLayout;
-(void)_updateBlurView;
-(void)_updateTopBarContentLightnessAnimated:(BOOL)arg1 ;
-(void)_updateTapToHideIfNeeded;
-(/*^block*/ id)lastUpdateTopBarContentCompletionBlock;
-(void)_setCustomTopBarView:(id)arg1 ;
-(void)setLastUpdateTopBarContentCompletionBlock:(/*^block*/ id)arg1 ;
-(id)presentNavSafetyAlertForInterruption:(int)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)setDisplayedLocationError:(id)arg1 ;
-(void)moveToMapDisplayStyle:(int)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)arg1 ;
-(id)mapViewReplacement;
-(BOOL)topBarHidden;
-(id)_advisorySheet;
-(void)_presentAdvisorySheetAnimated:(BOOL)arg1 ;
-(id)_audioSettingsViewController;
-(void)_dismissAudioSettings:(id)arg1 ;
-(id)_audioControl;
-(id)_audioSettingsNavController;
-(void)_handleTapOnAudioControl:(id)arg1 ;
-(void)_setAudioSettingsViewControllerBluetoothEnabled:(BOOL)arg1 ;
-(void)_scheduleToggleBarsForTapToHide;
-(void)_toggleBarsForTapToHide;
-(void)audioSettingsViewControllerSettingsDidAppear:(id)arg1 ;
-(void)audioSettingsViewControllerSettingsDidDisappear:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 hasRoutesToPick:(BOOL)arg2 ;
-(void)audioSettingsViewControllerPickedRouteForAudioSetting:(id)arg1 ;
-(void)audioSettingsViewController:(id)arg1 updatedHFPPreferenceForAudioSetting:(BOOL)arg2 ;
-(BOOL)topBlurViewHidden;
-(BOOL)controlBarHidden;
-(void)_endInterruption:(id)arg1 ;
-(void)setTopBarContent:(id)arg1 ;
-(id)phoneNavigationController;
-(int)currentBackdropKind;
-(void)setTopBarMiniAltHeight:(float)arg1 forMode:(id)arg2 ;
-(void)_setBlockingInteractionsForPageCurl:(BOOL)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)attributionAnchorOffset;
-(void)performInitialConfigurationOnSearchPinsManager:(id)arg1 ;
-(void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1 ;
-(/*^block*/ id)didFinishAnimatingSettingsView;
-(void)setDidFinishAnimatingSettingsView:(/*^block*/ id)arg1 ;
-(void)setMapViewReplacement:(id)arg1 ;
-(id)displayedLocationError;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)dealloc;
-(id)_preferredStatusBarHideAnimationParameters;
-(int)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)topItem;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingHeaderView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void).cxx_destruct;
-(id)topBar;
-(void)setTopBar:(id)arg1 ;
-(void)setViewMode:(int)arg1 ;
-(CGRect)_topBarFrame;
-(UIEdgeInsets)labelEdgeInsets;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(BOOL)statusBarHidden;
@end

