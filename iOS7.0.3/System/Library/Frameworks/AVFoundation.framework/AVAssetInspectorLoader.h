/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSURL, NSString, NSArray, AVAssetCache;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
@property (nonatomic,readonly) SCD_Struct_CM4 duration; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (nonatomic,readonly) NSArray * chapterGroupInfo; 
@property (nonatomic,readonly) AVAssetCache * assetCache; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * downloadDestinationURL; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) unsigned referenceRestrictions; 
@property (getter=_shouldOptimizeAccessForLinearMoviePlayback,nonatomic,readonly) BOOL shouldOptimizeAccessForLinearMoviePlayback; 
@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference; 
+(void)initialize;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(unsigned)referenceRestrictions;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(id)_weakReference;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)assetInspector;
-(id)chapterGroupInfo;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(id)_mapFigErrorCodeToNSError:(long)arg1 ;
-(id)resolvedURL;
-(id)lyrics;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)assetCache;
-(BOOL)_isStreaming;
-(BOOL)isPlayable;
-(unsigned long long)downloadToken;
-(void)dealloc;
-(id)init;
-(SCD_Struct_CM4)duration;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)hasProtectedContent;
-(BOOL)isReadable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
@end
