/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/NSMutableCopying.h>
#import <VoiceMemos/NSCopying.h>
#import <VoiceMemos/RCDictionaryPListRepresentationCoding.h>

@class NSURL, NSDate, NSArray, NSString;

@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {

	NSURL* _savedRecordingURI;
	NSDate* _creationDate;
	NSURL* _composedAVURL;
	NSURL* _composedWaveformURL;
	NSArray* _decomposedFragments;
	NSArray* _composedFragments;
	double _cachedComposedAVURLDuration;

}

@property (nonatomic,retain) NSURL * savedRecordingURI;                       //@synthesize savedRecordingURI=_savedRecordingURI - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSURL * composedAVURL;                         //@synthesize composedAVURL=_composedAVURL - In the implementation block
@property (nonatomic,readonly) NSURL * composedWaveformURL;                   //@synthesize composedWaveformURL=_composedWaveformURL - In the implementation block
@property (nonatomic,readonly) double composedDuration; 
@property (nonatomic,retain) NSArray * decomposedFragments;                   //@synthesize decomposedFragments=_decomposedFragments - In the implementation block
@property (nonatomic,readonly) NSArray * composedFragments;                   //@synthesize composedFragments=_composedFragments - In the implementation block
@property (assign,nonatomic) double cachedComposedAVURLDuration;              //@synthesize cachedComposedAVURLDuration=_cachedComposedAVURLDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_compositionMetadataURLForCompositionBundleURL:(id)arg1 ;
+(id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingURI:(id)arg3 createIfNeeded:(BOOL)arg4 ;
+(id)_compositionMetadataURLForComposedAVURL:(id)arg1 ;
+(id)_compositionFragmentsFolderForComposedAVURL:(id)arg1 ;
+(id)compositionLoadedForSavedRecordingURI:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)compositionBundleURLForComposedAVURL:(id)arg1 ;
+(id)_unitTestingCompositionWithDecomposedFragments:(id)arg1 ;
+(id)compositionLoadedFromCompositionBundleURL:(id)arg1 ;
+(id)compositionWithComposedAVURL:(id)arg1 ;
-(id)compositionAsset;
-(id)playableAsset;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)creationDate;
-(double)composedDuration;
-(id)initWithDictionaryPListRepresentation:(id)arg1 ;
-(id)dictionaryPListRepresentation;
-(void)deleteFromFilesystem;
-(unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(id)_calcualteComposedFragments;
-(id)initWithComposedAVURL:(id)arg1 savedRecordingURI:(id)arg2 decomposedFragments:(id)arg3 composedFragments:(id)arg4 ;
-(void)setSavedRecordingURI:(NSURL *)arg1 ;
-(double)_composedDuration;
-(NSURL *)savedRecordingURI;
-(NSArray *)decomposedFragments;
-(unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(NSArray *)composedFragments;
-(id)compositionByClippingToComposedTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)setDecomposedFragments:(NSArray *)arg1 ;
-(id)composedFragmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 ;
-(NSURL *)composedAVURL;
-(NSURL *)composedWaveformURL;
-(void)setSavedRecordingURIFromRecoveredRecordingURI:(id)arg1 ;
-(unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(BOOL)arg1 ;
-(id)compositionByDeletingAndSplittingAtComposedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)newRandomFragmentWithInsertionTimeRangeInComposition:(SCD_Struct_RC4)arg1 pathExtension:(id)arg2 ;
-(void)enumerateOrphanedFragmentsWithBlock:(/*^block*/id)arg1 ;
-(id)compositionByReloadingFromDefaultMetadataLocation;
-(BOOL)saveMetadataToDefaultLocation;
-(id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1 ;
-(void)recacheComposedDuration;
-(double)cachedComposedAVURLDuration;
-(void)setCachedComposedAVURLDuration:(double)arg1 ;
@end

