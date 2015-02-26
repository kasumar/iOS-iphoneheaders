/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNInspectableAnimation.h>

@class NSSet, KNBuild, TSPLazyReference, NSArray, NSString, KNSlide;

@interface KNBuildChunk : TSPContainedObject <KNInspectableAnimation> {

	unsigned long long mIndexInBuild;
	double mDelay;
	double mDuration;
	BOOL mAutomatic;
	unsigned long long mReferent;
	KNBuild* mCachedBuild;
	TSPLazyReference* mBuildReference;
	BOOL mNeedsAutomaticFromBuildAttributes;
	BOOL mNeedsReferentFromBuildAttributes;
	BOOL mNeedsDelayFromBuildAttributes;
	BOOL mNeedsDurationFromBuildAttributes;
	unsigned long long mCachedIndexOnSlide;
	unsigned long long mCachedActiveIndexOnSlide;

}

@property (nonatomic,readonly) KNBuild * build; 
@property (nonatomic,readonly) unsigned long long indexInBuild; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double delay; 
@property (assign,getter=isAutomatic,nonatomic) BOOL automatic; 
@property (assign,nonatomic) unsigned long long referent; 
@property (nonatomic,readonly) unsigned long long indexOnSlide; 
@property (nonatomic,readonly) unsigned long long deliveryGroupIndex; 
@property (nonatomic,readonly) BOOL isFirstInBuild; 
@property (nonatomic,readonly) BOOL isFirstOnSlide; 
@property (nonatomic,readonly) BOOL isFirstInDeliveryGroup; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) unsigned long long activeIndexOnSlide; 
@property (getter=isAutomaticWithPreviousChunk,nonatomic,readonly) BOOL automaticWithPreviousChunk; 
@property (getter=isAutomaticWithPreviousChunkOnSameDrawable,nonatomic,readonly) BOOL automaticWithPreviousChunkOnSameDrawable; 
@property (nonatomic,readonly) unsigned long long eventTrigger; 
@property (nonatomic,readonly) NSArray * availableEventTriggers; 
@property (nonatomic,readonly) BOOL supportsWithStart; 
@property (nonatomic,readonly) BOOL hasComplement; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
-(void)saveToArchive:(BuildChunkArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const BuildChunkArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(void)didLoadBuild:(id)arg1 ;
-(void)p_setDelayFromBuildAttributes:(id)arg1 withReferent:(unsigned long long)arg2 automatic:(BOOL)arg3 ;
-(void)p_setDurationFromBuildAttributes:(id)arg1 ;
-(unsigned long long)indexInBuild;
-(unsigned long long)indexOnSlide;
-(BOOL)isFirstInBuild;
-(BOOL)isAutomaticWithPreviousChunk;
-(BOOL)isFirstInDeliveryGroup;
-(BOOL)hasComplement;
-(void)setReferent:(unsigned long long)arg1 ;
-(unsigned long long)referent;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 copyingAttributesFromChunk:(id)arg3 ;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 ;
-(void)p_invalidateSlideCaches;
-(BOOL)p_canBuildWithChunk:(id)arg1 checkOtherChunksBuildingWithThisChunk:(BOOL)arg2 ;
-(BOOL)p_chunksBuildingWithThisChunkCanBuildWithChunk:(id)arg1 ;
-(id)p_chunksBuildingWithThisChunk;
-(id)p_previousChunkOnSlide;
-(BOOL)canBuildWithChunk:(id)arg1 ;
-(BOOL)supportsWithStart;
-(unsigned long long)deliveryGroupIndex;
-(id)p_stringForReferent:(unsigned long long)arg1 ;
-(BOOL)canEditAnimations;
-(NSSet *)inspectableAttributes;
-(id)initWithIndex:(unsigned long long)arg1 inBuild:(id)arg2 referent:(unsigned long long)arg3 copyingRemainingAttributesFromChunk:(id)arg4 ;
-(BOOL)isAutomaticWithPreviousChunkOnSameDrawable;
-(id)nextChunkOnSlide;
-(NSArray *)availableEventTriggers;
-(unsigned long long)eventTrigger;
-(BOOL)isFirstOnSlide;
-(unsigned long long)activeIndexOnSlide;
-(BOOL)isComplementOfBuildChunk:(id)arg1 ;
-(KNBuild *)build;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(BOOL)isActive;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(NSString *)title;
-(double)delay;
-(BOOL)isAutomatic;
-(void)setAutomatic:(BOOL)arg1 ;
-(KNSlide *)slide;
@end
