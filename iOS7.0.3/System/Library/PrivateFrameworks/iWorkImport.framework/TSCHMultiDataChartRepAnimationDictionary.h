/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class TSURetainedPointerKeyDictionary;

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {

	TSURetainedPointerKeyDictionary* mEntries;

}
+(id)dictionary;
-(id)entryForLayer:(id)arg1 ;
-(id)nonretainedValueForObject:(id)arg1 ;
-(void)addAnimation:(id)arg1 animationInfo:(id)arg2 forLayer:(id)arg3 ;
-(id)animationDictionaryForBuildEngine;
-(void)addEntriesFromAnimationDictionary:(id)arg1 beginTime:(double)arg2 duration:(float)arg3 ;
-(void)dealloc;
-(id)init;
@end

