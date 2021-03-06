/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MRLayer.h>

@class MCContainerSerializer, NSMutableArray, NSMutableDictionary, MRLayer, MRTransition, NSArray;

@interface MRLayerSerializer : MRLayer {

	MCContainerSerializer* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	MRLayer* mCurrentSublayer;
	MRLayer* mNextSublayer;
	MRTransition* mCurrentTransition;
	MRLayer* mSublayerForTransition;
	MRLayer* mSublayerToPrecompute;
	id mPrecomputingTarget;
	unsigned mPrecomputingType;
	MRLayer* mLiveSourceSublayer;
	MRLayer* mLiveTargetSublayer;
	char mLiveTransitionIsBackwards;
	char mIsTransitioning;
	char mNeedsToUpdateSublayersTiming;
	char mNeedsToUpdateTransitionAttributes;
	char mHasWarnedDelegateAboutNearingEnd;

}

@property (readonly) NSArray * sublayers; 
-(id)_currentState;
-(char)isOpaque;
-(NSArray *)sublayers;
-(void)deactivate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(char)supportsDynamicExpansion;
-(void)_unobservePlug;
-(void)depreactivate:(char)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlugOnDepreactivate;
-(char)_isNative3D;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasAudio;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)actionForKey:(id)arg1 recursive:(char)arg2 ;
-(id)_dumpLayerWithOptions:(unsigned)arg1 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(char)arg1 ;
-(void)_unobserveSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)endTransitionToSublayer;
-(void)_executeLayerCommandQueue;
-(void)_prerenderSublayersAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_preprecomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(char)arg2 localPoint:(CGPoint*)arg3 ;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(char)arg2 ;
-(id)_createSublayerForPlug:(id)arg1 ;
-(void)_observeSublayer:(id)arg1 ;
-(void)_precomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unobserveSublayerOnDepreactivate:(id)arg1 ;
-(void)_observeSublayerOnPreactivate:(id)arg1 ;
-(void)_updateSublayersTiming;
-(double)transitionToSublayerAtIndex:(unsigned)arg1 ;
-(id)sublayerAtIndex:(unsigned)arg1 ;
-(double)transitionToNextSublayer;
-(double)transitionToPreviousSublayer;
@end

