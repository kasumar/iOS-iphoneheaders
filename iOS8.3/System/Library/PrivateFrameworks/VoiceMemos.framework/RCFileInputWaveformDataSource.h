/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _cachedDuration;
	float _loadingProgress;
	NSURL* _AVFileURL;

}

@property (nonatomic,copy,readonly) NSURL * AVFileURL;                   //@synthesize AVFileURL=_AVFileURL - In the implementation block
@property (nonatomic,readonly) char savesGeneratedWaveform; 
-(void)startLoading;
-(double)duration;
-(char)setPaused:(char)arg1 ;
-(float)loadingProgress;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(char)arg2 segmentFlushInterval:(double)arg3 ;
-(void)saveGeneratedWaveformIfNecessary;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)initWithAVFileURL:(id)arg1 ;
-(char)savesGeneratedWaveform;
-(void)setLoadingProgress:(float)arg1 ;
-(NSURL *)AVFileURL;
@end
