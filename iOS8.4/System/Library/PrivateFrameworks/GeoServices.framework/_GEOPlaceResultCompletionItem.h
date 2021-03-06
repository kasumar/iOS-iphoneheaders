/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOCompletionItem.h>
#import <GeoServices/_GEOCompletionSearchHint.h>

@class GEOPlaceResult, NSString, NSData, NSArray;

@interface _GEOPlaceResultCompletionItem : NSObject <GEOCompletionItem, _GEOCompletionSearchHint> {

	GEOPlaceResult* _placeResult;
	NSString* _query;
	NSData* _completionMetaData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)query;
-(id)suggestionsOptions;
-(id)initWithPlaceResult:(id)arg1 query:(id)arg2 completion:(id)arg3 ;
-(NSArray *)displayLines;
-(id)calloutTitle;
-(id)queryLine;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(BOOL)getCoordinate:(SCD_Struct_GE15*)arg1 ;
-(void)sendFeedback;
-(NSData *)entryMetadata;
-(id)completionLocation;
-(id<GEOMapItem>)geoMapItem;
-(NSData *)metadata;
@end

