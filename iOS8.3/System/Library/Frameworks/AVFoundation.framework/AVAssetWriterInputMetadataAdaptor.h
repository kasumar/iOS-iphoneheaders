/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
+(void)initialize;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(char)appendTimedMetadataGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)finalize;
@end

