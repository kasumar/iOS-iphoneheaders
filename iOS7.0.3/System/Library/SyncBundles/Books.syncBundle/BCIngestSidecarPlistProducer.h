/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray, NSMutableArray;

@interface BCIngestSidecarPlistProducer : BCPlistProducer {

	NSArray* _sidecarDeletes;
	NSMutableArray* _filterMatches;

}

@property (nonatomic,readonly) NSArray * filterMatches;              //@synthesize filterMatches=_filterMatches - In the implementation block
-(id)produceData;
-(id)filterMatches;
-(id)initWithPath:(id)arg1 sidecarPath:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldRetry;
@end

