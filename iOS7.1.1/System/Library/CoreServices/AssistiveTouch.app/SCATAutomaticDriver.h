/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:10 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATDriver.h>

@class AXTimer;

@interface SCATAutomaticDriver : SCATDriver {

	BOOL _isSpeakingFocusContext;
	AXTimer* _focusTimer;
	int _currentCycleCount;

}

@property (nonatomic,readonly) double focusInterval; 
@property (nonatomic,readonly) unsigned maxAutoscanCycles; 
@property (nonatomic,retain) AXTimer * focusTimer;                      //@synthesize focusTimer=_focusTimer - In the implementation block
@property (assign,nonatomic) int currentCycleCount;                     //@synthesize currentCycleCount=_currentCycleCount - In the implementation block
@property (assign,nonatomic) BOOL isSpeakingFocusContext;               //@synthesize isSpeakingFocusContext=_isSpeakingFocusContext - In the implementation block
-(void)_idleTimerDidFire;
-(int)driverType;
-(void)_didTransitionToPhase:(int)arg1 ;
-(void)_didWrapInDirection:(int)arg1 ;
-(void)_willStepToNextFocusContext:(id)arg1 inDirection:(int)arg2 ;
-(void)willDrillIntoGroup;
-(void)willDrillOutOfGroup;
-(BOOL)_handleRunAction;
-(BOOL)_handleSelectAction;
-(BOOL)_handleStopAction;
-(void)freezeScanning;
-(void)willFinishAsScannerDriver;
-(void)outputManager:(id)arg1 willSpeakFocusContext:(id)arg2 ;
-(void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2 ;
-(void)actionHandlerDidFireAction:(id)arg1 ;
-(void)actionHandlerDidCancelPendingAction:(id)arg1 ;
-(void)setFocusTimer:(id)arg1 ;
-(int)currentCycleCount;
-(id)focusTimer;
-(void)_endAutoscanning;
-(void)setCurrentCycleCount:(int)arg1 ;
-(void)_autoscanToNextFocusContext;
-(double)focusInterval;
-(BOOL)isSpeakingFocusContext;
-(void)setIsSpeakingFocusContext:(BOOL)arg1 ;
-(BOOL)_shouldPauseOnIdleTimer;
-(unsigned)maxAutoscanCycles;
-(void)dealloc;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
@end

