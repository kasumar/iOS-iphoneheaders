/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MediaPlayer/MPControllerProtocol.h>
#import <MediaPlayer/MPAVControllerNode.h>

@class MPAVItem, MPAVController, UIView, MPTransitionController;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {

	id _delegate;
	long long _interfaceOrientation;
	MPAVItem* _item;
	MPAVController* _player;
	MPViewController* _pushedViewController;
	MPTransitionController* _pushedTransitionController;
	/*^block*/ id _popViewControllerHandler;
	unsigned _appearing : 1;
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;
	unsigned _showOverlayWhileAppearingDisabled : 1;
	bool _registeredForPlayerNotifications;
	long long _playerLockedCount;
	bool _idleTimerDisabled;

}

@property (assign,nonatomic) bool registeredForPlayerNotifications;                                                     //@synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications - In the implementation block
@property (nonatomic,copy) id popViewControllerHandler;                                                                 //@synthesize popViewControllerHandler=_popViewControllerHandler - In the implementation block
@property (assign,nonatomic) bool observesApplicationSuspendResumeEventsOnly; 
@property (assign,setter=setIdleTimerDisabled:,getter=idleTimerDisabled,nonatomic) bool idleTimerDisabled;              //@synthesize idleTimerDisabled=_idleTimerDisabled - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                     //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UIView * view; 
-(void)setItem:(id)arg1 ;
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(void)endIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)beginIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)willChangeToInterfaceOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(bool)arg2 ;
-(void)didChangeToInterfaceOrientation:(long long)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(/*^block*/ id)popViewControllerHandler;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)pushViewController:(id)arg1 withTransition:(id)arg2 ;
-(void)stopTicking;
-(void)startTicking;
-(void)setObservesApplicationSuspendResumeEventsOnly:(bool)arg1 ;
-(void)setPopViewControllerHandler:(/*^block*/ id)arg1 ;
-(void)applicationDidSuspendEventsOnly;
-(void)applicationDidResumeEventsOnly;
-(void)applicationResumed;
-(void)_pushTransitionEnded:(id)arg1 ;
-(void)_popTransitionEnded:(id)arg1 ;
-(void)lockPlayer;
-(void)unlockPlayer;
-(void)setRegisteredForPlayerNotifications:(bool)arg1 ;
-(void)incrementAggregateStatisticsDisplayCount;
-(bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(id)copyOverlayViewForTransitionToItem:(id)arg1 ;
-(void)beginTransitionOverlayHidding;
-(void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1 ;
-(long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1 ;
-(bool)isAppearing;
-(bool)observesApplicationSuspendResumeEventsOnly;
-(void)setAppearing:(bool)arg1 ;
-(bool)registeredForPlayerNotifications;
-(bool)idleTimerDisabled;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)popViewControllerAnimated:(bool)arg1 ;
-(long long)orientation;
-(void)setIdleTimerDisabled:(bool)arg1 ;
-(void)setView:(id)arg1 ;
-(id)item;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)_canReloadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

