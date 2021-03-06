/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRLoadable.h>
#import <iLifeSlideshow/MRRenderable.h>

@class NSDictionary, MRLayerEffect, MRImage, NSString, NSOperation;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	MRLayerEffect* mEffectLayer;
	MRImage* mOutputImage;
	NSString* mEffectID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	unsigned mSeed;
	NSRange mMultiImageSlideRange;
	char mNeedsToUpdateSlides;
	char mNeedsToUpdateTexts;
	char mNeedsToUpdateAttributes;
	char mIsNative3D;
	char mIsOpaque;
	char mIsAlphaFriendly;
	NSOperation* mPreloadOperation;
	CGSize mPixelSize;
	MRImage* mAccumulatedImage;
	char mNeedsToUpdateAccumulatedImage;
	double mDefaultPhaseInDuration;
	double mDefaultMainDuration;
	double mDefaultPhaseOutDuration;
	double mPhaseInDuration;
	double mMainDuration;
	double mPhaseOutDuration;

}

@property (nonatomic,readonly) char supportsDynamicExpansion; 
@property (nonatomic,readonly) int typicalSlideBatchSize; 
@property (readonly) NSString * effectID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) char needsToUpdateSlides; 
@property (assign,nonatomic) char needsToUpdateTexts; 
@property (assign,nonatomic) NSRange multiImageSlideRange; 
@property (nonatomic,retain) MRImage * accumulatedImage; 
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@property (nonatomic,readonly) char isNative3D; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaFriendly; 
@property (nonatomic,readonly) char isInfinite; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5 ;
+(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
+(id)retainedEffectWithEffectID:(id)arg1 forEffectLayer:(id)arg2 ;
+(char)hasCustomTiming;
+(char)supportsDynamicExpansionForEffectID:(id)arg1 ;
+(unsigned)typicalSlideBatchSizeForEffectID:(id)arg1 ;
-(void)_unload;
-(void)dealloc;
-(char)isOpaque;
-(void)_cleanup;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)cleanup;
-(void)unload;
-(CGSize)pixelSize;
-(void)finalize;
-(void)cancelLoading;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(NSString *)effectID;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)setMultiImageSlideRange:(NSRange)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)retainByEffectLayer:(id)arg1 ;
-(void)releaseByEffectLayer:(id)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)loadWithArguments:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isNative3D;
-(char)isAlphaFriendly;
-(char)isInfinite;
-(char)isRetainedByEffectLayer;
-(double)_computePhaseTimeForTime:(double)arg1 ;
-(double)_computeTimeForPhaseTime:(double)arg1 ;
-(void)setLiveAttributes:(id)arg1 ;
-(void)setAccumulatedImage:(MRImage *)arg1 ;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(int)_maxLinesForTextElement:(id)arg1 ;
-(char)needsToUpdateSlides;
-(void)setNeedsToUpdateSlides:(char)arg1 ;
-(char)needsToUpdateTexts;
-(void)setNeedsToUpdateTexts:(char)arg1 ;
-(MRImage *)accumulatedImage;
-(NSRange)multiImageSlideRange;
-(char)supportsDynamicExpansion;
-(int)typicalSlideBatchSize;
-(unsigned)firstSlideIndexStillNeededAtTime:(double)arg1 ;
-(char)needsMoreSlidesAtTime:(double)arg1 ;
@end

