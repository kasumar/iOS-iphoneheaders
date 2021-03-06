/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {

	AVAssetReaderVideoCompositionOutputInternal* _videoCompositionOutputInternal;

}

@property (nonatomic,readonly) NSArray * videoTracks; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(id)_asset;
-(AVVideoComposition *)videoComposition;
-(void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)_errorForOSStatus:(long)arg1 ;
-(char)_prepareForReadingReturningError:(id*)arg1 ;
-(char)alwaysCopiesSampleData;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSArray *)videoTracks;
-(id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(void)_setVideoComposition:(id)arg1 ;
-(NSDictionary *)videoSettings;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mediaType;
-(void)finalize;
@end

