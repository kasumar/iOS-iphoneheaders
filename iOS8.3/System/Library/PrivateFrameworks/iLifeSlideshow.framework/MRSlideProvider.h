/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRLoadable.h>
#import <iLifeSlideshow/MRRenderable.h>

@class NSString, NSDictionary, NSInvocationOperation, NSLock, NSConditionLock, MRFrame, MRImage, MRLayerEffect, MCSlide, MRLayer, MRAudioPlayer;

@interface MRSlideProvider : NSObject <MRLoadable, MRRenderable> {

	CGSize mDefaultSize;
	float mStillTime;
	NSString* mImageSizeScript;
	NSDictionary* mEffectAttributes;
	NSString* mShowTimeScript;
	NSInvocationOperation* mPreloadOperation;
	NSLock* mPreloadOperationLock;
	NSConditionLock* mPreloadSemaphore;
	MRFrame* mFrame;
	MRImage* mOriginalImage;
	MRImage* mOutputImage;
	CGSize mRequestedSize;
	double mShowTime;
	double mShowDuration;
	double mSlideStartTime;
	double mSlideDuration;
	MRLayerEffect* mEffectLayer;
	MCSlide* mSlide;
	int mKenBurnsType;
	NSString* mAssetPath;
	float mOriginalImageAspectRatio;
	MRLayer* mSlideLayer;
	CGSize mImageSize;
	CGSize mLastImageSize;
	double mLastTime;
	CGSize mLastDaSize;
	CGSize mSizeFactor;
	char mIsAnimatedGIF;
	MCSlide* mSlideCopy;
	unsigned mSlideIndex;
	MRAudioPlayer* mFakeAudioPlayer;
	unsigned mFlags;

}

@property (assign,nonatomic) CGSize defaultSize; 
@property (assign,nonatomic) char isMonochromatic; 
@property (assign,nonatomic) char useMipmapping; 
@property (assign,nonatomic) char isStill; 
@property (assign,nonatomic) float stillTime; 
@property (nonatomic,copy) NSString * imageSizeScript; 
@property (nonatomic,retain) NSDictionary * effectAttributes; 
@property (nonatomic,copy) NSString * showTimeScript; 
@property (assign,nonatomic) char slideIsReadonly; 
@property (readonly) char hasFilters; 
@property (assign,nonatomic) double showTime; 
@property (assign,nonatomic) double showDuration; 
@property (readonly) char canPlay; 
@property (assign,nonatomic) char isPlaying; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) CGSize sizeFactor; 
@property (nonatomic,retain) MCSlide * slide; 
@property (assign) int kenBurnsType; 
@property (assign,nonatomic) char needsToUpdateLayout; 
@property (readonly) MRFrame * frame; 
@property (nonatomic,readonly) CGSize requestedSize; 
@property (nonatomic,readonly) float imageAspectRatio; 
@property (nonatomic,readonly) double slideStartTime; 
@property (nonatomic,readonly) double slideDuration; 
@property (nonatomic,readonly) char isLoaded; 
@property (nonatomic,readonly) char isNative3D; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaFriendly; 
@property (nonatomic,readonly) char isInfinite; 
+(void)applyKenBurnsForSlide:(id)arg1 inPlug:(id)arg2 forSize:(CGSize)arg3 atTime:(double)arg4 withTargetSize:(CGSize)arg5 kenBurnsType:(int)arg6 translation:(CGPoint*)arg7 scale:(float*)arg8 rotation:(float*)arg9 ;
-(void)dealloc;
-(CGSize)defaultSize;
-(MRFrame *)frame;
-(char)isOpaque;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setShowDuration:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isLoaded;
-(void)cleanup;
-(void)unload;
-(MCSlide *)slide;
-(void)finalize;
-(void)cancelLoading;
-(char)canPlay;
-(char)isPlaying;
-(NSDictionary *)effectAttributes;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(double)showTime;
-(void)setSlide:(MCSlide *)arg1 ;
-(double)showDuration;
-(int)kenBurnsType;
-(void)setKenBurnsType:(int)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)loadWithArguments:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isNative3D;
-(char)isAlphaFriendly;
-(char)isInfinite;
-(void)setDefaultSize:(CGSize)arg1 ;
-(NSString *)imageSizeScript;
-(void)setImageSizeScript:(NSString *)arg1 ;
-(float)imageAspectRatio;
-(void)setShowTime:(double)arg1 ;
-(NSString *)showTimeScript;
-(char)isMonochromatic;
-(void)setIsPlaying:(char)arg1 ;
-(void)_loadTextureWithArguments:(id)arg1 ;
-(void)loadTextureWithArguments:(id)arg1 ;
-(char)beginLiveUpdate;
-(char)endLiveUpdate;
-(void)setIsMonochromatic:(char)arg1 ;
-(char)useMipmapping;
-(void)setUseMipmapping:(char)arg1 ;
-(CGSize)requestedSize;
-(char)isStill;
-(void)setNeedsToUpdateLayout:(char)arg1 ;
-(char)updateStuffWithAssetManager:(id)arg1 ;
-(void)setStillTime:(float)arg1 ;
-(void)setIsStill:(char)arg1 ;
-(id)initWithEffectLayer:(id)arg1 ;
-(void)setSlideIsReadonly:(char)arg1 ;
-(void)setShowTimeScript:(NSString *)arg1 ;
-(void)updateShowTimeAndDurationWithPlug:(id)arg1 andAttributes:(id)arg2 ;
-(float)stillTime;
-(void)_unloadIfNotUpdatingLive;
-(CGSize)framedImageSizeAtIndex:(unsigned long)arg1 aspectRatio:(float)arg2 ;
-(CGSize)unframedImageSizeForAspectRatio:(float)arg1 frameID:(id)arg2 andFrameAttributes:(id)arg3 atIndex:(unsigned long)arg4 framedImageSize:(CGSize*)arg5 ;
-(void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2 ;
-(char)slideIsReadonly;
-(char)needsToUpdateLayout;
-(char)hasFilters;
-(CGSize)sizeFactor;
-(void)setSizeFactor:(CGSize)arg1 ;
-(double)slideStartTime;
-(double)slideDuration;
-(void)printFlags;
@end
