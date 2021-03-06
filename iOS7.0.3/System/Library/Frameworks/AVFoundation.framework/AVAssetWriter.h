/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInternal, NSURL, NSString, NSArray, NSError, AVAssetWriterHelper;

@interface AVAssetWriter : NSObject {

	AVAssetWriterInternal* _internal;

}

@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (readonly) int status; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (getter=_helper,readonly) AVAssetWriterHelper * helper; 
+(id)_errorForOSStatus:(long)arg1 ;
+(id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingError;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(void)setPreferredVolume:(float)arg1 ;
-(SCD_Struct_CM4)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM4)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)inputGroups;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3 ;
-(id)outputURL;
-(id)outputFileType;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(/*^block*/ id)arg3 ;
-(id)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)cancelWriting;
-(BOOL)finishWriting;
-(void)finishWritingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 ;
-(void)_transitionToFailedStatusWithError:(id)arg1 ;
-(id)_helper;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)status;
-(BOOL)startWriting;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(id)error;
-(id)inputs;
-(void)finalize;
@end

