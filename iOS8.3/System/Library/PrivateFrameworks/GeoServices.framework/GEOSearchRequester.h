/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOSearchRequester : NSObject {

	NSMapTable* _pendingSearches;
	NSLock* _pendingSearchesLock;

}
+(id)sharedSearchRequester;
-(void)dealloc;
-(id)init;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(char)arg3 finished:(/*^block*/id)arg4 refinement:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(char)arg3 finished:(/*^block*/id)arg4 refinement:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 isCompletions:(char)arg8 ;
-(void)search:(id)arg1 finished:(/*^block*/id)arg2 refinement:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)search:(id)arg1 useBackgroundConnection:(char)arg2 finished:(/*^block*/id)arg3 refinement:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)completions:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(char)arg3 finished:(/*^block*/id)arg4 refinement:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)cancelSearch:(id)arg1 ;
@end
