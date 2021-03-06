/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject {

	AVAudioSessionMediaPlayerOnlyInternal* _audioSession;

}

@property (assign) id<AVAudioSessionDelegateMediaPlayerOnly> delegate; 
@property (readonly) NSString * category; 
@property (readonly) NSString * mode; 
@property (readonly) double preferredHardwareSampleRate; 
@property (readonly) double preferredIOBufferDuration; 
@property (readonly) BOOL inputIsAvailable; 
@property (readonly) double currentHardwareSampleRate; 
@property (readonly) long long currentHardwareInputNumberOfChannels; 
@property (readonly) long long currentHardwareOutputNumberOfChannels; 
+(void)initialize;
-(id)_weakReference;
-(void)_removeFPListeners;
-(void)_addFPListeners;
-(void)_setFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(BOOL)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(void)setApplicationAudioSession:(BOOL)arg1 ;
-(BOOL)isApplicationAudioSession;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<AVAudioSessionDelegateMediaPlayerOnly>)arg1 ;
-(id)init;
-(id<AVAudioSessionDelegateMediaPlayerOnly>)delegate;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(double)preferredIOBufferDuration;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
@end

