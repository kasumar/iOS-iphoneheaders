/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DaemonCachedObject : NSObject {

	NSObject*<OS_dispatch_source> _expirationTimer;
	id _object;
	id object;

}

@property (nonatomic,retain) id object; 
-(id)copyExpirationTimer;
-(void)setExpirationTimer:(id)arg1 ;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

