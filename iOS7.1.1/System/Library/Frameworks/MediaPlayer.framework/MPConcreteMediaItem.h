/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItem.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <MediaPlayer/MPMediaItemArrayPIDEncodableItem.h>
#import <MediaPlayer/MPCacheableConcreteMediaEntity.h>

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPMediaItemArrayPIDEncodableItem, MPCacheableConcreteMediaEntity> {

	MPMediaLibrary* _library;
	unsigned long long _persistentID;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (nonatomic,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
+(id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 ;
+(bool)supportsSecureCoding;
-(id)mediaLibrary;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(Class)itemArrayCoderPIDDataCodingClass;
-(id)valuesForProperties:(id)arg1 ;
-(bool)didSkipWithPlayedToTime:(double)arg1 ;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(bool)arg2 ;
-(void)incrementSkipCount;
-(void)incrementPlayCountForPlayingToEnd;
-(bool)incrementPlayCountForStopTime:(double)arg1 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3 ;
-(id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(bool*)arg2 ;
-(double)nominalHasBeenPlayedThreshold;
-(void)reallyIncrementPlayCount;
-(id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 ;
-(id)cachedPropertyValues;
-(void)invalidateCachedProperties;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(void).cxx_destruct;
-(id)valueForProperty:(id)arg1 ;
-(bool)setValue:(id)arg1 forProperty:(id)arg2 ;
-(unsigned long long)persistentID;
-(bool)existsInLibrary;
@end

