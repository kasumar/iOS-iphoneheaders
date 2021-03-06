/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCReachabilityDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject;

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate> {

	NSString* _accountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)addPerformer:(id)arg1 ;
+(void)removePerformer:(id)arg1 ;
-(void)perform;
-(id)_key;
-(void)networkReachabilityChanged:(char)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(void)resumeAndAutoClose;
-(void)_close;
@end

