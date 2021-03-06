/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKMediaPlayerController.h>

@protocol TSKMediaPlayerControllerDelegate;
@class NSArray, NSMutableSet, CADisplayLink, NSString;

@interface TSKAnimatedGIFController : NSObject <TSKMediaPlayerController> {

	id<TSKMediaPlayerControllerDelegate> mDelegate;
	CGImageSourceRef mSource;
	NSArray* mFrames;
	NSMutableSet* mLayers;
	char mPlaying;
	double mLastDisplayUpdateTime;
	unsigned mDisplayLinkCounter;
	double mAbsoluteCurrentTime;
	float mRate;
	float mRateBeforeScrubbing;
	unsigned mScrubbingCount;
	double mStartTime;
	double mEndTime;
	float mVolume;
	int mRepeatMode;
	CADisplayLink* mDisplayLink;
	char fastReversing;
	char fastForwarding;

}

@property (nonatomic,readonly) CGImageRef imageForCurrentTime; 
@property (assign,nonatomic) double lastDisplayUpdateTime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TSKMediaPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) char canPlay; 
@property (assign,getter=isPlaying,nonatomic) char playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) int repeatMode; 
@property (assign,nonatomic) float volume; 
@property (getter=isScrubbing,nonatomic,readonly) char scrubbing; 
@property (nonatomic,readonly) char canFastReverse; 
@property (assign,getter=isFastReversing,nonatomic) char fastReversing; 
@property (nonatomic,readonly) char canFastForward; 
@property (assign,getter=isFastForwarding,nonatomic) char fastForwarding; 
@property (nonatomic,readonly) double absoluteCurrentTime; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
-(id)newLayer;
-(id)initWithData:(id)arg1 delegate:(id)arg2 ;
-(double)absoluteCurrentTime;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGImageRef)imageForTime:(double)arg1 ;
-(double)absoluteDuration;
-(void)p_prepareFrameTimes;
-(void)p_updateDisplayLink;
-(void)p_setAbsoluteCurrentTime:(double)arg1 ;
-(void)setLastDisplayUpdateTime:(double)arg1 ;
-(void)p_updateLayers;
-(void)p_enableDisplayLink;
-(void)p_disableDisplayLink;
-(double)lastDisplayUpdateTime;
-(void)p_displayLinkDidTrigger:(id)arg1 ;
-(void)p_getAbsoluteMovieTime:(double*)arg1 shouldStopPlayback:(char*)arg2 shouldReversePlayback:(char*)arg3 ;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)removePeriodicTimeObserver:(id)arg1 ;
-(char)canFastReverse;
-(char)isFastReversing;
-(void)setFastReversing:(char)arg1 ;
-(char)canFastForward;
-(char)isFastForwarding;
-(void)setFastForwarding:(char)arg1 ;
-(void)removeLayer:(id)arg1 ;
-(CGImageRef)imageForCurrentTime;
-(void)cancelPendingSeeks;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(char)isScrubbing;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(id<TSKMediaPlayerControllerDelegate>)delegate;
-(double)duration;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)seekToEnd;
-(double)remainingTime;
-(void)teardown;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(void)addLayer:(id)arg1 ;
-(double)endTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)currentTime;
-(char)canPlay;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end

