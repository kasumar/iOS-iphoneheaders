/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, MPUNowPlayingDelegate;
@class NSObject, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingController : NSObject {

	NSObject*<OS_dispatch_source> _timeInformationTimer;
	NSDictionary* _currentNowPlayingInfo;
	double _currentElapsed;
	double _currentDuration;
	int _isPlaying;
	NSString* _currentNowPlayingAppDisplayID;
	char _currentNowPlayingAppIsRunning;
	char _isRegisteredForNowPlayingNotifications;
	char _isUpdatingNowPlayingInfo;
	char _isUpdatingPlaybackState;
	char _isUpdatingNowPlayingApp;
	UIImage* _cachedNowPlayingArtwork;
	char _cachedArtworkDirty;
	char _shouldUpdateNowPlayingArtwork;
	id<MPUNowPlayingDelegate> _delegate;
	double _timeInformationUpdateInterval;

}

@property (assign,nonatomic,__weak) id<MPUNowPlayingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentNowPlayingInfo; 
@property (nonatomic,readonly) UIImage * currentNowPlayingArtwork; 
@property (nonatomic,readonly) char isPlaying; 
@property (nonatomic,readonly) NSString * nowPlayingAppDisplayID; 
@property (nonatomic,readonly) double currentElapsed;                                //@synthesize currentElapsed=_currentElapsed - In the implementation block
@property (nonatomic,readonly) double currentDuration; 
@property (assign,nonatomic) double timeInformationUpdateInterval;                   //@synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval - In the implementation block
@property (assign,nonatomic) char shouldUpdateNowPlayingArtwork;                     //@synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork - In the implementation block
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)dealloc;
-(void)setDelegate:(id<MPUNowPlayingDelegate>)arg1 ;
-(id)init;
-(id<MPUNowPlayingDelegate>)delegate;
-(void)update;
-(void)stopUpdating;
-(void)_updateCurrentNowPlaying;
-(void)_updatePlaybackState;
-(void)_updateNowPlayingAppDisplayID;
-(void)_updateTimeInformation;
-(void)_stopUpdatingTimeInformation;
-(void)_startUpdatingTimeInformation;
-(NSDictionary *)currentNowPlayingInfo;
-(UIImage *)currentNowPlayingArtwork;
-(NSString *)nowPlayingAppDisplayID;
-(double)currentDuration;
-(void)setTimeInformationUpdateInterval:(double)arg1 ;
-(void)startUpdating;
-(double)currentElapsed;
-(double)timeInformationUpdateInterval;
-(char)shouldUpdateNowPlayingArtwork;
-(void)setShouldUpdateNowPlayingArtwork:(char)arg1 ;
-(char)isPlaying;
@end

