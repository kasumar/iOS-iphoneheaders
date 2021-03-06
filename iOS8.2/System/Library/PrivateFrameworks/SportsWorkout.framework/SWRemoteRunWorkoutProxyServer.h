/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SWLocalRunWorkoutProxy, CPDistributedMessagingCenter, CPDistributedNotificationCenter, NSTimer;

@interface SWRemoteRunWorkoutProxyServer : NSObject {

	SWLocalRunWorkoutProxy* _workoutProxy;
	CPDistributedMessagingCenter* _messagingCenter;
	CPDistributedNotificationCenter* _notificationCenter;
	NSTimer* _propertyUpdateTimer;

}
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)playPowerSong;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)prepareToActivateWorkout;
-(void)getGoing;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)_sensorSearchStateChanged:(id)arg1 ;
-(void)_workoutStateChanged:(id)arg1 ;
-(void)_nowPlayingChanged:(id)arg1 ;
-(void)_clientDidCheckin;
-(void)_handlePropertyUpdateTimer:(id)arg1 ;
-(void)_postPropertyUpdateNotification;
@end

