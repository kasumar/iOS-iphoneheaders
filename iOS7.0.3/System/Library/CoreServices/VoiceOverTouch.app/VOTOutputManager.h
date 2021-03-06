/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class NSMutableArray, SCRCIndexMap, NSLock, VOTOutputRequestRunner, AXTimer, AXAccessQueue, NSMutableSet;

@interface VOTOutputManager : NSObject {

	CFArrayRef _queuedOutputRequests;
	NSMutableArray* _requestRunners;
	SCRCIndexMap* _components;
	NSLock* _queueLock;
	BOOL _lastRequestShouldNotBeInterrupted;
	BOOL _requestIsRunning;
	unsigned long _numberOfRequestSinceLastUninterruptable;
	float _cachedRate;
	BOOL _shutdown;
	VOTOutputRequestRunner* _onHoldRunner;
	AXTimer* _inactivateAudioTimer;
	AXAccessQueue* _audioSessionQueue;
	BOOL _audioSessionActive;
	NSMutableSet* _audioSessionUsers;

}
+(id)outputManager;
+(CFStringRef)copyUnicodeDescriptionStringForCharacter:(int)arg1 ;
+(id)outputManagerIfExists;
-(void)updateVolume;
-(id)componentForType:(int)arg1 ;
-(void)resetSpeechRate;
-(void)updateVoice;
-(void)_handleProcessRequest:(id)arg1 ;
-(void)_handleRequestFinished:(id)arg1 ;
-(void)_dispatchNextQueuedRequest;
-(BOOL)isSystemMuted;
-(void)setUseCompactVoice:(BOOL)arg1 ;
-(float)speechRateForLanguage:(id)arg1 ;
-(float)defaultSpeechRate;
-(float)_convertRateToSynthesizer:(float)arg1 ;
-(void)stopSpeakingAtBoundary:(int)arg1 allRequests:(BOOL)arg2 ;
-(id)pauseStringForType:(int)arg1 ;
-(void)speakSimpleString:(id)arg1 braille:(BOOL)arg2 ;
-(void)playSoundFast:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)finishedOutputRequest:(id)arg1 ;
-(void)synchVolumeWithSystem;
-(void)toggleSystemMute;
-(void)alterVoiceOverVolume:(BOOL)arg1 ;
-(void)holdCurrentRequest;
-(void)resumeCurrentRequest;
-(void)enableAudioSession:(id)arg1 ;
-(void)disableAudioSession:(id)arg1 ;
-(void)speakSimpleString:(id)arg1 ;
-(void)playSoundFast:(id)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(void)clearQueue;
-(void)shutdown;
-(BOOL)isSpeaking;
-(float)speechRate;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)pauseSpeakingAtBoundary:(int)arg1 ;
-(void)continueSpeaking;
-(void)stopSpeakingAtBoundary:(int)arg1 ;
@end

